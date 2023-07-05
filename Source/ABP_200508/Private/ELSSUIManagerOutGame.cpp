#include "ELSSUIManagerOutGame.h"

bool AELSSUIManagerOutGame::SetupOutGameUI(UELOperationalWidgetBase* mainWidget, const yEnMenuWidgetType addType, bool isCurrentUI) {
    return false;
}

bool AELSSUIManagerOutGame::SetOutGameWidgetManager(const yEnMenuWidgetType addType) {
    return false;
}

void AELSSUIManagerOutGame::RemoveWidgetManagerWidget(const yEnMenuWidgetType addType) {
}

bool AELSSUIManagerOutGame::PlaySoundToSE(const FString& seName) {
    return false;
}

AELSSUIManagerOutGame::AELSSUIManagerOutGame() {
    this->mainPanel = NULL;
    this->selectWrestlerData = NULL;
}

