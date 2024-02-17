#include "ELSSOutGameUtility.h"

void UELSSOutGameUtility::SetSSMainMenuWrestlerVisibility(const UObject* WorldContextObject, bool IsVisible) {
}

void UELSSOutGameUtility::SetSSMainMenuPartyMode(const UObject* WorldContextObject, bool IsPartyMode) {
}

void UELSSOutGameUtility::RequestUpdateSSMainMenuWrestlers(const UObject* WorldContextObject) {
}

void UELSSOutGameUtility::RequestChangeSSMainMenuSubLevel(const UObject* WorldContextObject, ESSMainMenuSubLevelSituation inSituation, bool inWithFade, bool inWithWrestlerUpdate) {
}

bool UELSSOutGameUtility::IsSSMainMenuPartyMode(const UObject* WorldContextObject) {
    return false;
}

bool UELSSOutGameUtility::IsExecutingChangeSSMainMenuSubLevel(const UObject* WorldContextObject) {
    return false;
}

EWrestlerPresetButtonType UELSSOutGameUtility::GetWrestlerPresetButtonType(const int32 btmId) {
    return EWrestlerPresetButtonType::EWrestlerPresetButtonType_Preset;
}

ESSWrestlerType UELSSOutGameUtility::GetSSWrestlerType(const int32 typeId) {
    return ESSWrestlerType::None;
}

AELSSOutGameStateBase* UELSSOutGameUtility::GetSSOutGameState(const UObject* WorldContextObject) {
    return NULL;
}

EMainMenuTopSelectWidgetType UELSSOutGameUtility::GetSSMainMenuTopSelectWidgetType(const int32 typeId) {
    return EMainMenuTopSelectWidgetType::EMainMenuTopSelectWidgetType_Play;
}

ESSMainMenuSubLevelSituation UELSSOutGameUtility::GetSSMainMenuSubLevelSituation(const UObject* WorldContextObject) {
    return ESSMainMenuSubLevelSituation::None;
}

AELSSMainMenuSubLevelManager* UELSSOutGameUtility::GetSSMainMenuSubLevelManager(const UObject* WorldContextObject) {
    return NULL;
}

AELSSMainMenuFlow* UELSSOutGameUtility::GetSSMainMenuFlow(const UObject* WorldContextObject) {
    return NULL;
}

EMainMenuSubWidgetType UELSSOutGameUtility::GetMainMenuSelectTabType(const int32 menuId) {
    return EMainMenuSubWidgetType::EMainMenuSubWidgetType_Play;
}

bool UELSSOutGameUtility::CanSSRuleChange(const UObject* WorldContextObject) {
    return false;
}

UELSSOutGameUtility::UELSSOutGameUtility() {
}

