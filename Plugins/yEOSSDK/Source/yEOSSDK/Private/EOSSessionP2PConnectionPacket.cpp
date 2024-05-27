#include "EOSSessionP2PConnectionPacket.h"

UEOSSessionP2PConnectionPacket::UEOSSessionP2PConnectionPacket() {
}

void UEOSSessionP2PConnectionPacket::SetParams(const FString& _strSessionName, const FString& _strDisplayName, const FString& _strProductUserID, const FString& _strEpicAccountID, bool _bNewJoinInUser) {
}

bool UEOSSessionP2PConnectionPacket::IsNewJoinInUser() {
    return false;
}

FString UEOSSessionP2PConnectionPacket::GetSessionName() {
    return TEXT("");
}

FString UEOSSessionP2PConnectionPacket::GetProductUserID() {
    return TEXT("");
}

FString UEOSSessionP2PConnectionPacket::GetEpicAccountID() {
    return TEXT("");
}

FString UEOSSessionP2PConnectionPacket::GetAccountDisplayName() {
    return TEXT("");
}


