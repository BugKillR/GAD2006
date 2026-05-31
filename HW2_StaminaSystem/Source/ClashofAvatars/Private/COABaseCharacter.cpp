#include "COABaseCharacter.h"
#include "GameFramework/CharacterMovementComponent.h" // Kritik include

ACOABaseCharacter::ACOABaseCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	// Varsayılan değerler [cite: 278-288]
	bDead = false;
	Health = 100.0f;
	MaxHealth = 100.0f;
	HealingRate = 0.0f;
	WalkSpeed = 300.0f;

	// Karakterin hareket yönüne dönmesi [cite: 259-260]
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f);
	GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
}

void ACOABaseCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void ACOABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Can yenileme mantığı [cite: 349-351]
	if (!bDead)
	{
		Health = FMath::Min(MaxHealth, Health + (HealingRate * DeltaTime));
	}
}