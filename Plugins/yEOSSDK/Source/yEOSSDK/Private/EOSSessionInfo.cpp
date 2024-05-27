#include "EOSSessionInfo.h"

UEOSSessionInfo::UEOSSessionInfo() {
    this->m_pcSessionP2P = NULL;
}

bool UEOSSessionInfo::SetHostMigrationTarget(bool _bIsHostMigrationTarget) {
    return false;
}

bool UEOSSessionInfo::SetEOSSessionP2P(UEOSSessionP2P* _pcSessionP2P) {
    return false;
}

bool UEOSSessionInfo::SendSessionEventPacket(EEOSSessionNotificationType _enNotificationType, const FString& _strProductUserID) {
    return false;
}

bool UEOSSessionInfo::SendQuitGameOnSession() {
    return false;
}

bool UEOSSessionInfo::SendConnectionPacket(UEOSUserBase* _pcUserBase, bool _bNewJoinInUser) {
    return false;
}

bool UEOSSessionInfo::IsPresenceEnabled() const {
    return false;
}

bool UEOSSessionInfo::IsHostMigrationTarget() {
    return false;
}

bool UEOSSessionInfo::IsHostMigrationSession() const {
    return false;
}

bool UEOSSessionInfo::IsAllowJoinInProgress() const {
    return false;
}

FString UEOSSessionInfo::GetStringOfSessionID() {
    return TEXT("");
}

EEOSSessionState UEOSSessionInfo::GetSessionState() const {
    return EEOSSessionState::None;
}

bool UEOSSessionInfo::GetSendSynchronizedPacket(UEOSSessionP2PSynchronizedPacketBase*& _pcPacketBase, int32 _sPacketType, const FString& _strProductUserID) {
    return false;
}

TMap<int32, UEOSSessionP2PPacketBase*> UEOSSessionInfo::GetSendPackets() {
    return TMap<int32, UEOSSessionP2PPacketBase*>();
}

bool UEOSSessionInfo::GetSendPacket(UEOSSessionP2PPacketBase*& _pcPacketBase, int32 _sPacketType) {
    return false;
}

bool UEOSSessionInfo::GetReceivedSynchronizedPacket(UEOSSessionP2PSynchronizedPacketBase*& _pcPacketBase, int32 _sPacketType, const FString& _strProductUserID) {
    return false;
}

FString UEOSSessionInfo::GetHostAddress() {
    return TEXT("");
}

bool UEOSSessionInfo::GetEOSSessionP2P(UEOSSessionP2P*& _pcSessionP2P) {
    return false;
}

FString UEOSSessionInfo::GetBucketID() {
    return TEXT("");
}

bool UEOSSessionInfo::DestroySessionP2P() {
    return false;
}


