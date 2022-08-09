// Copyright Epic Games, Inc. All Rights Reserved.


#include "CookBook_Ch4GameModeBase.h"
#include "InventoryCharacter.h"

ACookBook_Ch4GameModeBase::ACookBook_Ch4GameModeBase() {
	DefaultPawnClass = AInventoryCharacter::StaticClass();
}

