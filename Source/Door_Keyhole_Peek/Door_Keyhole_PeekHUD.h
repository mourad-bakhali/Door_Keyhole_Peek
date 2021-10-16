// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Door_Keyhole_PeekHUD.generated.h"

UCLASS()
class ADoor_Keyhole_PeekHUD : public AHUD
{
	GENERATED_BODY()

public:
	ADoor_Keyhole_PeekHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

