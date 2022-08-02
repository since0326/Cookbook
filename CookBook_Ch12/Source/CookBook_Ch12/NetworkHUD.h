// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "NetworkHUD.generated.h"

/**
 * 
 */
UCLASS()
class COOKBOOK_CH12_API ANetworkHUD : public AHUD
{
	GENERATED_BODY()

public:
	virtual void DrawHUD() override;
};
