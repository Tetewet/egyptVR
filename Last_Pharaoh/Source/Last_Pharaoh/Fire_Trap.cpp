// Fill out your copyright notice in the Description page of Project Settings.


#include "Fire_Trap.h"

// Sets default values
AFire_Trap::AFire_Trap()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFire_Trap::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFire_Trap::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

