#include "ELSSOnlineTestPlayerState.h"

AELSSOnlineTestPlayerState::AELSSOnlineTestPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsDoneUIPrepare = false;
    this->WrestlerID = EWrestlerID_N::None;
}

void AELSSOnlineTestPlayerState::DoneUIPrepare_Server_Implementation() {
}

void AELSSOnlineTestPlayerState::DoneUIPrepare() {
}


