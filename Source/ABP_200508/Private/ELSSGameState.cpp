#include "ELSSGameState.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

void AELSSGameState::UpdateSurvivorNum() {
}


void AELSSGameState::TickState_Ready_Implementation(float inDeltaSeconds) {
}




void AELSSGameState::TickState_GamePlay_Implementation(float inDeltaSeconds) {
}





bool AELSSGameState::StartOfMatch_Implementation() {
    return false;
}

AELSSPlayer* AELSSGameState::SpawnSSPlayerByPlayerState(const FTransform& InTransform, AELSSPlayerState* inPlayerState) {
    return NULL;
}

AActor* AELSSGameState::SpawnManagerActor(TSubclassOf<AActor> InClass) {
    return NULL;
}




void AELSSGameState::SpawnAIControllerRemainAll(int32 inWrestlerMax) {
}

AELSSAIController* AELSSGameState::SpawnAIController(EWrestlerID_N inWrestlerId, const FString& inPlayerName) {
    return NULL;
}

void AELSSGameState::ShutdownNetDriverOnSignout() {
}

void AELSSGameState::ShutdownNetDriverOnFinishedMatch() {
}

void AELSSGameState::SetupServerPlayerStateIndex() {
}

void AELSSGameState::SetDummyPlayerName() {
}

void AELSSGameState::RequestTearDownReplicationConnectionDriver() {
}

void AELSSGameState::RequestCloseConnection() {
}


void AELSSGameState::ReleasePreloadAsset() {
}

void AELSSGameState::PrintLog(const FString& Log) {
}

void AELSSGameState::PlayMatchPointPay() {
}

void AELSSGameState::OnRep_VehicleManager() {
}

void AELSSGameState::OnRep_SurvivorNum_Implementation() {
}

void AELSSGameState::OnRep_StateSyncParam() {
}


void AELSSGameState::OnRep_RoundManager() {
}

void AELSSGameState::OnRep_ItemManager() {
}

void AELSSGameState::OnRep_DebugServerState() {
}

void AELSSGameState::OnRep_DebugServerCrashRequestedTime() {
}

void AELSSGameState::OnRep_DebugServerAverageFPS() {
}

void AELSSGameState::OnRep_DebugFlags() {
}

void AELSSGameState::OnCompletePreload_VariableAsset() {
}

void AELSSGameState::OnCompletePreload_StationalAsset() {
}

void AELSSGameState::OnCompletedSpawnManagerActorsLocal() {
}

void AELSSGameState::NotifyRoundEvent_Multicast_Implementation(ESSRoundEventLogType inRoundEvent) {
}

void AELSSGameState::NotifyKo_Multicast_Implementation(APlayerState* killerPlayerState, APlayerState* killedPlayerState, APawn* killedPawn, ESSLogIconType LogIcon) {
}

void AELSSGameState::NotifyKilled_Multicast_Implementation(APlayerState* killerPlayerState, APlayerState* killedPlayerState, APawn* killedPawn, ESSLogIconType LogIcon) {
}

void AELSSGameState::NotifyAnnouceAttention_Multicast_Implementation(int32 inServerPlayerStateIndex, int32 inAttentionPoint) {
}

bool AELSSGameState::NeedsReadyStateForServer() const {
    return false;
}

bool AELSSGameState::NeedsEnableAIForServer() const {
    return false;
}

bool AELSSGameState::IsState(ESSGameFlowState inState) const {
    return false;
}

bool AELSSGameState::IsServerState(ESSServerState inState) const {
    return false;
}


bool AELSSGameState::IsMatchPlayerLobbyEnd() const {
    return false;
}

bool AELSSGameState::IsInitialized() const {
    return false;
}

bool AELSSGameState::IsEnabledServerConnection() const {
    return false;
}

bool AELSSGameState::IsDoneUIPrepare() const {
    return false;
}

bool AELSSGameState::IsDoneSyncPreloadAssetInfo() const {
    return false;
}

bool AELSSGameState::IsDoneReplicatesManagerActors_Implementation() const {
    return false;
}

bool AELSSGameState::IsDoneOpenGamePlayScreen() const {
    return false;
}

bool AELSSGameState::IsDoneActorSpawned() const {
    return false;
}

bool AELSSGameState::IsDeactiveGameSessionForClient() const {
    return false;
}

bool AELSSGameState::IsCompletedPreload() const {
    return false;
}

bool AELSSGameState::InitializeManagerActors_Implementation() {
    return false;
}

bool AELSSGameState::HasProgressFlagForAllPlayers(ESSPlayerProgress Type) const {
    return false;
}

bool AELSSGameState::HasDebugFlag(ESSGameStateDebugFlag Type) const {
    return false;
}

AELSSVehicleManager* AELSSGameState::GetVehicleManager() const {
    return NULL;
}

AELSSSoundManager* AELSSGameState::GetSoundManager() const {
    return NULL;
}

AELSSRoundManager* AELSSGameState::GetRoundManager() const {
    return NULL;
}

UELSSPoolManager* AELSSGameState::GetPoolManager() const {
    return NULL;
}

AELSSLocatorManager* AELSSGameState::GetLocatorManager() const {
    return NULL;
}

AELSSItemManager* AELSSGameState::GetItemManager() const {
    return NULL;
}

AELSSDatabase* AELSSGameState::GetDatabase() const {
    return NULL;
}

AELSSPlayerState* AELSSGameState::FindSSPlayerStateForWatch_Random(bool inCheckPawn) const {
    return NULL;
}

