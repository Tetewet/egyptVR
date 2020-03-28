// Fill out your copyright notice in the Description page of Project Settings.


#include "Trap.h"

// Sets default values
ATrap::ATrap()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATrap::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATrap::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATrap::NotifyActorBeginOverlap(AActor* OtherActor)
{
	//on overlap of the collision box, we will make damage to the player
	auto player = Cast<ACharacter>(OtherActor);
	if (player != nullptr)
	{
		//in case i need to move the character :
		OtherActor->GetComponentByClass(UCharacterMovementComponent::StaticClass());
		//activate the animation

		//damage the player or kill him

	}
}

void ATrap::CreateTrap(FVector Location, FRotator Rotation)
{
	// this is essentially our factory : random trap created and make it 'spawnable' through the arguments of this method

}
