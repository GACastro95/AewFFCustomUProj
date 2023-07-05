#include "EOSSessionP2PGameEventPacket.h"

bool UEOSSessionP2PGameEventPacket::Request(EEOSSessionGameEventType _enEOSSessionGameEventType) {
    return false;
}

bool UEOSSessionP2PGameEventPacket::GetRequest() {
    return false;
}

EEOSSessionGameEventType UEOSSessionP2PGameEventPacket::GetGameEventType() {
    return EEOSSessionGameEventType::None;
}

EEOSSessionGameEventRequestType UEOSSessionP2PGameEventPacket::GetGameEventRequestType() {
    return EEOSSessionGameEventRequestType::None;
}

UEOSSessionP2PGameEventPacket::UEOSSessionP2PGameEventPacket() {
}

