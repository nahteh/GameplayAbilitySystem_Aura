// Copyright On Giant's Shoulders
#include "Player/AuraPlayerController.h"
#include "EnhancedInputSubsystems.h"


AAuraPlayerController::AAuraPlayerController()
{
    bReplicates = true;
}

void AAuraPlayerController::BeginPlay()
{
    Super::BeginPlay(); // Corrected 'Super' usage
    check(AuraContext);

    UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
}