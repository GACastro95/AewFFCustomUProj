#include "LobbyPacketPrivateMatchNotify.h"

ELobbyPacketNotifyType ULobbyPacketPrivateMatchNotify::GetNotifyType() const {
    return ELobbyPacketNotifyType::MatchCancel;
}

ELobbyPacketPrivateMatchNotify ULobbyPacketPrivateMatchNotify::GetNotify() const {
    return ELobbyPacketPrivateMatchNotify::MatchCancel;
}

ULobbyPacketPrivateMatchNotify::ULobbyPacketPrivateMatchNotify() {
    this->Notify = 0;
}

