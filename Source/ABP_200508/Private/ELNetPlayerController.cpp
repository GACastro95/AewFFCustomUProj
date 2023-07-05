#include "ELNetPlayerController.h"

bool AELNetPlayerController::SetELNetTemporaryAuthorityBP(bool bEnabled) {
    return false;
}

void AELNetPlayerController::SetELNetModeBP(bool bEnabled) {
}

void AELNetPlayerController::SetELNetAuthorityBP(bool bEnabled) {
}

void AELNetPlayerController::SetControllerID(int32 NewControllerID) {
}

bool AELNetPlayerController::IsInELNetModeBP() {
    return false;
}

bool AELNetPlayerController::HasELNetExecAuthorityBP() {
    return false;
}

bool AELNetPlayerController::HasELNetAuthorityBP() {
    return false;
}

int32 AELNetPlayerController::GetControllerId() const {
    return 0;
}

AELNetPlayerController::AELNetPlayerController() {
    this->ELControllerID = -1;
    this->ELNetRole = EELNetRole::ROLE_None;
}

