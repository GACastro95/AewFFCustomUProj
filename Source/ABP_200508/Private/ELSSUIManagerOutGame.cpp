#include "ELSSUIManagerOutGame.h"

AELSSUIManagerOutGame::AELSSUIManagerOutGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mainPanel = NULL;
    this->selectWrestlerData = NULL;
}

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


