#include "ELEOSGameSessionMatching.h"

bool UELEOSGameSessionMatching::Setup(UELEOSGameSession* _GameSession, UELEOSLobby* _Lobby, UEOSUser* _User) {
    return false;
}

void UELEOSGameSessionMatching::SetOnlineMatchCount(int32 Count) {
}

void UELEOSGameSessionMatching::SearchSessionInitParam() {
}

bool UELEOSGameSessionMatching::SearchSessionCancel(bool CallCancelEvent) {
    return false;
}

bool UELEOSGameSessionMatching::SearchSession(const TArray<UEOSAttribute*>& _Array, int32 _ResultCount, int32 _RetryCount) {
    return false;
}

void UELEOSGameSessionMatching::ResetOnlineMatchCount() {
}

void UELEOSGameSessionMatching::Reset() {
}

void UELEOSGameSessionMatching::Release() {
}

void UELEOSGameSessionMatching::OnUpdateNatP2PTransfer() {
}

void UELEOSGameSessionMatching::OnReceivedPositionData() {
}

void UELEOSGameSessionMatching::OnGameSessionUpdateSettings() {
}

void UELEOSGameSessionMatching::OnGameSessionSearchResult(FELEOSSessionSearchResultWrapper _Results) {
}

void UELEOSGameSessionMatching::OnGameSessionReceivedPartyData(UEOSUserBase* _CommunityUser, UObject* _Object) {
}

void UELEOSGameSessionMatching::OnGameSessionReceivedNotify(UEOSUserBase* _CommunityUser, UObject* _Object) {
}

void UELEOSGameSessionMatching::OnGameSessionMemberLeave(UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _User) {
}

void UELEOSGameSessionMatching::OnGameSessionMemberJoin(UEOSCommunityUserBase* _User) {
}

void UELEOSGameSessionMatching::OnGameSessionLeave(UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _User) {
}

void UELEOSGameSessionMatching::OnGameSessionJoinErr(UEOSCommunityUserBase* RemoteUser) {
}

void UELEOSGameSessionMatching::OnGameSessionJoin(UEOSCommunityUserBase* _User) {
}

void UELEOSGameSessionMatching::OnGameSessionDestroy() {
}

void UELEOSGameSessionMatching::OnGameSessionCreate() {
}

bool UELEOSGameSessionMatching::IsSetup() {
    return false;
}

bool UELEOSGameSessionMatching::IsSessionSearching() {
    return false;
}

bool UELEOSGameSessionMatching::IsInSession() {
    return false;
}

int32 UELEOSGameSessionMatching::GetOnlineMatchCount() const {
    return 0;
}

int32 UELEOSGameSessionMatching::GetNowPlayerCount() const {
    return 0;
}

int32 UELEOSGameSessionMatching::GetMaxPlayerCount() const {
    return 0;
}

bool UELEOSGameSessionMatching::CreateSession(const FEOSSessionSettings& _Settings) {
    return false;
}

UELEOSGameSessionMatching::UELEOSGameSessionMatching() {
    this->ELGameSession = NULL;
    this->ELLobby = NULL;
    this->EOSUser = NULL;
    this->SetupComplete = false;
    this->SearchSessionResultCount = 0;
    this->CreateSessionMaxPlayerCount = 0;
    this->UpdateMember = false;
    this->UpdatePermission = false;
    this->UpdatePositionData = false;
    this->MatchingComplete = false;
    this->bSearchSessionCancel = false;
    this->UpdateMemberCount = false;
    this->OnlineMatchCount = 0;
}

