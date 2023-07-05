#include "ELSSGameLobby.h"
#include "Net/UnrealNetwork.h"

void UELSSGameLobby::Update(const float DeltaTime) {
}

bool UELSSGameLobby::StartupLobby() {
    return false;
}

void UELSSGameLobby::SSGameServerJoinPlayerNotifyEvent(APlayerController* pController, const FSSOnlinePlayerData& PlayerData, bool isLogin) {
}

void UELSSGameLobby::OnRep_SSGameValidPlayerCount() {
}

void UELSSGameLobby::OnRep_SSGameStartLimitTime() {
}

void UELSSGameLobby::OnRep_SSGameNpcCount() {
}

void UELSSGameLobby::OnRep_SSGameLobbyState() {
}

void UELSSGameLobby::OnRep_SSGameLobbyData() {
}

bool UELSSGameLobby::IsLobbyMatchPlayerToCheckClient(TArray<AELSSPlayerState*>& allPlayerList, TArray<FELSSLobbyMatchPlayerDataToClient>& inPlayerList, TArray<FELSSLobbyMatchPlayerDataToClient>& outPlayerList) {
    return false;
}

bool UELSSGameLobby::IsLobbyMatchAIPlayer(TArray<AELSSPlayerState*>& aiPlayerList) {
    return false;
}

bool UELSSGameLobby::IsLobbyEnd() {
    return false;
}

bool UELSSGameLobby::IsEmptyLobby() {
    return false;
}

bool UELSSGameLobby::InitializeLobby(AGameMode* ownerGameMode, const FSSGameLobbyData& datLobby) {
    return false;
}

void UELSSGameLobby::InitializeForClient() {
}

void UELSSGameLobby::GetMatchPlayerData(TArray<FELSSLobbyMatchPlayerDataToClient>& dats) {
}

eSSLobbyState UELSSGameLobby::GetLobbyState() {
    return eSSLobbyState::eSSLobbyState_None;
}

int32 UELSSGameLobby::GetLobbyPlayerCount() {
    return 0;
}

TArray<FELSSLobbyMatchPlayerDataToClient> UELSSGameLobby::GetLobbyHottestPlayerDataToClient() {
    return TArray<FELSSLobbyMatchPlayerDataToClient>();
}

float UELSSGameLobby::GetGameStartTime() {
    return 0.0f;
}

void UELSSGameLobby::ForceLobbySyncDataNoticeToClient() {
}

void UELSSGameLobby::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UELSSGameLobby, tGameStartLimit);
    DOREPLIFETIME(UELSSGameLobby, ssGamePlayerCount);
    DOREPLIFETIME(UELSSGameLobby, ssGameNpcCount);
    DOREPLIFETIME(UELSSGameLobby, ssGameLobbyState);
    DOREPLIFETIME(UELSSGameLobby, ssLobbyData);
}

UELSSGameLobby::UELSSGameLobby() {
    this->tGameStartLimit = 0.00f;
    this->ssGamePlayerCount = 0;
    this->ssGameNpcCount = 0;
    this->ssGameLobbyState = eSSLobbyState::eSSLobbyState_None;
    this->IsInitialized = false;
}

