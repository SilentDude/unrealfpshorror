// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "UnrealFPSHorrorGameMode.h"
#include "UnrealFPSHorrorHUD.h"
#include "UnrealFPSHorrorCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealFPSHorrorGameMode::AUnrealFPSHorrorGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AUnrealFPSHorrorHUD::StaticClass();
}
