// Fill out your copyright notice in the Description page of Project Settings.


#include "TrapManager.h"

// Sets default values
ATrapManager::ATrapManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	WRLD = GetWorld();
	
	Location = GetActorLocation();
	Rotation = GetActorRotation();
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

TSubclassOf<AActor> ATrapManager::AGetTrapManagerInstance()
{
	//singleton : si l'instance est nulle, en faire une nouvelle. si elle n'est pas nulle, retourner l'instance de la classe
	if (Instance == nullptr)
	{
		Instance = TSubclassOf<AActor>();
		//
		WRLD->SpawnActor(Instance, &Location, &Rotation);
	}
	return Instance;
}

void ATrapManager::SpawnTrap(FVector Location, FRotator Rotation)
{

}