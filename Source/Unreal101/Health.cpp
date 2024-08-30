// Fill out your copyright notice in the Description page of Project Settings.


#include "Health.h"

// Sets default values for this component's properties
UHealth::UHealth()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	
	// ...
	MaxHealth = 100.f;
	m_CurrentHealth = MaxHealth;
}


// Called when the game starts
void UHealth::BeginPlay()
{
	Super::BeginPlay();

	// ...
	ResetHealth();
}


// Called every frame
void UHealth::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UHealth::ResetHealth()
{
	m_CurrentHealth = MaxHealth;
}

float UHealth::GetHealthPercentage() const
{
	return m_CurrentHealth/MaxHealth;
}

bool UHealth::IsDead() const
{
	if (GetHealthPercentage() <= 0.0f)
		return true;
	else
		return false;
}
