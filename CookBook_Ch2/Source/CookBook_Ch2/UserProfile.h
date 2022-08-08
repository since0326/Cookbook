// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ColoredTexture.h"
#include "EnumName.h"
#include "UserProfile.generated.h"	//가장 아래 선언

/**
 * 
 */
UCLASS(Blueprintable,BlueprintType)
class COOKBOOK_CH2_API UUserProfile : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats)
		float Armor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats)
		float HpMax;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats)
		FString Name;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Unit)
		TSubclassOf<UObject> UClassOfPleyer;
	UPROPERTY(EditAnywhere, meta = (MetaClass = "GameMode", Category = Unit))
		FStringClassReference UClassGameMode;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = HUD)
		FColoredTexture Texture;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Status)
		TEnumAsByte <Status> status;
};
