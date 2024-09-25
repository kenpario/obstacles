// Fill out your copyright notice in the Description page of Project Settings.


#include "MovablePlatform.h"

// Sets default values
AMovablePlatform::AMovablePlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovablePlatform::BeginPlay()
{
	Super::BeginPlay();

	//Change platform location variable so that the platform will be in front of the player
	PlatformLocation = PlayerLocation + FVector(15,500,-90);

	SetActorLocation(PlatformLocation);

}

// Called every frame
void AMovablePlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	PlatformLocation.X += Steps * DeltaTime;

	// If the platform reached the limits change the direction
	if (PlatformLocation.X >= MaxLocation || PlatformLocation.X <= MinLocation)
	{
		Steps = -Steps;
	}

	// Update the position
	SetActorLocation(PlatformLocation);

}

