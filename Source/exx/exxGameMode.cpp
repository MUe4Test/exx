// Copyright Epic Games, Inc. All Rights Reserved.

#include "exxGameMode.h"
#include "exxCharacter.h"
#include "UObject/ConstructorHelpers.h"

AexxGameMode::AexxGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
