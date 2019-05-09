// Fill out your copyright notice in the Description page of Project Settings.

#include "Beast.h"

// Sets default values
ABeast::ABeast()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABeast::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ABeast::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABeast::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);


}

// This is the actor damage handler.   
float ABeast::TakeDamage(float Damage, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser)
{
	// Call the base class - this will tell us how much damage to apply  
	const float ActualDamage = Super::TakeDamage(Damage, DamageEvent, EventInstigator, DamageCauser);
	if (ActualDamage > 0.f)
	{
		HP -= ActualDamage;
		// If the damage depletes our health set our lifespan to zero - which will destroy the actor  
		if (HP <= 0.f)
		{
			SetLifeSpan(0.001f);
		}
	}

	return ActualDamage;
}
