// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GetRandomKey2.generated.h"

UCLASS()
class UNREAL101_API AGetRandomKey2 : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AGetRandomKey2();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, BlueprintPure)
		FString GetRandomLetter(int round);
};

