// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MyGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class COOKBOOK_CH1_API AMyGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	void BeginPlay();
	
};
