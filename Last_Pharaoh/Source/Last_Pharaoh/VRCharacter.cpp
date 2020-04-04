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

	//moving forward axis
	PlayerInputComponent->BindAxis(TEXT("Forward"), this, &AVRCharacter::MoveForward);
	//moving sideways axis
	PlayerInputComponent->BindAxis(TEXT("Right"), this, &AVRCharacter::MoveRight);
	//teleport actions
	PlayerInputComponent->BindAction(TEXT("Teleport"), IE_Released, this, &AVRCharacter::BeginTeleport);
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

void AVRCharacter::BeginTeleport()
{
	//get the player controller 
	PlayerController = Cast<APlayerController>(GetController());
	//check if null
	if (PlayerController != nullptr)
	{
		//fade the camera
		PlayerController->PlayerCameraManager->StartCameraFade(0, 1, TeleportFadeTimer, FLinearColor::Black, false, true);
	}
	//set a timer handle
	FTimerHandle TeleportTimer;
	//timer to teleport after the fade
	GetWorld()->GetTimerManager().SetTimer(TeleportTimer, this, &AVRCharacter::Teleport, TeleportFadeTimer);
}

void AVRCharacter::Teleport()
{
	//fix for the camera not teleporting good enough (getcapsulecomponent)
	//teleport to location
	SetActorLocation(TeleportMarker->GetComponentLocation() + GetCapsuleComponent()->GetScaledCapsuleHalfHeight());

	// i want to make sure the teleport is done when inside the camera fade, i gotta make another method...
	FTimerHandle TeleportTimer;
	GetWorld()->GetTimerManager().SetTimer(TeleportTimer, this, &AVRCharacter::EndTeleport, FadeTime);
}

void AVRCharacter::EndTeleport()
{
	//get the player controller 
	PlayerController = Cast<APlayerController>(GetController());
	//check if null
	if (PlayerController != nullptr)
	{
		//fade the camera
		PlayerController->PlayerCameraManager->StartCameraFade(1, 0, TeleportFadeTimer + 0.5f, FLinearColor::Black, false, true);
	}
}