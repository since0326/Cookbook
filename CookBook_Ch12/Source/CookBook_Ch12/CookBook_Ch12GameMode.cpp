// Copyright Epic Games, Inc. All Rights Reserved.

#include "CookBook_Ch12GameMode.h"
#include "CookBook_Ch12Character.h"
#include "NetworkHUD.h"
#include "UObject/ConstructorHelpers.h"

ACookBook_Ch12GameMode::ACookBook_Ch12GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	HUDClass = ANetworkHUD::StaticClass();
}
