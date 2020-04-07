// Fill out your copyright notice in the Description page of Project Settings.


#include "Trap.h"

// Sets default values
ATrap::ATrap()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//give a static mesh to the trap
	BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
	BaseMesh->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);

	RootComponent = BaseMesh;

	
}

// Called when the game starts or when spawned
void ATrap::BeginPlay()
{
	Super::BeginPlay();

	Location = GetActorLocation();
	Rotation = GetActorRotation();
	FTimerHandle TrapTimerHandle;
	GetWorld()->GetTimerManager().SetTimer(TrapTimerHandle, this, &ATrap::TriggeredTrap, TrapTimer, true, 5); //TODO might need to change the 5 value here
}

// Called every frame
void ATrap::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//function that spawns a damagetrap that damages the player if he goes through here
void ATrap::TriggeredTrap()
{
	//spawn damage traps
	if (DamageTrap != nullptr)
	{
		GetWorld()->SpawnActor(DamageTrap, &Location, &Rotation);
	}
}