#include "GameLiftMatchMakeSystem.h"

UGameLiftMatchMakeSystem::UGameLiftMatchMakeSystem() {
    this->SelectedWrestlerID = EWrestlerID_N::KennyOmega;
}

void UGameLiftMatchMakeSystem::Update(const float& Delta) {
}

void UGameLiftMatchMakeSystem::SetUserSelectedData(EWrestlerID_N inWrestlerId) {
}

bool UGameLiftMatchMakeSystem::SearchGameSessionToAlias(const FString& aliasID, const FString& Filter, const FString& sort) {
    return false;
}

bool UGameLiftMatchMakeSystem::RandomGameSessionJoinOrCreate(const FRandomJoinMatchData& dat) {
    return false;
}

void UGameLiftMatchMakeSystem::OnSuccessEvent(const EMatchMakeExecuteType& Type) {
}

void UGameLiftMatchMakeSystem::OnSearchGameSessionSuccess(const FGameLiftGameSessions_Response& gameSessions) {
}

void UGameLiftMatchMakeSystem::OnJoinPlayerSessionSuccess(const FCreatePlayerSession_RequestParam& requestParam, const FGameLiftPlayerSession_Response& responseParam) {
}

void UGameLiftMatchMakeSystem::OnJoinGameSessionToDelay() {
}

void UGameLiftMatchMakeSystem::OnJoinGameSessionSuccess(const FDescribeGameSessions_RequestParam& requestParam, const FGameLiftGameSessions_Response& responseParam) {
}

void UGameLiftMatchMakeSystem::OnErrorEvent(const FGLAPI_ErrorData& err) {
}

void UGameLiftMatchMakeSystem::OnCreateGameSessionSuccess(const FCreateGameSession_RequestParam& reqestParam, const FGameLiftGameSession_Response& responseParam) {
}

bool UGameLiftMatchMakeSystem::JoinPlayerSessionToRequestParam(const FCreatePlayerSession_RequestParam& requestParam) {
    return false;
}

bool UGameLiftMatchMakeSystem::JoinPlayerSessionToParam(const FString& targetGameSessionId, const FString& playerId, FSSPlayerSessionParam& userDataJson) {
    return false;
}

bool UGameLiftMatchMakeSystem::JoinPlayerSession(const FString& targetGameSessionId, const FString& playerId, const FString& userDataJson) {
    return false;
}

bool UGameLiftMatchMakeSystem::JoinGameSessionToRequest(const FDescribeGameSessions_RequestParam& requestParam) {
    return false;
}

bool UGameLiftMatchMakeSystem::JoinGameSessionToGameSessionData(const FGameLiftGameSession_Response& sessionData) {
    return false;
}

bool UGameLiftMatchMakeSystem::JoinGameSession(const FString& SessionID) {
    return false;
}

void UGameLiftMatchMakeSystem::JoinGameServerIpPort(FString& iport) {
}

void UGameLiftMatchMakeSystem::IsMatchMakeEnd(bool& IsEnd) {
}

UGameLiftMatchMakeSystem* UGameLiftMatchMakeSystem::Init(UGameLiftClientObject* gamelift, const FString& playerId, const FString& PlayerData, float delayLimit) {
    return NULL;
}

void UGameLiftMatchMakeSystem::GetPlayerSessionId(FString& SessionID) {
}

void UGameLiftMatchMakeSystem::GetJoinGamePlayerSessionData(FGameLiftGameSession_Response& GameSession, FGameLiftPlayerSession_Response& playerSession) {
}

void UGameLiftMatchMakeSystem::GetGameServerJoinData(FString& ipPort, FString& joinUserData) {
}

bool UGameLiftMatchMakeSystem::CreateMatchMakeToSessionParam(const FString& aliasID, const FString& sessionTitle) {
    return false;
}

bool UGameLiftMatchMakeSystem::CreateMatchMakeToRequest(const FCreateGameSession_RequestParam& roomParam) {
    return false;
}

bool UGameLiftMatchMakeSystem::CreateMatchMake(const int32& pNum, const int32& pMin, const FString& aliasID, const FString& sessionTitle) {
    return false;
}

UGameLiftMatchMakeSystem* UGameLiftMatchMakeSystem::CreateGameLiftMatchMakeSystem() {
    return NULL;
}

void UGameLiftMatchMakeSystem::CreateClientJsonData(FString& joinData) {
}

bool UGameLiftMatchMakeSystem::ActivateMatchMakeAPI(UGLAPI_Base* Api) {
    return false;
}


