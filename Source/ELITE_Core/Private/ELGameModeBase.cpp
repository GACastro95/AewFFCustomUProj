#include "ELGameModeBase.h"

AELGameModeBase::AELGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bStartGame = false;
}

void AELGameModeBase::OnStartGame_Implementation() {
}

void AELGameModeBase::OnInitialize_Implementation() {
}

bool AELGameModeBase::CheckCanStartGame_Implementation() const {
    return false;
}


