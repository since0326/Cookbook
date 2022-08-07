// Copyright Epic Games, Inc. All Rights Reserved.


#include "CookBook_Ch1GameModeBase.h"

void COOKBOOK_CH1_API ACookBook_Ch1GameModeBase::BeginPlay() {
	Super::BeginPlay();

	//기본적인 UE_LOG 메세지
	//Log 카테고리, Log 레벨, 로그메세지 문자열
	UE_LOG(LogTemp, Warning, TEXT("Some warning message"));

	//인자를 포함하는 UE_LOG 메세지
	int intVar = 5;
	float floatVar = 3.7f;
	FString fstringVar = "an fstring variable";
	UE_LOG(LogTemp, Warning, TEXT("Text, %d %f %s"), intVar, floatVar, *fstringVar);

	FString name = "Tim";
	int32 mana = 450;
	TArray<FStringFormatArg>args;
	args.Add(FStringFormatArg(name));
	args.Add(FStringFormatArg(mana));
	FString string = FString::Format(TEXT("Name = {0} Mana = {1}"), args);

	UE_LOG(LogTemp, Warning, TEXT("Your string : %s"),*string);
}
