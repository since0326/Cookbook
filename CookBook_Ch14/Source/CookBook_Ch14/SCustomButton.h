// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"

/**
 * 
 */
class COOKBOOK_CH14_API SCustomButton : public SCompoundWidget
{

	SLATE_BEGIN_ARGS(SCustomButton) :_Label(TEXT("Default Value")),_ButtonClicked()
	{}
	SLATE_ATTRIBUTE(FString,Lable)
		SLATE_EVENT(FOnClicked,ButtonClicked)
		SLATE_END_ARGS()
public:
	/** Constructs this widget with InArgs */
	void Construct(const FArguments& InArgs);
	TAttribute<FString>Label;
	FOnClicked ButtonClicked;
};
