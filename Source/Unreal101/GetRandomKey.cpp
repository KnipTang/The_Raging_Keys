// Fill out your copyright notice in the Description page of Project Settings.


#include "GetRandomKey.h"

// Sets default values
AGetRandomKey::AGetRandomKey()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGetRandomKey::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGetRandomKey::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FString AGetRandomKey::GetRandomLetter()
{
    // ASCII values for 'a' and 'z'
    int32 MinAscii = static_cast<int32>('a');
    int32 MaxAscii = static_cast<int32>('z');

    // Generate a random integer within the range of ASCII values for 'a' and 'z'
    int32 RandomAscii = FMath::RandRange(MinAscii, MaxAscii);

    // Convert the random ASCII value to a character
    TCHAR RandomChar = static_cast<TCHAR>(RandomAscii);

    // Convert the character to an FString
    FString RandomLetter = FString(1, &RandomChar);

    return RandomLetter.ToUpper();
}