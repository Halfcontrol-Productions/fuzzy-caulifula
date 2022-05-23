// Copyright Epic Games, Inc. All Rights Reserved.

#include "FuzzyCaulifulaGameMode.h"
#include "FuzzyCaulifulaCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFuzzyCaulifulaGameMode::AFuzzyCaulifulaGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
