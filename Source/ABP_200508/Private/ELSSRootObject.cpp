#include "ELSSRootObject.h"


void UELSSRootObject::SetSSDebugParam(const FSSDebugParam& inDebugParam) {
}

void UELSSRootObject::SetSelectedRuleScheduleId(int32 inRuleScheduleId, bool inUpdateRuleStatus) {
}

void UELSSRootObject::SetLocalDebugFlag(ESSLocalDebugFlag inFlagType, bool IsOn) {
}

void UELSSRootObject::SetGameServerError(ESSGameServerError inGameServerError) {
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


UELSSRuleSelect* UELSSRootObject::GetSSRuleSelect() const {
    return NULL;
}

UELSSLobbyManager* UELSSRootObject::GetSSLobbyManager() const {
    return NULL;
}

UELSSGameModeDataManager* UELSSRootObject::GetSSGameDataManager() {
    return NULL;
}

int32 UELSSRootObject::GetSelectedRuleScheduleId() const {
    return 0;
}

ESSGameServerError UELSSRootObject::GetGameServerError() const {
    return ESSGameServerError::None;
}

TArray<FSSRuleScheduleParam> UELSSRootObject::GetEnabledRuleScheduleListForBP() const {
    return TArray<FSSRuleScheduleParam>();
}

FSSRuleStatus UELSSRootObject::GetCurrentRuleStatusForBP() const {
    return FSSRuleStatus{};
}

void UELSSRootObject::DeleteSSModeGameData() {
}

UELSSGameModeDataManager* UELSSRootObject::CreateSSModeGameData() {
    return NULL;
}

void UELSSRootObject::ClearLastEndGameReason() {
}

void UELSSRootObject::ClearGameServerError() {
}


UELSSRootObject::UELSSRootObject() {
    this->SSModePlayCountToDay = 0;
    this->m_pSSGameDataManager = NULL;
    this->CommonDatabase = NULL;
    this->LastEndGameReason = ESSEndGameReason::None;
    this->GameServerError = ESSGameServerError::None;
    this->LocalInGameFlag = false;
    this->VisibleFadeForChangeLevel = false;
    this->LobbyManager = NULL;
    this->RuleSelect = NULL;
    this->DebugMenuManager = NULL;
    this->Notice = NULL;
}

