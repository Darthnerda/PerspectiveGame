// Copyright Epic Games, Inc. All Rights Reserved.

#include "PerspectiveGameGameMode.h"
#include "PerspectiveGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

APerspectiveGameGameMode::APerspectiveGameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
