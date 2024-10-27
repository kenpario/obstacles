// Fill out your copyright notice in the Description page of Project Settings.


#include "SecondMovablePlatform.h"

// Sets default values
ASecondMovablePlatform::ASecondMovablePlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASecondMovablePlatform::BeginPlay()
{
	Super::BeginPlay();

	//Change platform location variable so that the platform will be in front of the player
	PlatformLocation = GetActorLocation();

	SetActorLocation(PlatformLocation);

}

// Called every frame
void ASecondMovablePlatform::Tick(float DeltaTime)
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

