#include "ELSSPanelOutGameGroup.h"

UELSSPanelOutGameGroup::UELSSPanelOutGameGroup() {
    this->grpActivePanelNow = NULL;
    this->grpActivePanelPrev = NULL;
}

void UELSSPanelOutGameGroup::SetVisibleGroupAll(const bool IsOn) {
}

void UELSSPanelOutGameGroup::SetupPanelGroup(const TArray<UELSSPanelOutGameBase*>& panels, AELSSUIManagerBase* uiManager, UUserWidget* commonWidget, UUserWidget* movieWidget) {
}

bool UELSSPanelOutGameGroup::SelectActivePanelToListId(const int32 TargetID, bool isSwapWait) {
    return false;
}

void UELSSPanelOutGameGroup::OnSwapPanelEvent(const EOutGamePanelEventType EventType, UELSSPanelOutGameBase* callPanel) {
}

bool UELSSPanelOutGameGroup::IsSwapPanel() {
    return false;
}

bool UELSSPanelOutGameGroup::IsParentPanekInputEnable() {
    return false;
}

UELSSPanelOutGameBase* UELSSPanelOutGameGroup::GetActivePanel() {
    return NULL;
}

void UELSSPanelOutGameGroup::EndPanelGroup() {
}


