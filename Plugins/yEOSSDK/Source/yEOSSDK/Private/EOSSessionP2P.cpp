#include "EOSSessionP2P.h"

bool UEOSSessionP2P::Update() {
    return false;
}

bool UEOSSessionP2P::UnregistCallbackInterface(TScriptInterface<IEOSSessionP2PCallbackInterface> _pcIntarface) {
    return false;
}

void UEOSSessionP2P::SetupSocket(const FString& _strSocketID, uint8 _uChannelNo) {
}

bool UEOSSessionP2P::SetupInternalCallback() {
    return false;
}

bool UEOSSessionP2P::SetUpdateType(EEOSUpdateType _enType) {
    return false;
}

bool UEOSSessionP2P::SetSessionP2PAdditionalFunctionBits(uint8 _uSessionP2PAdditionalFunctionBits) {
    return false;
}

void UEOSSessionP2P::SetReceivedPacketMaxCacheNum(uint8 _uNum) {
}

bool UEOSSessionP2P::SetPacketGenerator(UEOSSessionP2PPacketGeneratorBase* _pcPacketGenerator) {
    return false;
}

bool UEOSSessionP2P::SetEOSSession(UEOSSession* _pcSession) {
    return false;
}

bool UEOSSessionP2P::SetCommunityInfo(UEOSCommunityInfoBase* _pcCommunityInfoBase) {
    return false;
}

void UEOSSessionP2P::SetApiVersion(FEOSNatP2PAPIVersionSettings _stAPIVerSetting) {
}

bool UEOSSessionP2P::RequestNatType() {
    return false;
}

bool UEOSSessionP2P::RequestLatencyCheck(const FString& _strProductUserID) {
    return false;
}

bool UEOSSessionP2P::RemoveUserMap(const FString& _strProductUserID) {
    return false;
}

bool UEOSSessionP2P::RegistCallbackInterface(TScriptInterface<IEOSSessionP2PCallbackInterface> _pcIntarface, const FString& _strProductUserID) {
    return false;
}

bool UEOSSessionP2P::OnSessionSyncRequest() {
    return false;
}

bool UEOSSessionP2P::OnSessionGameStart() {
    return false;
}

bool UEOSSessionP2P::OnSessionGameSetup() {
    return false;
}

bool UEOSSessionP2P::OnSessionGameResume() {
    return false;
}

bool UEOSSessionP2P::OnSessionGamePause() {
    return false;
}

bool UEOSSessionP2P::OnSessionGameEnd() {
    return false;
}

bool UEOSSessionP2P::IsSynchronizedAllPlayerPackets() {
    return false;
}

bool UEOSSessionP2P::IsSynchronizedAllPlayerPacket(int32 _sPacketType) {
    return false;
}

bool UEOSSessionP2P::IsLocalUserTheOwner() const {
    return false;
}

bool UEOSSessionP2P::IsHostMigratingNow() {
    return false;
}

bool UEOSSessionP2P::IsDoneSessionGameSetup() {
    return false;
}

bool UEOSSessionP2P::IsDoneSessionGamePause() {
    return false;
}

bool UEOSSessionP2P::IsDoneAllPlayerRegistedOnSession() {
    return false;
}

bool UEOSSessionP2P::IsDoneAllPlayerCheckLatency() {
    return false;
}

bool UEOSSessionP2P::IsActiveP2PUser(const FString& _strProductUserID) {
    return false;
}

bool UEOSSessionP2P::HasActiveP2PUserMap() {
    return false;
}

bool UEOSSessionP2P::GetUserMap(UEOSSessionUserPacketMap*& _pcUserPacketMap, const FString& _strProductUserID) {
    return false;
}

void UEOSSessionP2P::GetTransferSize(int32& _rsSendSize, int32& _rsRecvSize) {
}

FString UEOSSessionP2P::GetStringOfProductUserIDForOwnerUser() const {
    return TEXT("");
}

FString UEOSSessionP2P::GetSocketID() const {
    return TEXT("");
}

bool UEOSSessionP2P::GetSendSynchronizedPacket(UEOSSessionP2PSynchronizedPacketBase*& _pcPacketBase, int32 _sPacketType, const FString& _strProductUserID) {
    return false;
}

bool UEOSSessionP2P::GetReceivedSynchronizedPacket(UEOSSessionP2PSynchronizedPacketBase*& _pcPacketBase, int32 _sPacketType, const FString& _strProductUserID) {
    return false;
}

EEOSNatType UEOSSessionP2P::GetNatType() const {
    return EEOSNatType::Unknown;
}

bool UEOSSessionP2P::GetEOSSessionP2PAdditionalFunction(UEOSSessionP2PAdditionalFunctionBase*& _pcEOSSessionP2PAdditionalFnctionBase, EEOSSessionP2PAdditionalFunctionTypeBits _enSessionP2PAdditionalFunctionType) {
    return false;
}

bool UEOSSessionP2P::GetEOSSessionInfo(UEOSSessionInfo*& _pcSessionInfo) {
    return false;
}

bool UEOSSessionP2P::GetCopiedUserMap(TArray<UEOSSessionUserPacketMap*>& _pcCopiedUserMap) {
    return false;
}

int32 UEOSSessionP2P::GetConnectedPearNum() {
    return 0;
}

int32 UEOSSessionP2P::GetChannel() const {
    return 0;
}

bool UEOSSessionP2P::GetAllPlayerHostMigrationStep(EEOSSessionHostMigrationStep& _enHostMigrationStep) {
    return false;
}

bool UEOSSessionP2P::GetAllPlayerGameEvent(EEOSSessionGameEventType& _enRefEventType, bool _bIncludeHost) {
    return false;
}

bool UEOSSessionP2P::GetActiveUserMap(TArray<UEOSSessionUserPacketMap*>& _pcCopiedUserMap) {
    return false;
}

bool UEOSSessionP2P::GetActiveP2PProductUserIDList(TArray<FString>& _pcProductUserIDList) {
    return false;
}

FString UEOSSessionP2P::GetAccountDisplayNameForSession() {
    return TEXT("");
}

FString UEOSSessionP2P::GetAccountDisplayNameForOwnerUser() const {
    return TEXT("");
}

bool UEOSSessionP2P::CreateReceivePacket(UEOSSessionP2PPacketBase*& _pcPacket, int32 _sPacketType) {
    return false;
}

bool UEOSSessionP2P::CreatePacket(UEOSSessionP2PPacketBase*& _pcPacket, int32 _sPacketType) {
    return false;
}

bool UEOSSessionP2P::CloseSocket() {
    return false;
}

bool UEOSSessionP2P::CloseConnection(UEOSUserBase* _pcUser) {
    return false;
}

bool UEOSSessionP2P::AddUserMap(UEOSSessionUserPacketMap*& _pcUserPacketMap, UEOSCommunityUserBase* _pcCommunityUserBase) {
    return false;
}

UEOSSessionP2P::UEOSSessionP2P() {
    this->m_pcSession = NULL;
    this->m_pcSessionInfo = NULL;
    this->m_pcPacketQueue = NULL;
}

