// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Trap.h"
#include "GameFramework/Actor.h"
#include "Spike_Trap.generated.h"

UCLASS()
class LAST_PHARAOH_API ASpike_Trap : public ATrap
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpike_Trap();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
