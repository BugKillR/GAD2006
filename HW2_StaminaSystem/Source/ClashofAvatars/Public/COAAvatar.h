#pragma once

#include "CoreMinimal.h"
#include "COABaseCharacter.h"
#include "COAAvatar.generated.h"

UCLASS()
class CLASHOFAVATARS_API ACOAAvatar : public ACOABaseCharacter
{
	GENERATED_BODY()

public:
	ACOAAvatar();

	// Kamera bileşenleri [cite: 17, 128-129]
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character")
	class USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character")
	class UCameraComponent* Camera;

	// Stamina özellikleri [cite: 18-24, 452-459]
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "COA")
	float Stamina;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "COA")
	float MaxStamina;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "COA")
	float StaminaGainRate;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "COA")
	float StaminaDrainRate;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "COA")
	float RunSpeed;

	bool bStaminaDrained;
	bool bRunning;

protected:
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual void Tick(float DeltaTime) override;

private:
	// Hareket ve Koşma Fonksiyonları [cite: 186-187, 435-437]
	void MoveForward(float value);
	void MoveRight(float value);
	void RunPressed();
	void RunReleased();
	void UpdateMovementParams();
};