// Copyright Epic Games, Inc. All Rights Reserved.


#include "Chapter11GameModeBase.h"

void AChapter11GameModeBase::BeginPlay() {
	TestHttp();
}

void AChapter11GameModeBase::TestHttp() {

	FHttpModule* Http = &FHttpModule::Get();
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> http = Http->CreateRequest();

	FHttpRequestCompleteDelegate& delegate = http->OnProcessRequestComplete();

	delegate.BindLambda(
		[](FHttpRequestPtr request, FHttpResponsePtr response, bool success) -> void {
			UE_LOG(LogTemp, Warning, TEXT("Http Response : %d, %s"),
				request->GetResponse()->GetResponseCode(),
				*request->GetResponse()->GetContentAsString());
		}
	);

	http->SetURL(TEXT("https://www.unrealengine.com/ko/"));

	http->ProcessRequest();
}

void AChapter11GameModeBase::HttpRequestComplete(FHttpRequestPtr request, FHttpResponsePtr response, bool success) {
	UE_LOG(LogTemp, Warning, TEXT("Http Response : %d, %s"),
		request->GetResponse()->GetResponseCode(),
		*request->GetResponse()->GetContentAsString());
}