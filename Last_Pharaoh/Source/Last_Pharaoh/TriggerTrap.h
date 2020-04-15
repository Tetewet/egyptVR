// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "VRCharacter.h"
#include "DamageTrap.h"
#include "GameFramework/Actor.h"
#include "TriggerTrap.generated.h"

UCLASS()
class LAST_PHARAOH_API ATriggerTrap : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ATriggerTrap();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere)
		UBoxComponent* CollisionBox;
	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* BaseMesh;
	UPROPERTY(EditAnywhere)
		UAudioComponent* ActivationAudio; 
	UPROPERTY(EditAnywhere)
		UAudioComponent* DeactivationAudio;
	UPROPERTY(EditAnywhere)
		bool bIsTrapActivator;
	UPROPERTY(EditAnywhere)
		ADamageTrap* DamageTrap;
	bool bIsActivatedOnce;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
};
