// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "TrapManager.generated.h"

UCLASS()
class LAST_PHARAOH_API ATrapManager : public AActor
{
	GENERATED_BODY()
	
private:	
	// Sets default values for this actor's properties
	ATrapManager();

public:
	TSubclassOf<AActor> AGetTrapManagerInstance();

private:
	TSubclassOf<AActor> Instance;
	UWorld* WRLD;
	FVector Location;
	FRotator Rotation;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void SpawnTrap(FVector Location, FRotator Rotation);
};
