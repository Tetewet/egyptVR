// Fill out your copyright notice in the Description page of Project Settings.


#include "TriggerTrap.h"

// Sets default values
ATriggerTrap::ATriggerTrap()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//give a mesh to the damage trap
	BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
	BaseMesh->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);

	//make the basemesh the root component
	RootComponent = BaseMesh;

	//give a collision box to the trap
	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionTriggerBox"));
	CollisionBox->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);

	//give a sound to play when activating the trigger
	ActivationAudio = CreateDefaultSubobject<UAudioComponent>(TEXT("ActivationAudio"));
	ActivationAudio->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	DeactivationAudio = CreateDefaultSubobject<UAudioComponent>(TEXT("DeactivationAudio"));
	DeactivationAudio->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	ActivationAudio->Activate(false);
	DeactivationAudio->Activate(false);

	bIsActivatedOnce = false;
}

// Called when the game starts or when spawned
void ATriggerTrap::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ATriggerTrap::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATriggerTrap::NotifyActorBeginOverlap(AActor* OtherActor)
{
	auto player = Cast<AVRCharacter>(OtherActor);
	//check null
	if (player != nullptr && DamageTrap != nullptr)
	{
		//check if we are the activator : different sound and logic
		if (bIsTrapActivator && ActivationAudio != nullptr && !bIsActivatedOnce)
		{
			//activate the designated trap
			DamageTrap->TrapActivation();

			//activate a sound 
			ActivationAudio->Play();
			bIsActivatedOnce = true;
		}
		else
		{
			//deactivate the designated trap
			DamageTrap->DeactivateTrap();

			if (DeactivationAudio != nullptr && !bIsActivatedOnce)
			{
				//activate a sound 
				DeactivationAudio->Play();
				bIsActivatedOnce = true;
			}
		}
	}
}
