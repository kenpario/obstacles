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

	UPROPERTY(EditAnywhere);
	int32 IntTest = 22;

	UPROPERTY(EditAnywhere);
	int32 IntA = 56;

	UPROPERTY(EditAnywhere);
	int32 IntB = 75;

	UPROPERTY(EditAnywhere);
	int32 IntAPlusB = 0;

	UPROPERTY(EditAnywhere);
	float FloatTest = 24.25;

	UPROPERTY(EditAnywhere);
	float FloatA = 24.25;

	UPROPERTY(EditAnywhere);
	float FloatB = 35.78;

	UPROPERTY(EditAnywhere);
	float FloatTotal = 0;

	UPROPERTY(EditAnywhere);
	bool BoolTest = true;

};
