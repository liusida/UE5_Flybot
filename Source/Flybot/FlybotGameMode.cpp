// MIT License


#include "FlybotGameMode.h"
#include "Flybot.h"

AFlybotGameMode::AFlybotGameMode(){}

void AFlybotGameMode::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) {
	Super::InitGame(MapName, Options, ErrorMessage);
	UE_LOG(LogFlybot, Log, TEXT("Game is running: %s %s"), *MapName, *Options);
}