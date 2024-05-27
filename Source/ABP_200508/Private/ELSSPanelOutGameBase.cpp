#include "ELSSPanelOutGameBase.h"

UELSSPanelOutGameBase::UELSSPanelOutGameBase() {
    this->panelId = 0;
    this->uiOutGameManager = NULL;
    this->uiMovieWidget = NULL;
    this->isParentInputEnable = true;
}

void UELSSPanelOutGameBase::Setup(const int32 ID, AELSSUIManagerBase* uiManager, UUserWidget* commonWidget, UUserWidget* movieWidget) {
}

void UELSSPanelOutGameBase::SetPrepareMovieData(const FSSPrepareMovieStack& dat) {
}

void UELSSPanelOutGameBase::SetPanelVisible(const bool IsOn) {
}

bool UELSSPanelOutGameBase::PlaySE(const FString& seName) {
    return false;
}



void UELSSPanelOutGameBase::Open() {
}



































FSSPrepareMovieStack UELSSPanelOutGameBase::GetPrepareMovieData() {
    return FSSPrepareMovieStack{};
}

AELSSUIManagerOutGame* UELSSPanelOutGameBase::GetOutGameUIManager() {
    return NULL;
}





void UELSSPanelOutGameBase::Close() {
}

void UELSSPanelOutGameBase::ActivateOutGameEvent(const EOutGamePanelEventType Type) {
}


