// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MyFirstActor.h"
#include "UE4MyGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class COOKBOOK_CH4_API AUE4MyGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;
	
	UPROPERTY()
		AMyFirstActor* SpawnedActor;
	UFUNCTION()
		void DestroyActorFunction();
};
