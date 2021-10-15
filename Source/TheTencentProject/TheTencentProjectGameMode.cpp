// Copyright Epic Games, Inc. All Rights Reserved.

#include "TheTencentProjectGameMode.h"
#include "TheTencentProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATheTencentProjectGameMode::ATheTencentProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
