#include "ELSSMainMenuFlow.h"

void AELSSMainMenuFlow::UnbindEOSLobbyFuctions() {
}

bool AELSSMainMenuFlow::TrySetMaxMember(int32 inMaxMember) {
    return false;
}

























void AELSSMainMenuFlow::SetPartyMode(bool isInParty) {
}













void AELSSMainMenuFlow::OnTimeout_SetMaxMember() {
}




void AELSSMainMenuFlow::OnSetMaxMember_Native(UEOSCommunityInfoBase* _CommunityInfo, bool bSuccess) {
}


void AELSSMainMenuFlow::OnRuleScheduleChanged_Implementation(ESSRuleChangeResult inResult, int32 inNewRuleScheduleId) {
}

void AELSSMainMenuFlow::OnRuleChanged_Implementation(ESSRuleChangeResult inResult, int32 inNewRuleId) {
}











void AELSSMainMenuFlow::OnLobbyReceiveMessage(UEOSUserBase* _User, const FString& _DisplayName, const FString& _Message) {
}

















void AELSSMainMenuFlow::OnConsoleSessionLeaderChange(const FString& _lobbyID, const FString& _ProductUserId) {
}


void AELSSMainMenuFlow::OnConsolePlayerSessionUserID(const FString& _ProductUserId) {
}


void AELSSMainMenuFlow::OnConsoleInviteEventHandler(const FString& _lobbyID) {
}




bool AELSSMainMenuFlow::IsTopMenuSelectable_Implementation() const {
    return false;
}

bool AELSSMainMenuFlow::IsRuleChangingForHost() const {
    return false;
}

bool AELSSMainMenuFlow::IsPartyMode() const {
    return false;
}

bool AELSSMainMenuFlow::IsInitialized() const {
    return false;
}

bool AELSSMainMenuFlow::IsFlowStateCategory(ESSMainMenuFlowStateCategory InStateCategory) const {
    return false;
}

bool AELSSMainMenuFlow::IsFlowState(ESSMainMenuFlowState inState) const {
    return false;
}


void AELSSMainMenuFlow::InitializeSubLevelManager() {
}

UELTutorialManager* AELSSMainMenuFlow::GetTutorialManager() const {
    return NULL;
}


void AELSSMainMenuFlow::FinishRuleChangeForHost(ESSRuleChangeResult inResult, int32 inNewRuleId) {
}















































void AELSSMainMenuFlow::ChangeFlowState(ESSMainMenuFlowState inState) {
}


void AELSSMainMenuFlow::BindEOSLobbyFuctions() {
}


AELSSMainMenuFlow::AELSSMainMenuFlow() {
    this->PrevState = ESSMainMenuFlowState::None;
    this->LobbyStatus_RuleChangeFlow = ESSLobbyRequestStatus::NoRequest;
    this->LobbyStatus_SetMaxMember = ESSLobbyRequestStatus::NoRequest;
    this->LobbyStatus_SetRuleId = ESSLobbyRequestStatus::NoRequest;
    this->CachedTutorialManager = NULL;
    this->IsRuleChanged = false;
    this->SubLevelManagerClass = NULL;
    this->SubLevelManager = NULL;
    this->IsRequestedUpdateWrestlers = false;
    this->IsBoundLobbyFunctions = false;
}

