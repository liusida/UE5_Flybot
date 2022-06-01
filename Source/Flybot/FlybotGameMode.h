// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FlybotGameMode.generated.h"

/**
 * 
 */
UCLASS()
class FLYBOT_API AFlybotGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	AFlybotGameMode();
	virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage);

};
