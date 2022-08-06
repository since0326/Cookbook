// Fill out your copyright notice in the Description page of Project Settings.


#include "SCustomButton.h"
#include "SlateOptMacros.h"
#include "CookBook_Ch14.h"

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION
void SCustomButton::Construct(const FArguments& InArgs)
{
	Label = InArgs._Lable;
	ButtonClicked = InArgs._ButtonClicked;
	ChildSlot.VAlign(VAlign_Center).HAlign(HAlign_Center)[
		SNew(SButton).OnClicked(ButtonClicked).Content()[
			SNew(STextBlock).Text_Lambda([this] {
				return FText::FromString(Label.Get());
			})
		]
	];
}
END_SLATE_FUNCTION_BUILD_OPTIMIZATION
