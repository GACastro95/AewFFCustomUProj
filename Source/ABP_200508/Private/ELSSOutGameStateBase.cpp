#include "ELSSOutGameStateBase.h"

void AELSSOutGameStateBase::SSLobbyStart() {
}

void AELSSOutGameStateBase::SSLobbyPrint() {
}

void AELSSOutGameStateBase::SSLobbyLeave() {
}

void AELSSOutGameStateBase::SSLobbyInviteApprove(const FString& ProductUserID) {
}

void AELSSOutGameStateBase::SSLobbyInvite(const FString& ProductUserID) {
}

void AELSSOutGameStateBase::SSLobbyEnd() {
}

void AELSSOutGameStateBase::SSLobbyChangeRule(int32 RuleId) {
}

void AELSSOutGameStateBase::SSLobbyChangeMenuState(int32 menuStateId) {
}

void AELSSOutGameStateBase::SetSSMainMenuFlow(AELSSMainMenuFlow* inFlow) {
}


AELSSOutGameDatabase* AELSSOutGameStateBase::GetOutGameDatabase() const {
    return NULL;
}

AELSSOutGameStateBase::AELSSOutGameStateBase() {
    this->DatabaseType = NULL;
    this->Database = NULL;
    this->SaveDataManager = NULL;
    this->SaveDataManagerClass = NULL;
    this->SSMainMenuFlow = NULL;
}

