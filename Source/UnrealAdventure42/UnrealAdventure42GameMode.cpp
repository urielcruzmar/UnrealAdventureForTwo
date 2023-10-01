// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealAdventure42GameMode.h"
#include "UnrealAdventure42Character.h"
#include "UObject/ConstructorHelpers.h"

AUnrealAdventure42GameMode::AUnrealAdventure42GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
