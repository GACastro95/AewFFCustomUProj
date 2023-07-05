#include "LobbyPacketPrivateMatchResponse.h"

bool ULobbyPacketPrivateMatchResponse::GetAccept() const {
    return false;
}

ULobbyPacketPrivateMatchResponse::ULobbyPacketPrivateMatchResponse() {
    this->Accept = false;
}

