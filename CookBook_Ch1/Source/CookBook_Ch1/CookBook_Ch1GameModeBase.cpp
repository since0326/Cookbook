// Copyright Epic Games, Inc. All Rights Reserved.


#include "CookBook_Ch1GameModeBase.h"

void COOKBOOK_CH1_API ACookBook_Ch1GameModeBase::BeginPlay() {
	Super::BeginPlay();

	//�⺻���� UE_LOG �޼���
	//Log ī�װ�, Log ����, �α׸޼��� ���ڿ�
	UE_LOG(LogTemp, Warning, TEXT("Some warning message"));

	//���ڸ� �����ϴ� UE_LOG �޼���
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
