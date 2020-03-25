// Fill out your copyright notice in the Description page of Project Settings.


#include "TrapManager.h"

// Sets default values
ATrapManager::ATrapManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	WRLD = GetWorld();
	
	
}

// Called when the game starts or when spawned
void ATrapManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATrapManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

ATrapManager ATrapManager::AGetTrapManagerInstance()
{
	if (Instance == nullptr)
	{
		Instance = ATrapManager();
		WRLD->SpawnActor(Instance);
	}
	return Instance;
}
