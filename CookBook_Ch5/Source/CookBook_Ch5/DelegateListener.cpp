// Fill out your copyright notice in the Description page of Project Settings.


#include "DelegateListener.h"
#include "CookBook_Ch5GameModeBase.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ADelegateListener::ADelegateListener()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//점 광원생성
	PointLight = CreateDefaultSubobject<UPointLightComponent>("PointLight");
	RootComponent = PointLight;

	//
	PointLight->SetVisibility(false);

	//색 설정
	PointLight->SetLightColor(FLinearColor::Blue);

}

// Called when the game starts or when spawned
void ADelegateListener::BeginPlay()
{
	Super::BeginPlay();
	
	UWorld* TheWorld = GetWorld();
	if (TheWorld != nullptr) {
		AGameModeBase* GameMode = UGameplayStatics::GetGameMode(TheWorld);

		ACookBook_Ch5GameModeBase* MyGameMode = Cast< ACookBook_Ch5GameModeBase>(GameMode);

		if (MyGameMode != nullptr) {
			MyGameMode->MyStandardDelegate.BindUObject(this, &ADelegateListener::EnableLight);
		}
	}

}

// Called every frame
void ADelegateListener::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADelegateListener::EnableLight() {
	PointLight->SetVisibility(true);
}

void ADelegateListener::EndPlay(const EEndPlayReason::Type EndPlayReason){
	Super::EndPlay(EndPlayReason);

	UWorld* TheWorld = GetWorld();
	if (TheWorld != nullptr) {
		AGameModeBase* GameMode = UGameplayStatics::GetGameMode(TheWorld);

		ACookBook_Ch5GameModeBase* MyGameMode = Cast< ACookBook_Ch5GameModeBase>(GameMode);

		if (MyGameMode != nullptr) {
			MyGameMode->MyStandardDelegate.Unbind();
		}
	}
}

