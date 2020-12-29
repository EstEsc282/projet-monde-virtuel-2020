// Copyright Epic Games, Inc. All Rights Reserved.

#include "PMVGameMode.h"
#include "PMVCharacter.h"
#include "UObject/ConstructorHelpers.h"

APMVGameMode::APMVGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