AELSSPlayerState* AELSSGameState::FindSSPlayerState(int32 inServerPlayerIndex, bool inCheckPawn) const {
    return NULL;
}


void AELSSGameState::ExitState_Ready_Implementation() {
}




void AELSSGameState::ExitState_GamePlay_Implementation() {
}





void AELSSGameState::EnterState_Setup_Implementation() {
}

void AELSSGameState::EnterState_Ready_Implementation() {
}




void AELSSGameState::EnterState_GamePlay_Implementation() {
}





bool AELSSGameState::EndOfMatch_Implementation() {
    return false;
}


void AELSSGameState::DebugSetNoTimeouts(bool isNoTimeouts) {
}

void AELSSGameState::DebugSetLocalLobbyStateBP(eSSLobbyState inLobbyState) {
}

void AELSSGameState::DebugPrintStateInfo(float Time) {
}

void AELSSGameState::DebugAddInstantMessage_Multicast_Implementation(const FString& inMessage) {
}

void AELSSGameState::DeadMySelf_Implementation() {
}

FWrestlerSetupParam AELSSGameState::CreateWrestlerSetupParam(const FSSWrestlerSetupParam& inSSWrestlerSetupParam) const {
    return FWrestlerSetupParam{};
}

void AELSSGameState::CreatePreloadAssetInfoForDebug() {
}

void AELSSGameState::CreatePreloadAssetInfo() {
}

void AELSSGameState::ClearShouldShutdownGameFlag() {
}

bool AELSSGameState::CheckMultiPlayFeature() const {
    return false;
}

bool AELSSGameState::CheckDoneShutdownNetDriver() const {
    return false;
}

void AELSSGameState::ChangeState_Multicast_Implementation(ESSGameFlowState inState, int32 inStateSyncId) {
}

void AELSSGameState::ChangeState(ESSGameFlowState inState) {
}

bool AELSSGameState::CanStartOfMatch_Implementation() const {
    return false;
}


void AELSSGameState::BeginAsyncPreloadVariableAsset() {
}


void AELSSGameState::BeginAsyncPreloadStationalAsset() {
}

void AELSSGameState::ApplyConnectionTimeoutDuration(bool isLobby) {
}

void AELSSGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AELSSGameState, StateSyncParamRep);
    DOREPLIFETIME(AELSSGameState, PreloadAssetInfoRep);
    DOREPLIFETIME(AELSSGameState, RoundManager);
    DOREPLIFETIME(AELSSGameState, ItemManager);
    DOREPLIFETIME(AELSSGameState, VehicleManager);
    DOREPLIFETIME(AELSSGameState, SurvivorNum);
    DOREPLIFETIME(AELSSGameState, SSModeLobby);
    DOREPLIFETIME(AELSSGameState, Activity_ReplicatedMatchId);
    DOREPLIFETIME(AELSSGameState, Activity_Result);
    DOREPLIFETIME(AELSSGameState, DebugFlags);
    DOREPLIFETIME(AELSSGameState, DebugServerState);
    DOREPLIFETIME(AELSSGameState, DebugServerLobbyState);
    DOREPLIFETIME(AELSSGameState, DebugServerAverageFPS);
    DOREPLIFETIME(AELSSGameState, DebugServerMaxDeltaSec_Recently5sec);
    DOREPLIFETIME(AELSSGameState, DebugServerCrashRequestedTime);
}

AELSSGameState::AELSSGameState() {
    this->PrevState = ESSGameFlowState::None;
    this->bShouldShutdownGame = false;
    this->bDoneShutdownNetDriver = false;
    this->SSPlayerClass = NULL;
    this->AIControllerClass = NULL;
    this->LocationCheckOffsetZ_Top = 100;
    this->LocationCheckOffsetZ_Bottom = -100;
    this->AINpcIdCount = 0;
    this->LocatorManagerType = NULL;
    this->LocatorManager = NULL;
    this->SoundManagerType = NULL;
    this->SoundManager = NULL;
    this->RoundManagerType = NULL;
    this->RoundManager = NULL;
    this->ItemManagerType = NULL;
    this->ItemManager = NULL;
    this->VehicleManagerType = NULL;
    this->VehicleManager = NULL;
    this->SaveDataManager = NULL;
    this->SaveDataManagerType = NULL;
    this->SurvivorNum = 0;
    this->LastSurvivorIndex = -1;
    this->ValidObjectTrapLimit = 15;
    this->FadeManager = NULL;
    this->DatabaseType = NULL;
    this->Database = NULL;
    this->PoolManager = NULL;
    this->PoolableRegistTable = NULL;
    this->OptimizeManager = NULL;
    this->SSModeLobby = NULL;
    this->BackUpCVarPoolSize = 0;
    this->DesiredCVarPoolSize = 500;
    this->SwicthDesiredCVarPoolSize = 400;
    this->BackUpCVarMaxTempMemoryAllowed = 0;
    this->DesiredCVarMaxTempMemoryAllowed = 128;
    this->Activity_ExecPlayerState = NULL;
    this->DebugFlags = 0;
    this->DebugServerState = ESSServerState::None;
    this->DebugServerLobbyState = eSSLobbyState::eSSLobbyState_None;
    this->DebugLocalLobbyState = eSSLobbyState::eSSLobbyState_None;
    this->DebugLocalLobbyStateBP = eSSLobbyState::eSSLobbyState_None;
    this->DebugServerAverageFPS = 0.00f;
    this->DebugServerMaxDeltaSec_Recently5sec = 0.00f;
    this->DebugServerCrashRequestedTime = 0.00f;
}

