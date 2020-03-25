// Fill out your copyright notice in the Description page of Project Settings.


#include "VRCharacter.h"

// Sets default values
AVRCharacter::AVRCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//root
	VRRoot = CreateDefaultSubobject<USceneComponent>(TEXT("VRRoot"));
	VRRoot->SetupAttachment(GetRootComponent());

	//camera
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(VRRoot);

	//teleport marker
	TeleportMarker = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TeleportMarker"));
	TeleportMarker->SetupAttachment(GetRootComponent());
}

// Called when the game starts or when spawned
void AVRCharacter::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AVRCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	MoveRootToCamera();
	CheckTeleport();
}

// Called to bind functionality to input
void AVRCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("Forward"), this, &AVRCharacter::MoveForward);
	PlayerInputComponent->BindAxis(TEXT("Right"), this, &AVRCharacter::MoveRight);
	PlayerInputComponent->BindAction(TEXT("Teleport"), IE_Released, this, &AVRCharacter::Teleport);
}

void AVRCharacter::MoveForward(float move)
{
	AddActorWorldTransform(FTransform(move * Camera->GetForwardVector()));
	AddMovementInput(move * Camera->GetForwardVector());
}
void AVRCharacter::MoveRight(float move)
{
	AddMovementInput(move * Camera->GetRightVector());
	AddActorWorldTransform(FTransform(move * Camera->GetRightVector()));
}

void AVRCharacter::MoveRootToCamera()
{
	FVector offset = Camera->GetComponentLocation() - GetActorLocation();
	//offset.z to 0 might come in conflict with avoiding traps in the future
	//offset.Z = 0;


	AddActorWorldOffset(offset);
	VRRoot->AddWorldOffset(-offset);
}

void AVRCharacter::CheckTeleport()
{
	FHitResult HitResult;
	FVector Start = Camera->GetComponentLocation();
	FVector End = Camera->GetForwardVector() * MaxTeleport;
	bool bHit = GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECC_Visibility);

	if (bHit)
	{
		TeleportMarker->SetWorldLocation(HitResult.Location);
	}
	TeleportMarker->SetVisibility(bHit);
}

void AVRCharacter::Teleport()
{
	FTimerHandle TeleportTimer;
	//GetWorld()->GetTimerManager().SetTimer(TeleportTimer, this, &APlayerCameraManager::StartCameraFade(0,1,0.5f,COLOR_BLACK,false, true), 0.5f, true);

	SetActorLocation(TeleportMarker->GetComponentLocation());
}