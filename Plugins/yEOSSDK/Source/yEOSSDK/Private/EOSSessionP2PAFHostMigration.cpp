#include "EOSSessionP2PAFHostMigration.h"

void UEOSSessionP2PAFHostMigration::SetRetryParams(int32 _sRetryCountForAPI, int32 _sRetryCountForRequestStatus, float _fTimerInterval, float _fRetryInterval) {
}

bool UEOSSessionP2PAFHostMigration::SetActiveSessionSetting(const FEOSSessionSettings& _stSessionSession) {
    return false;
}

bool UEOSSessionP2PAFHostMigration::SetActiveObserver(bool _bActivate) {
    return false;
}

bool UEOSSessionP2PAFHostMigration::SendLatencyInfo() {
    return false;
}

bool UEOSSessionP2PAFHostMigration::SendHostMigrationPacket(EEOSSessionHostMigrationType _enType, EEOSSessionHostMigrationStep _enStep) {
    return false;
}

bool UEOSSessionP2PAFHostMigration::Reset() {
    return false;
}

void UEOSSessionP2PAFHostMigration::OnCommunitySearchResultEvent(UEOSCommunityBase* _pcEOSCommunityBase, UEOSSearchResultsBase* _pcEOSSearchResultsBase) {
}

void UEOSSessionP2PAFHostMigration::OnCommunityEventForHostMigration(EEOSCommunityEvent _enEOSCommunityEvent, UEOSCommunityBase* _pcEOSCommunityBase, UEOSCommunityInfoBase* _pcEOSCommunityInfo, UEOSCommunityUserBase* _pcEOSLobbyUser) {
}

bool UEOSSessionP2PAFHostMigration::IsNextHostOfTheMe() const {
    return false;
}

bool UEOSSessionP2PAFHostMigration::IsMigratingNow() const {
    return false;
}

bool UEOSSessionP2PAFHostMigration::IsActiveObserver() const {
    return false;
}

int32 UEOSSessionP2PAFHostMigration::GetWaitMemberNum() {
    return 0;
}

int32 UEOSSessionP2PAFHostMigration::GetUpdateStateRequestRetryCount() const {
    return 0;
}

FEOSSessionSettings UEOSSessionP2PAFHostMigration::GetSessionSettings() const {
    return FEOSSessionSettings{};
}

int32 UEOSSessionP2PAFHostMigration::GetRetryToRquestAPICount() const {
    return 0;
}

bool UEOSSessionP2PAFHostMigration::GetNextHostUserPacketMap(UEOSSessionUserPacketMap*& _pcNextHostUserPacketMap) {
    return false;
}

bool UEOSSessionP2PAFHostMigration::GetNextHostProductUserID(FString& _rstNextHostProductUserID) {
    return false;
}

int32 UEOSSessionP2PAFHostMigration::GetMaxUpdateStateRequestRetryCount() const {
    return 0;
}

int32 UEOSSessionP2PAFHostMigration::GetMaxRetryToRquestAPICount() const {
    return 0;
}

int32 UEOSSessionP2PAFHostMigration::GetHostPriority(const FString& _strProductUserID) const {
    return 0;
}

EEOSSessionHostMigrationStep UEOSSessionP2PAFHostMigration::GetHostMigrationStep() const {
    return EEOSSessionHostMigrationStep::None;
}

EEOSSessionHostMigrationClientResultType UEOSSessionP2PAFHostMigration::GetHostMigrationClientResultType() const {
    return EEOSSessionHostMigrationClientResultType::None;
}

bool UEOSSessionP2PAFHostMigration::GetEOSSessionUserPacketMapForNextHost(UEOSSessionUserPacketMap*& _pcNextHostUserPacketMap) {
    return false;
}

bool UEOSSessionP2PAFHostMigration::GetEOSSessionP2PLatencyInfoPacket(UEOSSessionP2PLatencyInfoPacket*& _pcLatencyInfo) {
    return false;
}

bool UEOSSessionP2PAFHostMigration::GetEOSSessionInfoForBefore(UEOSSessionInfo*& _pcSessionInfoOld) {
    return false;
}

bool UEOSSessionP2PAFHostMigration::GetEOSSessionInfoForAfter(UEOSSessionInfo*& _pcSessionInfoNext) {
    return false;
}

UEOSSessionP2PAFHostMigration::UEOSSessionP2PAFHostMigration() {
    this->m_pcLatencyInfo = NULL;
    this->m_pcNextHostUserPacketMap = NULL;
    this->m_pcSessionInfoOld = NULL;
    this->m_pcSessionInfoNext = NULL;
    this->m_pcCheckForHostSession = NULL;
}

