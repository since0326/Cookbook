// Fill out your copyright notice in the Description page of Project Settings.


#include "SlateHUDGameMode.h"
#include "CustomHUDPlayerController.h"


ASlateHUDGameMode::ASlateHUDGameMode():Super() {
	PlayerControllerClass = ACustomHUDPlayerController::StaticClass();
}