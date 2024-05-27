#include "ELEOSLobbyPacketRequest.h"

UELEOSLobbyPacketRequest::UELEOSLobbyPacketRequest() {
    this->RequestType = EELEOSLobbyPacketRequestType::RequestMiniGameInfo;
}

void UELEOSLobbyPacketRequest::SetData(EELEOSLobbyPacketRequestType Type, UObject* Data) {
}

EELEOSLobbyPacketRequestType UELEOSLobbyPacketRequest::GetRequestType() const {
    return EELEOSLobbyPacketRequestType::None;
}

UObject* UELEOSLobbyPacketRequest::GetRequestData() const {
    return NULL;
}


