#include "ELSSRootObject.h"


void UELSSRootObject::SetSSDebugParam(const FSSDebugParam& inDebugParam) {
}

void UELSSRootObject::SetLocalDebugFlag(ESSLocalDebugFlag inFlagType, bool IsOn) {
}

void UELSSRootObject::OnInitialize_Implementation() {
}

void UELSSRootObject::OnGameStart() {
}

bool UELSSRootObject::OnGameEnd(ESSEndGameReason inReason) {
    return false;
}

void UELSSRootObject::OnDestroy_Implementation() {
}

void UELSSRootObject::OnChangeLevel_Native(ULevel* inLevel, UWorld* inWorld) {
}


UELSSGameModeDataManager* UELSSRootObject::GetSSGameDataManager() {
    return NULL;
}

void UELSSRootObject::DeleteSSModeGameData() {
}

UELSSGameModeDataManager* UELSSRootObject::CreateSSModeGameData() {
    return NULL;
}

void UELSSRootObject::ClearLastEndGameReason() {
}

UELSSRootObject::UELSSRootObject() {
    this->SSModePlayCountToDay = 0;
    this->m_pSSGameDataManager = NULL;
    this->CommonDatabase = NULL;
    this->LastEndGameReason = ESSEndGameReason::None;
    this->LocalInGameFlag = false;
    this->VisibleFadeForChangeLevel = false;
    this->DebugMenuManager = NULL;
    this->Notice = NULL;
}

