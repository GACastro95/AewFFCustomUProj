#include "ELNetPawn.h"

bool AELNetPawn::SetELNetTemporaryAuthorityBP(bool bEnabled) {
    return false;
}

void AELNetPawn::SetELNetModeBP(bool bEnabled) {
}

void AELNetPawn::SetELNetAuthorityBP(bool bEnabled) {
}

bool AELNetPawn::HasELNetExecAuthorityBP() const {
    return false;
}

bool AELNetPawn::HasELNetAuthorityBP() {
    return false;
}

























AELNetPawn::AELNetPawn() {
    this->ELNetRole = EELNetRole::ROLE_None;
}

