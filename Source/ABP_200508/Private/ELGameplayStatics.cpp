#include "ELGameplayStatics.h"

void UELGameplayStatics::SetPlayerControllerID(APlayerController* Player, int32 ControllerId) {
}

bool UELGameplayStatics::HasGameViewportFocus() {
    return false;
}

APawn* UELGameplayStatics::GetPlayerPawn(const UObject* WorldContextObject, int32 PlayerIndex) {
    return NULL;
}

int32 UELGameplayStatics::GetPlayerControllerID(APlayerController* Player) {
    return 0;
}

APlayerController* UELGameplayStatics::GetPlayerControllerFromID(const UObject* WorldContextObject, int32 ControllerId) {
    return NULL;
}

APlayerController* UELGameplayStatics::GetPlayerController(const UObject* WorldContextObject, int32 PlayerIndex) {
    return NULL;
}

ACharacter* UELGameplayStatics::GetPlayerCharacter(const UObject* WorldContextObject, int32 PlayerIndex) {
    return NULL;
}

APlayerCameraManager* UELGameplayStatics::GetPlayerCameraManager(const UObject* WorldContextObject, int32 PlayerIndex) {
    return NULL;
}

APlayerController* UELGameplayStatics::CreatePlayer(const UObject* WorldContextObject, int32 ControllerId, bool bSpawnPlayerController) {
    return NULL;
}

UELGameplayStatics::UELGameplayStatics() {
}

