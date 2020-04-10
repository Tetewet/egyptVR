// Fill out your copyright notice in the Description page of Project Settings.


#include "DamageTrap.h"

// Sets default values
ADamageTrap::ADamageTrap()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//give a mesh to the damage trap
	BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
	BaseMesh->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);

	//make the basemesh the root component
	RootComponent = BaseMesh;

	//give a collision box to the trap
	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionTrapBox"));
	CollisionBox->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called when the game starts or when spawned
void ADamageTrap::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADamageTrap::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADamageTrap::NotifyActorBeginOverlap(AActor* OtherActor)
{
	//on overlap of the collision box, we will make damage to the player
	auto player = Cast<AVRCharacter>(OtherActor);
	if (player != nullptr && bIsTriggered)
	{
		//reset the player to the base location -> he's dead

		//damage the player or kill him
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Black, TEXT("YOU'VE BEEN HIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIT"));
	}
}

void ADamageTrap::TrapActivation()
{
	bIsTriggered = true;
	//start an animation

}