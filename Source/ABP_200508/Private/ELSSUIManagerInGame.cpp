#include "ELSSUIManagerInGame.h"

AELSSUIManagerInGame::AELSSUIManagerInGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Panel = NULL;
    this->DirectionPanelNative = NULL;
    this->IsCanPushSwitchMapMode = false;
}

void AELSSUIManagerInGame::SetAbilityVisible(bool inIsVisible) {
}

void AELSSUIManagerInGame::ResetAbility() {
}


