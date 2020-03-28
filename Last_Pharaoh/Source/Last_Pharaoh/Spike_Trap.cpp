// Fill out your copyright notice in the Description page of Project Settings.


#include "Spike_Trap.h"

// Sets default values
ASpike_Trap::ASpike_Trap()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASpike_Trap::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASpike_Trap::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

