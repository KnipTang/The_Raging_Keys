// Fill out your copyright notice in the Description page of Project Settings.


#include "GetRandomKey2.h"

// Sets default values
AGetRandomKey2::AGetRandomKey2()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGetRandomKey2::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGetRandomKey2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FString AGetRandomKey2::GetRandomLetter(int round)
{
    // ASCII values for 'a' and 'z'
    //int32 MinAscii = static_cast<int32>('a');
    //int32 MaxAscii = static_cast<int32>('z');

    //List first round
	// char firstRoundCharacters[] = { 'q', 'w', 'e', 'a', 's', 'd', 'z', 'x', 'c' };
	// char secondRoundCharacters[] = { 'k' };

    char characters[26] = {};

    int charSize{};

    if (round == 0) 
    {
        // List for the first round
        char firstRoundCharacters[] = { 'q', 'w', 'e', 'a', 's', 'd', 'z', 'x', 'c' };

        charSize = std::size(firstRoundCharacters);

        // Copy the contents of the firstRoundCharacters array to the characters array
        std::copy(std::begin(firstRoundCharacters), std::end(firstRoundCharacters), std::begin(characters));
    }
    else if (round == 1)
    {
        // List for the first round
        char secondRoundCharacters[] = { 'r', 't', 'y', 'f', 'g', 'h', 'v', 'b', 'n' };
        charSize = std::size(secondRoundCharacters);
        // Copy the contents of the firstRoundCharacters array to the characters array
        std::copy(std::begin(secondRoundCharacters), std::end(secondRoundCharacters), std::begin(characters));
    }
    else if (round == 2)
    {
        // List for the first round
        char thirdRoundCharacters[] = { 'u', 'i', 'o', 'p', 'j', 'k', 'l', 'm' };
        charSize = std::size(thirdRoundCharacters);
        // Copy the contents of the firstRoundCharacters array to the characters array
        std::copy(std::begin(thirdRoundCharacters), std::end(thirdRoundCharacters), std::begin(characters));
    }
    else
    {
        // List for the first round
        char RoundCharacters[] = { 'q', 'w', 'e', 'r', 't', 'y', 'u', 'i','o','p','a','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m' };
        charSize = std::size(RoundCharacters);
        // Copy the contents of the firstRoundCharacters array to the characters array
        std::copy(std::begin(RoundCharacters), std::end(RoundCharacters), std::begin(characters));
    }
    // Get the size of the array
    int size = charSize / sizeof(char);

    // Generate a random index
    int randomIndex = std::rand() % size;

    // Access the random character
    char randomChar = characters[randomIndex];

    FString RandomLetter = FString::Printf(TEXT("%c"), randomChar);

    //// Generate a random integer within the range of ASCII values for 'a' and 'z'
    //int32 RandomAscii = FMath::RandRange(MinAscii, MaxAscii);
    //
    //// Convert the random ASCII value to a character
    //TCHAR RandomChar = static_cast<TCHAR>(RandomAscii);
    //
    //// Convert the character to an FString
    //FString RandomLetter = FString(1, &RandomChar);

    return RandomLetter.ToUpper();
}