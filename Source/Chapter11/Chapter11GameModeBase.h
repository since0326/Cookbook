// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Runtime/Online/HTTP/Public/HttpManager.h"
#include "Runtime/Online/HTTP/Public/HttpModule.h"
#include "Runtime/Online/HTTP/Public/HttpRetrySystem.h"
#include "Runtime/Online/HTTP/Public/Interfaces/IHttpResponse.h"
using namespace FHttpRetrySystem;

#include "Chapter11GameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class CHAPTER11_API AChapter11GameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	void BeginPlay();

	void TestHttp();

	void HttpRequestComplete(FHttpRequestPtr request, FHttpResponsePtr response, bool success);
};
