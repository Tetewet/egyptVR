// Fill out your copyright notice in the Description page of Project Settings.


#include "Trap.h"

// Sets default values
ATrap::ATrap()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//give a static mesh to the trap
	BaseMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BaseMesh"));
	BaseMesh->AttachTo(RootComponent);
	RootComponent = BaseMesh;

	//give a collision box to activate animations
	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
	CollisionBox->AttachTo(RootComponent);

	//give a mesh to make the animations (spikes for the trap)
	SpikeLeft = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SpikeLeft"));
	SpikeLeft->AttachTo(RootComponent);
	SpikeRight = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SpikeRight"));
	SpikeRight->AttachTo(RootComponent);

	//set the animations to assets (not blueprints)
	SpikeLeft->SetAnimationMode(EAnimationMode::AnimationSingleNode);
	SpikeRight->SetAnimationMode(EAnimationMode::AnimationSingleNode);

	//don't loop the animations
	SpikeLeft->AnimationData.bSavedLooping = false;
	SpikeRight->AnimationData.bSavedLooping = false;

	//don't start the animations
	SpikeLeft->AnimationData.bSavedPlaying = false;
	SpikeRight->AnimationData.bSavedPlaying = false;
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
	//making sure the actor overlapping is our vrcharacter
	auto player = Cast<AVRCharacter>(OtherActor);
	if (player != nullptr)
	{
		TriggeredTrap();
	}
}

//function that triggers the animation of the trap if the damage trap is not destroyed
void ATrap::TriggeredTrap()
{
	//spawn damage traps
	if (DamageTrap != nullptr)
	{
		auto trap = Cast<ADamageTrap>(DamageTrap);
		if (trap->GetTrapActivated()
			&& SpikeLeft->AnimationData.AnimToPlay != nullptr
			&& SpikeRight->AnimationData.AnimToPlay != nullptr)
		{
			SpikeLeft->PlayAnimation(SpikeLeft->AnimationData.AnimToPlay, false); //the false is for looping
			SpikeRight->PlayAnimation(SpikeRight->AnimationData.AnimToPlay, false);
		}
	}
}