#include "COAAvatar.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h" // "Template" hatasını çözen include

ACOAAvatar::ACOAAvatar()
{
	// Kamera kurulumu [cite: 169-173]
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->TargetArmLength = 300.0f;
	SpringArm->bUsePawnControlRotation = true;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("MainCamera"));
	Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);
	Camera->bUsePawnControlRotation = false;

	bUseControllerRotationYaw = false;

	// Stamina başlangıç değerleri [cite: 446, 453-459]
	MaxStamina = 100.0f;
	Stamina = MaxStamina;
	StaminaGainRate = 10.0f;
	StaminaDrainRate = 20.0f;
	RunSpeed = 600.0f;
	bStaminaDrained = false;
	bRunning = false;
}

void ACOAAvatar::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Eksen (Axis) bağlamaları [cite: 179-180, 404-405]
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("MoveForward", this, &ACOAAvatar::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ACOAAvatar::MoveRight);

	// Aksiyon (Action) bağlamaları [cite: 407-408]
	PlayerInputComponent->BindAction("Run", IE_Pressed, this, &ACOAAvatar::RunPressed);
	PlayerInputComponent->BindAction("Run", IE_Released, this, &ACOAAvatar::RunReleased);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
}

void ACOAAvatar::UpdateMovementParams()
{
	if (GetCharacterMovement())
	{
		// Stamina bittiyse veya koşulmuyorsa hızı WalkSpeed yap [cite: 461-462]
		GetCharacterMovement()->MaxWalkSpeed = (bRunning && !bStaminaDrained) ? RunSpeed : WalkSpeed;
	}
}

void ACOAAvatar::RunPressed() { bRunning = true; UpdateMovementParams(); }
void ACOAAvatar::RunReleased() { bRunning = false; UpdateMovementParams(); }

void ACOAAvatar::MoveForward(float value)
{
	if (GetController() && value != 0.0f)
	{
		const FRotator Rotation = GetController()->GetControlRotation();
		const FRotator YawRotation(0.0f, Rotation.Yaw, 0.0f);
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, value);
	}
}

void ACOAAvatar::MoveRight(float value)
{
	if (GetController() && value != 0.0f)
	{
		const FRotator Rotation = GetController()->GetControlRotation();
		const FRotator YawRotation(0.0f, Rotation.Yaw, 0.0f);
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		AddMovementInput(Direction, value);
	}
}

void ACOAAvatar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	bool bIsMoving = GetVelocity().Size() > 0.1f;
	bool bIsWalking = GetCharacterMovement() && GetCharacterMovement()->MovementMode == EMovementMode::MOVE_Walking;

	// Stamina Sistemi Mantığı [cite: 447-451, 467]
	if (bRunning && bIsMoving && bIsWalking)
	{
		Stamina = FMath::Max(0.0f, Stamina - (StaminaDrainRate * DeltaTime));
	}
	else
	{
		Stamina = FMath::Min(MaxStamina, Stamina + (StaminaGainRate * DeltaTime));
	}

	// Stamina bittiğinde yorulma durumu
	if (Stamina <= 0.0f && !bStaminaDrained)
	{
		bStaminaDrained = true;
		UpdateMovementParams();
	}
	else if (bStaminaDrained && Stamina >= MaxStamina)
	{
		bStaminaDrained = false;
		UpdateMovementParams();
	}
}