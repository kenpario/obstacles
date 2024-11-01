// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovablePlatform.generated.h"

UCLASS()
class OBSTACLES_API AMovablePlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovablePlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	FVector PlatformLocation;

	UPROPERTY(EditAnywhere)
	int32 MaxLocation = 2750;

	UPROPERTY(EditAnywhere)
	int32 MinLocation = 1640;

	UPROPERTY(EditAnywhere)
	int32 Steps = 300;

	UPROPERTY(EditAnywhere)
	FRotator PlatformRotation;

	UPROPERTY(EditAnywhere)
	FRotator RotationSteps;

};
