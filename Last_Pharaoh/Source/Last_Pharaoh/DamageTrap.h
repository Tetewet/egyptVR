// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "VRCharacter.h"
#include "GameFramework/Actor.h"
#include "DamageTrap.generated.h"

UCLASS()
class LAST_PHARAOH_API ADamageTrap : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADamageTrap();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere)
		float Damage = 0.5f;
	UPROPERTY(VisibleAnywhere)
		UBoxComponent* CollisionBox;
	UPROPERTY()
		FVector Direction;
	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* BaseMesh;

private:
	int max = 350;
	int current;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
	void SideAttack();
};
