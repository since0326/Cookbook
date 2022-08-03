// Copyright Epic Games, Inc. All Rights Reserved.

#include "CookBook_Ch13GameMode.h"
#include "CookBook_Ch13Character.h"
#include "UObject/ConstructorHelpers.h"

ACookBook_Ch13GameMode::ACookBook_Ch13GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
