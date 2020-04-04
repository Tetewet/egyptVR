// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Components/InputComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/PlayerController.h"
#include "Camera/PlayerCameraManager.h"
#include "Components/CapsuleComponent.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "TimerManager.h"
//#include "MotionControllerComponent.h"
#include "Camera/CameraComponent.h"
#include "VRCharacter.generated.h"

UCLASS()
class LAST_PHARAOH_API AVRCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AVRCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	UPROPERTY(VisibleAnywhere)
		UCameraComponent* Camera;
	UPROPERTY(VisibleAnywhere)
		USceneComponent* VRRoot;
	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* TeleportMarker;
	UPROPERTY(EditAnywhere)
		float TeleportFadeTimer = 0.8f; 
	UPROPERTY(EditAnywhere)
		float FadeTime = 0.5f;
	UPROPERTY(EditAnywhere)
		float MaxTeleport = 1000;
	APlayerController* PlayerController;

	void MoveForward(float move);
	void MoveRight(float move);
	void MoveRootToCamera();
	void CheckTeleport();
	void BeginTeleport();
	void Teleport();
	void EndTeleport();
};
