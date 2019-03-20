// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "UnrealFPSHorrorHUD.generated.h"

UCLASS()
class AUnrealFPSHorrorHUD : public AHUD
{
	GENERATED_BODY()

public:
	AUnrealFPSHorrorHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

