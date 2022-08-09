// Fill out your copyright notice in the Description page of Project Settings.


#include "UE4MyGameModeBase.h"
#include "MyFirstActor.h"


void AUE4MyGameModeBase::BeginPlay() {
	Super::BeginPlay();

	GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, TEXT("Actor Spawning"));

	FTransform SpawnLocation;
	SpawnedActor = GetWorld()->SpawnActor<AMyFirstActor>(AMyFirstActor::StaticClass(), SpawnLocation);

	FTimerHandle Timer;
	GetWorldTimerManager().SetTimer(Timer, this, &AUE4MyGameModeBase::DestroyActorFunction, 10);
}

void AUE4MyGameModeBase::DestroyActorFunction() {
	if (SpawnedActor != nullptr) {
		GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, TEXT("Actor Destroyed"));
		SpawnedActor->Destroy();
	}
}