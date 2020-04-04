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

//ATrap ATrap::CreateTrap(int index)
//{
//	// this is essentially our factory : random trap created and make it 'spawnable' through the arguments of this method
//	switch (index)
//	{
//	case 1:
//		//fire_trap
//		//return ATrap::CreateFireTrap();
//		break;
//	case 2:
//		//spike_trap
//		//return ATrap::CreateSpikeTrap(); //this is wrong i can't create objects like this with ue4. i need to use WRLD->SpawnActor()
//		break;
//	case 3:
//		//dart_trap
//		//return (ATrap)ATrap::CreateDartTrap();
//		break;
//	}
//}

//AFire_Trap ATrap::CreateFireTrap()
//{
//	return AFire_Trap();
//}
//
//ASpike_Trap ATrap::CreateSpikeTrap()
//{
//	return ASpike_Trap();
//}

//ATrap ATrap::CreateDartTrap()
//{
//return this;
//}
