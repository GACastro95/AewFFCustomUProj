#include "EOSSessionP2PSynchronizedPacketBase.h"

bool UEOSSessionP2PSynchronizedPacketBase::UpdateFrameCount() {
    return false;
}

void UEOSSessionP2PSynchronizedPacketBase::SetMaxRetryCount(uint8 _uMaxRetryCount) {
}

void UEOSSessionP2PSynchronizedPacketBase::SetMaxFrameCount(int32 _sMaxFrameCount) {
}

bool UEOSSessionP2PSynchronizedPacketBase::SendForHostMigration(int32 _uPacketIndex) {
    return false;
}

bool UEOSSessionP2PSynchronizedPacketBase::Retry() {
    return false;
}

bool UEOSSessionP2PSynchronizedPacketBase::ResetRetry() {
    return false;
}

bool UEOSSessionP2PSynchronizedPacketBase::RequestForResult(bool _bSuccess) {
    return false;
}

bool UEOSSessionP2PSynchronizedPacketBase::IsReply() {
    return false;
}

bool UEOSSessionP2PSynchronizedPacketBase::IsNeedToSendByHost() const {
    return false;
}

bool UEOSSessionP2PSynchronizedPacketBase::IsNeedToSendByClient() const {
    return false;
}

bool UEOSSessionP2PSynchronizedPacketBase::IsNeedToMigrateWhenHostMigration() const {
    return false;
}

EEOSSessionPacketTransfterState UEOSSessionP2PSynchronizedPacketBase::GetTransferState() const {
    return EEOSSessionPacketTransfterState::None;
}

EEOSSessionPacketSyncProcType UEOSSessionP2PSynchronizedPacketBase::GetSyncProcType() {
    return EEOSSessionPacketSyncProcType::None;
}

EEOSSessionPacketSyncState UEOSSessionP2PSynchronizedPacketBase::GetPacketSyncState() const {
    return EEOSSessionPacketSyncState::None;
}

bool UEOSSessionP2PSynchronizedPacketBase::Compare(UEOSSessionP2PSynchronizedPacketBase* _pstPacketBase) {
    return false;
}

UEOSSessionP2PSynchronizedPacketBase::UEOSSessionP2PSynchronizedPacketBase() {
}

