// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "GAM207_Lawrence_Evan.h"
#include "GAM207_Lawrence_EvanGameMode.h"
#include "GAM207_Lawrence_EvanCharacter.h"

AGAM207_Lawrence_EvanGameMode::AGAM207_Lawrence_EvanGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
