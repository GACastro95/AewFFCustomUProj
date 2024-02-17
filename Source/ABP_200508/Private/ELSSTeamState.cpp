#include "ELSSTeamState.h"
#include "Net/UnrealNetwork.h"

void AELSSTeamState::UpdateUI_WaitingFinish() {
}

void AELSSTeamState::UpdateUI_SetupCommon_Implementation() {
}

void AELSSTeamState::UpdateUI_First_Implementation() {
}

void AELSSTeamState::UpdateUI_BeginWatchTeam() {
}

void AELSSTeamState::UpdateUI_BeginWatchGame() {
}

void AELSSTeamState::SyncLocalTeamStatus() {
}

void AELSSTeamState::SetTeamScoreRanking(int32 inScoreRanking) {
}

void AELSSTeamState::OnRep_TeamScoreRanking() {
}

void AELSSTeamState::OnRep_TeamScore() {
}

void AELSSTeamState::OnRep_TeamResult() {
}

void AELSSTeamState::OnRep_TeamLeaderSlotNo() {
}

void AELSSTeamState::OnRep_TeamInfo() {
}

void AELSSTeamState::OnRep_SelectedSpawnArea() {
}

void AELSSTeamState::OnRep_JewelRadarLevel() {
}










bool AELSSTeamState::IsViewTargetTeam() const {
    return false;
}

bool AELSSTeamState::IsSyncedResult() const {
    return false;
}

int32 AELSSTeamState::IsPlayerTeam() const {
    return 0;
}

bool AELSSTeamState::IsLocalPlayerTeam() const {
    return false;
}

bool AELSSTeamState::IsAlived() const {
    return false;
}

UELSSPanelInGameBase* AELSSTeamState::GetUIPanel() const {
    return NULL;
}

AELSSUIManagerInGame* AELSSTeamState::GetUIManager() const {
    return NULL;
}

AELSSPlayerState* AELSSTeamState::GetTeamMemberPlayerStateBySlotNo(int32 inSlotNo) const {
    return NULL;
}

AELSSPlayerState* AELSSTeamState::GetTeamLeaderPlayerState() const {
    return NULL;
}

int32 AELSSTeamState::GetTeamId() const {
    return 0;
}

int32 AELSSTeamState::GetSlotNoByPlayerState(const AELSSPlayerState* inPlayerState) const {
    return 0;
}

int32 AELSSTeamState::GetSlotIndexByPlayerState(AELSSPlayerState* inPlayerState) const {
    return 0;
}

AELSSPlayerController* AELSSTeamState::GetFirstLocalSSPlayerController() const {
    return NULL;
}

bool AELSSTeamState::ChangeLeader(int32 inLeaderSlotNo) {
    return false;
}

bool AELSSTeamState::CanRespawn() const {
    return false;
}

void AELSSTeamState::AddTeamScore(ESSTeamScoreReason inReason, int32 NewAddTeamScore) {
}

void AELSSTeamState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AELSSTeamState, TeamInfoRep);
    DOREPLIFETIME(AELSSTeamState, TeamLeaderSlotNo);
    DOREPLIFETIME(AELSSTeamState, TeamScore);
    DOREPLIFETIME(AELSSTeamState, TeamScoreRanking);
    DOREPLIFETIME(AELSSTeamState, TeamResult);
    DOREPLIFETIME(AELSSTeamState, JewelRadarLevel);
    DOREPLIFETIME(AELSSTeamState, SelectedSpawnArea);
}

AELSSTeamState::AELSSTeamState() {
    this->CachedSSGameState = NULL;
    this->CachedFirstLocalSSPlayerController = NULL;
    this->TeamLeaderSlotNo = 1;
    this->TeamScore = 0;
    this->TeamScoreRanking = 0;
    this->JewelRadarLevel = 0;
    this->CacheFgfBallHoldPlayer = NULL;
    this->SelectedSpawnArea = -1;
}

