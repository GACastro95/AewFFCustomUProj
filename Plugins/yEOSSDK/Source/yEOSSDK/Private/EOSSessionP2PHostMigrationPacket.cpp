#include "EOSSessionP2PHostMigrationPacket.h"

UEOSSessionP2PHostMigrationPacket::UEOSSessionP2PHostMigrationPacket() {
}

bool UEOSSessionP2PHostMigrationPacket::SetSessionInfo(UEOSSessionInfo* _pcSessionInfo) {
    return false;
}

bool UEOSSessionP2PHostMigrationPacket::SetProductUserID(const FString& _strOldHostPUID, const FString& _strNextHostPUID, int32 _sPriorityIndex) {
    return false;
}

bool UEOSSessionP2PHostMigrationPacket::SetClientResultType(EEOSSessionHostMigrationClientResultType _enHostMigrationClientResultType) {
    return false;
}

bool UEOSSessionP2PHostMigrationPacket::Request(EEOSSessionHostMigrationType _enType, EEOSSessionHostMigrationStep _enStep) {
    return false;
}

FString UEOSSessionP2PHostMigrationPacket::GetOldHostProductUserID() {
    return TEXT("");
}

FString UEOSSessionP2PHostMigrationPacket::GetNextSessionID() {
    return TEXT("");
}

FString UEOSSessionP2PHostMigrationPacket::GetNextHostProductUserID() {
    return TEXT("");
}

int32 UEOSSessionP2PHostMigrationPacket::GetMemberNum() {
    return 0;
}

EEOSSessionHostMigrationType UEOSSessionP2PHostMigrationPacket::GetHostMigrationType() {
    return EEOSSessionHostMigrationType::None;
}

EEOSSessionHostMigrationStep UEOSSessionP2PHostMigrationPacket::GetHostMigrationStep() {
    return EEOSSessionHostMigrationStep::None;
}

int32 UEOSSessionP2PHostMigrationPacket::GetCurrentHostPriorityIndex() {
    return 0;
}

EEOSSessionHostMigrationClientResultType UEOSSessionP2PHostMigrationPacket::GetClientResultType() {
    return EEOSSessionHostMigrationClientResultType::None;
}


