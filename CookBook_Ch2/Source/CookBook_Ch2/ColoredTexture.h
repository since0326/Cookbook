#pragma once

#include "UObject/ObjectMacros.h"
#include "ColoredTexture.generated.h"

USTRUCT(Blueprintable)
struct COOKBOOK_CH2_API FColoredTexture
{
    GENERATED_USTRUCT_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HUD)
        UTexture* texture;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HUD)
        FLinearColor color;
};