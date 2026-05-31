#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "COABaseCharacter.generated.h"

UCLASS()
class CLASHOFAVATARS_API ACOABaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ACOABaseCharacter();

protected:
	virtual void BeginPlay() override;

	// Değişkenler alt sınıflardan erişilebilir olmalı [cite: 9-12]
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "COA")
	bool bDead;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "COA")
	float Health;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "COA")
	float MaxHealth;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "COA")
	float HealingRate;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "COA")
	float WalkSpeed;

public:
	virtual void Tick(float DeltaTime) override;
};