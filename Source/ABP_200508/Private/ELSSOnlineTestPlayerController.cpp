#include "ELSSOnlineTestPlayerController.h"

AELSSOnlineTestPlayerController::AELSSOnlineTestPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->rotSpeedYaw = 4.00f;
    this->rotSpeedPitch = 4.00f;
}

void AELSSOnlineTestPlayerController::UIPrepare_RPC_Implementation() {
}




void AELSSOnlineTestPlayerController::RotTurn(float Value) {
}

void AELSSOnlineTestPlayerController::RotLookUp(float Value) {
}


void AELSSOnlineTestPlayerController::PlayerEnableInput(APlayerController* PlayerController) {
}

void AELSSOnlineTestPlayerController::PlayerDisableInput(APlayerController* PlayerController) {
}


void AELSSOnlineTestPlayerController::MoveRight(float Value) {
}

void AELSSOnlineTestPlayerController::MoveForward(float Value) {
}







