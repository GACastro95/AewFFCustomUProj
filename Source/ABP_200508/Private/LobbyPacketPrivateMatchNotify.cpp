#include "LobbyPacketPrivateMatchNotify.h"

ULobbyPacketPrivateMatchNotify::ULobbyPacketPrivateMatchNotify() {
    this->Notify = 0;
}

ELobbyPacketNotifyType ULobbyPacketPrivateMatchNotify::GetNotifyType() const {
    return ELobbyPacketNotifyType::MatchCancel;
}

ELobbyPacketPrivateMatchNotify ULobbyPacketPrivateMatchNotify::GetNotify() const {
    return ELobbyPacketPrivateMatchNotify::MatchCancel;
}


