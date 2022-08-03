// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "EnemyAIController.generated.h"

/**
 * 
 */
UCLASS()
class COOKBOOK_CH13_API AEnemyAIController : public AAIController
{
	GENERATED_BODY()
	
private:
	UBehaviorTreeComponent* BehaviorComp;
	UBlackboardComponent* BlackboardComp;

public:
	AEnemyAIController();

	virtual void OnPossess(APawn* InPawn)override;

	FBlackboard::FKey TargetKeyID;
};
