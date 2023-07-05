#include "ELGameModeBase.h"

void AELGameModeBase::OnStartGame_Implementation() {
}

void AELGameModeBase::OnInitialize_Implementation() {
}

bool AELGameModeBase::CheckCanStartGame_Implementation() const {
    return false;
}

AELGameModeBase::AELGameModeBase() {
    this->bStartGame = false;
}

