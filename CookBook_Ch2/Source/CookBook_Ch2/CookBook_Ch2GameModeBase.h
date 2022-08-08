// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "UserProfile.h"
#include "CookBook_Ch2GameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class COOKBOOK_CH2_API ACookBook_Ch2GameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = UClassNames)
		TSubclassOf<UUserProfile> UPBlueprintClassName;
};
