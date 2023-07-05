#include "LobbyPacketPrivateMatchRequest.h"

int32 ULobbyPacketPrivateMatchRequest::GetOnlineModeType() const {
    return 0;
}

int32 ULobbyPacketPrivateMatchRequest::GetMatchType() const {
    return 0;
}

int32 ULobbyPacketPrivateMatchRequest::GetMatchParam() const {
    return 0;
}

ULobbyPacketPrivateMatchRequest::ULobbyPacketPrivateMatchRequest() {
    this->OnlineModeType = 0;
    this->MatchType = 0;
    this->MatchParam = 0;
}

