// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine.h"
#include "VRCharacter.h"
#include "TimerManager.h"
#include "DamageTrap.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "Trap.generated.h"

UCLASS()
class LAST_PHARAOH_API ATrap : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ATrap();

	//i dont need a collision box, just a location from whom to spawn the damage traps
	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* BaseMesh;
	UPROPERTY(EditAnywhere)
		float TrapTimer = 2;
	UPROPERTY(EditAnywhere)
		FVector Location;
	UPROPERTY(EditAnywhere)
		FRotator Rotation;
	UPROPERTY(EditAnywhere)
		TSubclassOf<ADamageTrap> DamageTrap;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void TriggeredTrap();
};
