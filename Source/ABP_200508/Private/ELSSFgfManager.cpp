#include "ELSSFgfManager.h"
#include "Net/UnrealNetwork.h"

AELSSFgfManager::AELSSFgfManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->CachedFirstLocalSSPlayerController = NULL;
    this->LocalFlowStateForDebug = ESSFgfRoundFlowState::None;
    this->ServerFlowStateForDebug = ESSFgfRoundFlowState::None;
    this->ServerRoundNoForDebug = 0;
    this->ServerIsFirstHalfForDebug = 0;
    this->CurrentRoundNo = 0;
    this->FirstHalfFlag = false;
    this->FinishedMatchType = ESSFinishedMatchType::None;
    this->RoundEndTime = -1.00f;
    this->EndRoundReason = ESSFgfEndRoundReason::None;
    this->ExecutingResetFgfRoundFlag = false;
    this->FgfRoundActiveFlag = true;
    this->FgfBall = NULL;
    this->FgfBallExp = 0;
    this->CachedFgfBallLevel = 0;
    this->DefenseBonus = 0;
    this->bForceOffenseFever = false;
    this->bForceDefenseFever = false;
    this->BallOwnerSpeedScale = 1.00f;
    this->MoveFrictionOverride = -1.00f;
    this->MoveAdjustDurationOverride = -1.00f;
    this->AppliedSpeedScale = 1.00f;
}

void AELSSFgfManager::TickState_RoundSetup_Implementation(float inDeltaSeconds) {
}

void AELSSFgfManager::TickState_RoundPlaying_Implementation(float inDeltaSeconds) {
}






void AELSSFgfManager::SyncFgfFlowStateParam_Multicast_Implementation(const FSSFgfFlowStateSyncParam& syncParam) {
}

void AELSSFgfManager::StartFgfFlow_Implementation() {
}

void AELSSFgfManager::SpawnFgfBall() {
}

void AELSSFgfManager::SetupFieldPatternParam() {
}

void AELSSFgfManager::SetNextRound(bool& outIsFinishedMatch, ESSFinishedMatchType& outFinishedMatchType) {
}

void AELSSFgfManager::OnRep_RoundEndTime() {
}

void AELSSFgfManager::OnRep_FgfMatchInfo() {
}

void AELSSFgfManager::OnRep_FgfFlowStateSyncParam() {
}

void AELSSFgfManager::OnRep_BallExp() {
}

void AELSSFgfManager::MakeFgfMap() {
}

bool AELSSFgfManager::IsSecondHalf() const {
    return false;
}

bool AELSSFgfManager::IsLocalPlayerTeamOffense() const {
    return false;
}

bool AELSSFgfManager::IsLocalPlayerTeamDefense() const {
    return false;
}

bool AELSSFgfManager::IsFlowState(ESSFgfRoundFlowState inState) const {
    return false;
}

bool AELSSFgfManager::IsFirstHalf() const {
    return false;
}

bool AELSSFgfManager::IsFinishedRound() const {
    return false;
}

bool AELSSFgfManager::IsFinalRound() const {
    return false;
}

bool AELSSFgfManager::IsExecutingResetFgfRound() const {
    return false;
}

bool AELSSFgfManager::IsDragonTeamOffense() const {
    return false;
}

bool AELSSFgfManager::IsDoneFgfPlayerProgressBySubState(ESSFgfPlayerProgressSubState inSubState) const {
    return false;
}

bool AELSSFgfManager::IsDoneFgfPlayerProgress(ESSFgfPlayerProgress InProgress) const {
    return false;
}

AELSSPlayerController* AELSSFgfManager::GetFirstLocalSSPlayerController() const {
    return NULL;
}

ESSFgfPlayerProgress AELSSFgfManager::GetFgfPlayerProgressTypeBySubState(ESSFgfPlayerProgressSubState inSubState) const {
    return ESSFgfPlayerProgress::None;
}

AELSSPlayer* AELSSFgfManager::GetFgfBallOwner() const {
    return NULL;
}

int32 AELSSFgfManager::GetCurrentRoundNo() const {
    return 0;
}

void AELSSFgfManager::FinishMatch(ESSFinishedMatchType Type) {
}

bool AELSSFgfManager::FinishFgfRound_Implementation(ESSFgfEndRoundReason inReason) {
    return false;
}

void AELSSFgfManager::ExitState_RoundSetup_Implementation() {
}

void AELSSFgfManager::ExitState_RoundPlaying_Implementation() {
}






bool AELSSFgfManager::ExistsNextRound() const {
    return false;
}

bool AELSSFgfManager::ExistsDefenseBonus() const {
    return false;
}



void AELSSFgfManager::EnterState_RoundSetup_Implementation() {
}

void AELSSFgfManager::EnterState_RoundPlaying_Implementation() {
}


void AELSSFgfManager::EnterState_RoundFinished_Implementation() {
}




void AELSSFgfManager::EndFgfFlow_Implementation() {
}

void AELSSFgfManager::DestroyFgfBall() {
}

void AELSSFgfManager::CompleteExecuteResetFgfRound() {
}

void AELSSFgfManager::CleanupPickupAndItemBox() {
}

bool AELSSFgfManager::CheckReachCalledGame() const {
    return false;
}

void AELSSFgfManager::CheckFinishMatchCondition(bool& outIsFinishedMatch, ESSFinishedMatchType& outFinishedMatchType) {
}

void AELSSFgfManager::ChangeFlowStateForServer(ESSFgfRoundFlowState inState) {
}

void AELSSFgfManager::ChangeFlowStateForClient(ESSFgfRoundFlowState inState) {
}

void AELSSFgfManager::ChangeFlowState(ESSFgfRoundFlowState inState) {
}

bool AELSSFgfManager::CanChangeNextFlowStateForClient() const {
    return false;
}

void AELSSFgfManager::ApplyDefenseBonusOnServer() {
}

void AELSSFgfManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AELSSFgfManager, FgfMatchInfo);
    DOREPLIFETIME(AELSSFgfManager, FgfFlowStateSyncParamRep);
    DOREPLIFETIME(AELSSFgfManager, RoundEndTime);
    DOREPLIFETIME(AELSSFgfManager, EndRoundReason);
    DOREPLIFETIME(AELSSFgfManager, FgfBallExp);
    DOREPLIFETIME(AELSSFgfManager, bForceOffenseFever);
    DOREPLIFETIME(AELSSFgfManager, bForceDefenseFever);
    DOREPLIFETIME(AELSSFgfManager, BallOwnerSpeedScale);
    DOREPLIFETIME(AELSSFgfManager, MoveFrictionOverride);
    DOREPLIFETIME(AELSSFgfManager, MoveAdjustDurationOverride);
}


