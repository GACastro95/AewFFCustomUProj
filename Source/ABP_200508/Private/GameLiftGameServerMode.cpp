#include "GameLiftGameServerMode.h"

AGameLiftGameServerMode::AGameLiftGameServerMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AGameLiftGameServerMode::UpdatePlayerSessionPolicyIsStopPlayerJoin() {
}

void AGameLiftGameServerMode::PrepareGameSession() {
}

bool AGameLiftGameServerMode::IsStartGameSession() const {
    return false;
}

bool AGameLiftGameServerMode::IsPlayerLoginEnd() {
    return false;
}

bool AGameLiftGameServerMode::IsPlayerJoinEnd() const {
    return false;
}

bool AGameLiftGameServerMode::IsGameServerActivate() {
    return false;
}

bool AGameLiftGameServerMode::IsFirstPlayerJoinEnd() const {
    return false;
}

bool AGameLiftGameServerMode::IsEnableSDK() {
    return false;
}

FString AGameLiftGameServerMode::GetServerJoinOptionName() {
    return TEXT("");
}

APlayerState* AGameLiftGameServerMode::GetLoginPlayerToPlayerState(const int32 idx) {
    return NULL;
}

int32 AGameLiftGameServerMode::GetLoginPlayerNum() {
    return 0;
}

FSSOnlinePlayerData AGameLiftGameServerMode::GetLoginPlayerDataToController(const AController* pController) {
    return FSSOnlinePlayerData{};
}

FSSOnlinePlayerData AGameLiftGameServerMode::GetLoginPlayerData(const APlayerState* pSate) {
    return FSSOnlinePlayerData{};
}

int32 AGameLiftGameServerMode::GetJoinPlayerNum() {
    return 0;
}

FGameLiftGameSession_Response AGameLiftGameServerMode::GetJoinGameSessionData() const {
    return FGameLiftGameSession_Response{};
}

int32 AGameLiftGameServerMode::GetGameSessionPlayerMax() {
    return 0;
}

int32 AGameLiftGameServerMode::GetCreatePlayerPawnNum() {
    return 0;
}

void AGameLiftGameServerMode::GameServerEnd() {
}


