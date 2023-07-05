#include "EOSSessionP2PEventPacket.h"

void UEOSSessionP2PEventPacket::SetNotificationWithPUID(EEOSSessionNotificationType _enNotificationType, const FString& _strProductUserID) {
}

void UEOSSessionP2PEventPacket::SetNotificationType(EEOSSessionNotificationType _enNotificationType) {
}

FString UEOSSessionP2PEventPacket::GetTargetProductUserID() {
    return TEXT("");
}

EEOSSessionNotificationType UEOSSessionP2PEventPacket::GetNotificationType() const {
    return EEOSSessionNotificationType::UpdateReceived;
}

UEOSSessionP2PEventPacket::UEOSSessionP2PEventPacket() {
}

