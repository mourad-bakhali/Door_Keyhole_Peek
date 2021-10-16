// Copyright Epic Games, Inc. All Rights Reserved.

#include "Door_Keyhole_PeekGameMode.h"
#include "Door_Keyhole_PeekHUD.h"
#include "Door_Keyhole_PeekCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADoor_Keyhole_PeekGameMode::ADoor_Keyhole_PeekGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ADoor_Keyhole_PeekHUD::StaticClass();
}
