// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CookBook_Ch5GameModeBase.generated.h"

/**
 * 
 */
DECLARE_DELEGATE(SFtandardDelegateSignature)
DECLARE_DELEGATE_OneParam(FParamDelegateSignature, FLinearColor)
DECLARE_MULTICAST_DELEGATE(FMulticastDelegateSignature)
UCLASS()
class COOKBOOK_CH5_API ACookBook_Ch5GameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	SFtandardDelegateSignature MyStandardDelegate;
	FParamDelegateSignature MyParameterDelegate;
	FMulticastDelegateSignature MyMulticastDelegate;
};
