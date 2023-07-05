#include "ELNetActor.h"

bool AELNetActor::SetELNetTemporaryAuthorityBP(bool bEnabled) {
    return false;
}

void AELNetActor::SetELNetModeBP(bool bEnabled) {
}

void AELNetActor::SetELNetAuthorityBP(bool bEnabled) {
}

bool AELNetActor::IsInELNetModeBP() {
    return false;
}

bool AELNetActor::HasELNetExecAuthorityBP() {
    return false;
}

bool AELNetActor::HasELNetAuthorityBP() {
    return false;
}

AELNetActor::AELNetActor() {
    this->ELNetRole = EELNetRole::ROLE_None;
}

