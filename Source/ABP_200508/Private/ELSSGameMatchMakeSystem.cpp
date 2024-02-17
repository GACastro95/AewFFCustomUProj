#include "ELSSGameMatchMakeSystem.h"

bool UELSSGameMatchMakeSystem::UpdateMatchMakeRequest() {
    return false;
}

void UELSSGameMatchMakeSystem::UpdateEOSLobby(UELSSLobbyManager* inLobbyMng) {
}

bool UELSSGameMatchMakeSystem::StopMatchMakeRequest() {
    return false;
}

bool UELSSGameMatchMakeSystem::StartMatchMakeRequest(const TArray<FPingData> regionLatencieData, const FString& ssBuildVersion, const FString& selectRegion) {
    return false;
}


void UELSSGameMatchMakeSystem::SSWebAPI_FlexMatchStatusResult(const FELSSFlexMatchMakeStatus_ResponseData& response, eSSRequestResultType responseType) {
}

void UELSSGameMatchMakeSystem::SSWebAPI_FlexMatchStartResult(const FELSSFlexMatchMakeStart_ResponseData& response, eSSRequestResultType responseType) {
}

void UELSSGameMatchMakeSystem::SSWebAPI_FlexMatchCancelResult(eSSRequestResultType responseType, const FELSSFlexMatchMakeStop_ResponseData& response) {
}

void UELSSGameMatchMakeSystem::RetryMatchMake(const eSSModeAPIType retryAPI, const int32 retryCnt) {
}

bool UELSSGameMatchMakeSystem::RestartMatchMake(const TArray<FPingData> regionLatencieData, const FString& ssBuildVersion, const FString& selectRegion) {
    return false;
}

void UELSSGameMatchMakeSystem::Restart() {
}

void UELSSGameMatchMakeSystem::Reset() {
}

void UELSSGameMatchMakeSystem::PreviewMatchRequestData() {
}

bool UELSSGameMatchMakeSystem::IsMatchMakeCheck() {
    return false;
}

void UELSSGameMatchMakeSystem::ForceMatchEnd() {
}

void UELSSGameMatchMakeSystem::ErrorRetryEvent(const FRequest_ErrSetupData& apiErrData, const int32 errRetryCnt) {
}

void UELSSGameMatchMakeSystem::ErrorCommonEvent(const bool isDialogYES, const FRequest_ErrSetupData errDialogData) {
}

void UELSSGameMatchMakeSystem::DebugGetOverrideRegionInfo(bool& outUseOverride, FString& outSelectedRegionName, TArray<FPingData>& outTargetRegionData) {
}

void UELSSGameMatchMakeSystem::CreateJoinGameServerData(FString& joinData, const FSSWrestlerMovePresetParam& presetData, const FSSPlayerEquipSettings& equipSettings) {
}

UELSSGameMatchMakeSystem* UELSSGameMatchMakeSystem::CreateGameMatchMakeSystem() {
    return NULL;
}

bool UELSSGameMatchMakeSystem::CanStopMatchMake() {
    return false;
}

UELSSGameMatchMakeSystem::UELSSGameMatchMakeSystem() {
    this->ssMatchMakeState = eSSGameMatchMakeState::eSSGameMatchMakeState_Stay;
    this->ssIsNextUpdateWaitSkip = false;
    this->ssIsRequestCancel = false;
    this->ssMatchRequestRef = NULL;
    this->ssCancelRequestRef = NULL;
    this->RequestedCancel = false;
}

