#include "EOSManager.h"

UEOSManager::UEOSManager() {
    this->m_pcActiveUserEOSAuth = NULL;
    this->m_pcFileAccessor = NULL;
    this->m_pcUserManager = NULL;
    this->m_pcLobby = NULL;
    this->m_pcSession = NULL;
    this->m_pcTitleStorage = NULL;
    this->m_pcAPIRequestManager = NULL;
}

bool UEOSManager::UpdateForDispose() {
    return false;
}

bool UEOSManager::Update() {
    return false;
}

bool UEOSManager::SetUpdateType(EEOSUpdateType _enType) {
    return false;
}

bool UEOSManager::SetupAntiCheat(UEOSUserBase* _pOwnerUser, const bool isClient) {
    return false;
}

void UEOSManager::SetSDKLogLevel(EEOSSDKLogLevel _enSDKLogLevel) {
}

bool UEOSManager::SetRelayControl(EEOSRelayControl RelayControl) {
    return false;
}

bool UEOSManager::SetPortRange(int32 Port, int32 Range) {
    return false;
}

bool UEOSManager::SetNetworkStatus(EEOSNetworkStatus Status) {
    return false;
}

bool UEOSManager::SetApplicationStatus(EEOSApplicationStatus Status) {
    return false;
}

void UEOSManager::SetApiVersion(FEOSEngineAPIVersionSettings _stAPIVerSetting) {
}

void UEOSManager::SetActiveAuth(UEOSAuth* _pcEOSAuth) {
}

bool UEOSManager::ReleaseSDK() {
    return false;
}

bool UEOSManager::IsValidHandle() const {
    return false;
}

bool UEOSManager::InitSDK(const FString& _strGameName, const FString& _strProductVersion) {
    return false;
}

bool UEOSManager::Initialize(FEOSProductSetting _stSetting, const FString& _strEncryptKey, const FString& _strCacheDirPath) {
    return false;
}

UEOSUserManager* UEOSManager::GetUserManager() {
    return NULL;
}

UEOSTitleStorage* UEOSManager::GetTitleStorage(UEOSUserBase* _pOwnerUser) {
    return NULL;
}

UEOSSession* UEOSManager::GetSession(UEOSUserBase* _pOwnerUser) {
    return NULL;
}

bool UEOSManager::GetRelayControl(EEOSRelayControl& RelayControl) const {
    return false;
}

bool UEOSManager::GetPortRange(int32& Port, int32& Range) const {
    return false;
}

EEOSNetworkStatus UEOSManager::GetNetworkStatus() const {
    return EEOSNetworkStatus::Disabled;
}

UEOSLobby* UEOSManager::GetLobby(UEOSUserBase* _pOwnerUser) {
    return NULL;
}

UEOSFileAccessor* UEOSManager::GetFileAccessor() {
    return NULL;
}

bool UEOSManager::GetDesktopCrossplayStatus() {
    return false;
}

EEOSApplicationStatus UEOSManager::GetApplicationStatus() const {
    return EEOSApplicationStatus::BackgroundConstrained;
}

UEOSVoice* UEOSManager::CreateVoice(UEOSUserBase* _pOwnerUser) {
    return NULL;
}

UEOSStats* UEOSManager::CreateStats(UEOSUserBase* _pOwnerUser) {
    return NULL;
}

UEOSSanctions* UEOSManager::CreateSanctions(UEOSUserBase* _pOwnerUser) {
    return NULL;
}

UEOSReports* UEOSManager::CreateReports(UEOSUserBase* _pOwnerUser) {
    return NULL;
}

UEOSNatP2P* UEOSManager::CreateNatP2P(UEOSUserBase* _pOwnerUser) {
    return NULL;
}

UEOSLeaderboard* UEOSManager::CreateLeaderboard(UEOSUserBase* _pOwnerUser) {
    return NULL;
}

bool UEOSManager::CreateEOSManager(UEOSManager*& EOSManager, uint8 _uInstanceID, UObject* WorldContextObject) {
    return false;
}

UEOSAuth* UEOSManager::CreateAuth() {
    return NULL;
}

UEOSAntiCheatDedicatedServer* UEOSManager::CreateAntiCheatServer() {
    return NULL;
}

UEOSAntiCheatClient* UEOSManager::CreateAntiCheatClient(UEOSUserBase* _pOwnerUser) {
    return NULL;
}

UEOSAchievement* UEOSManager::CreateAchievement(UEOSUserBase* _pOwnerUser) {
    return NULL;
}

bool UEOSManager::ConfirmNetworkRequest() {
    return false;
}


