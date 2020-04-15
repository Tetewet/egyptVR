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
		//put a delay, and make the character not move anymore
		OtherActor->GetComponentByClass(UCharacterMovementComponent::StaticClass());
		player->GetCharacterMovement()->StopActiveMovement();

		
		//reset the player to the base location -> he's dead
		player->DeathReset();
	}
}

void ADamageTrap::TrapActivation()
{
	bIsTriggered = true;
}

bool ADamageTrap::GetTrapActivated()
{
	return bIsTriggered;
}

void ADamageTrap::DeactivateTrap()
{
	bIsTriggered = false;
}