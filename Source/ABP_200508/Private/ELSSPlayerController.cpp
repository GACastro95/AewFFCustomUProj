#include "ELSSPlayerController.h"
#include "ELSSCheatManager.h"
#include "ELSSGameplayCamera.h"

AELSSPlayerController::AELSSPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoManageActiveCameraTarget = false;
    this->CheatClass = UELSSCheatManager::StaticClass();
    this->ClickEventKeys.AddDefaulted(1);
    this->IsRestrictMoveOnly = false;
    this->IsNetworkError = false;
    this->IsApiDisabled = false;
    this->MouseControlMode = ESSMouseControlMode::Menu;
    this->GameplayCameraType = AELSSGameplayCamera::StaticClass();
    this->GameplayCamera = NULL;
    this->StationalCameraType = NULL;
    this->StationalCamera = NULL;
    this->PrevState = ESSClientFlowState::None;
    this->EndGameReason = ESSEndGameReason::None;
    this->MenuOperationalWidgetManager = NULL;
    this->WatchTargetPlayerState = NULL;
    this->WatchTargetTeamState = NULL;
    this->WatchGameIgnoreDecisionTime = 1.00f;
    this->IsOpenedConfirmDialog_LeaveWatchTeam = false;
    this->IsLeavedFromWatchTeam = false;
    this->VictoryCutscene = NULL;
    this->ShowNearPlayerStatusDistance = 500.00f;
    this->InteractableObjectDotIconDistance = 1000.00f;
    this->IsEnableOpenPauseMenu = false;
    this->InputOnly = false;
    this->ParentPlayerController = NULL;
    this->ssAntiCheatData = NULL;
}

void AELSSPlayerController::WatchTeam_OnReleaseMenuDecision() {
}

void AELSSPlayerController::WatchTeam_OnPressMenuRB() {
}

void AELSSPlayerController::WatchTeam_OnPressMenuLB() {
}

void AELSSPlayerController::WatchTeam_OnPressMenuDecision() {
}




void AELSSPlayerController::WatchGame_OnReleaseMenuDecision() {
}

void AELSSPlayerController::WatchGame_OnPressMenuRB() {
}

void AELSSPlayerController::WatchGame_OnPressMenuLB() {
}

void AELSSPlayerController::WatchGame_OnPressMenuDecision() {
}




void AELSSPlayerController::UpdateWaitRespawnCountdown() {
}

void AELSSPlayerController::UpdateViewTarget(float InDuration) {
}

void AELSSPlayerController::UpdateNearPlayerList() {
}

void AELSSPlayerController::UpdateNearMatchItem() {
}

void AELSSPlayerController::UpdateNearInteractableObjectList() {
}

void AELSSPlayerController::UIPrepare_RPC_Implementation() {
}

void AELSSPlayerController::ToggleMinimapMode() {
}





void AELSSPlayerController::TickClientFlowState_WatchTeam_Native(float inDeltaSeconds) {
}


void AELSSPlayerController::TickClientFlowState_WatchGame_Native(float inDeltaSeconds) {
}












void AELSSPlayerController::SyncWatchTargetPlayer_Server_Implementation(int32 inWatchPlayerIndex, int32 inSyncId) {
}


void AELSSPlayerController::StartResultTally_RPC_Implementation() {
}

void AELSSPlayerController::SSAntiCheatClient_DisconnectServer_Implementation() {
}

void AELSSPlayerController::SSAntiCheatClient_ConnectServer_Implementation(const int32 Type, const int32 Platform, const FString& ipAddress, const FString& playerId, const FString& ProductUserID) {
}

void AELSSPlayerController::ShowRespawnCountdown() {
}

void AELSSPlayerController::SetWatchTargetPlayerState(AELSSPlayerState* inPlayerState) {
}



void AELSSPlayerController::SetRStickInputZero() {
}

void AELSSPlayerController::SetRestrictMoveOnly(bool isAllow) {
}

void AELSSPlayerController::SetRestrictCharacterControlFlag(ESSRestrictCharacterControlFlag Type, bool IsOn) {
}

void AELSSPlayerController::SetPlayerDebugFlag_Server_Implementation(ESSPlayerDebugFlag Type, bool IsOn) {
}

void AELSSPlayerController::SetPlayerDataToSync() {
}

void AELSSPlayerController::SetOperationalWidhgetManager(AELMenuOperationalWidgetManagerBase* InOperationalWidgetManager) {
}

void AELSSPlayerController::SetMouseControlMode(ESSMouseControlMode inMode) {
}


void AELSSPlayerController::SetMinimapMode(bool inIsWholeMap) {
}

void AELSSPlayerController::SetGameStateDebugFlag_Server_Implementation(ESSGameStateDebugFlag Type, bool IsOn) {
}

void AELSSPlayerController::SetGameplayCameraTarget(APawn* InPawn) {
}

void AELSSPlayerController::SetDefaultViewTarget(float InBlendTime) {
}

void AELSSPlayerController::SetAnyInputButtonCheck(const bool IsEnable) {
}

void AELSSPlayerController::SetAllowCharacterControll(bool isAllow) {
}

void AELSSPlayerController::ResultMenuPrepare_RPC_Implementation() {
}

void AELSSPlayerController::RequestLeaveGame_Client_Implementation() {
}

void AELSSPlayerController::RequestLeaveFromWatchTeam_Server_Implementation() {
}

bool AELSSPlayerController::RequestLeaveFromWatchTeam() {
    return false;
}

void AELSSPlayerController::RequestFixIncompleteTeamResult_Server_Implementation() {
}

void AELSSPlayerController::RequestEndGameFlow_Client_Implementation(ESSEndGameReason inEndReason) {
}


void AELSSPlayerController::RequestAfterGamePlayFlow_Client_Implementation() {
}

void AELSSPlayerController::RegisterEndGameReason(ESSEndGameReason inEndReason) {
}

void AELSSPlayerController::RefreshNearPlayerStatus(AELSSPlayer* inPlayer) {
}

void AELSSPlayerController::PrintLog(const FString& Log) {
}

void AELSSPlayerController::PlayCameraShake(ESSCameraShakeType InType, float inScale) {
}


bool AELSSPlayerController::OpenPauseMenu(bool disallowedCharacterControllWhenOpen) {
    return false;
}

void AELSSPlayerController::OnReservedReturnToMainMenuByNetworkError() {
}


void AELSSPlayerController::OnPrepareVictoryCutscene() {
}




void AELSSPlayerController::OnPlayerKo_Implementation(AELSSPlayerState* inKoPlayer, AELSSPlayerState* inKillerPlayer, ESSLogIconType inLogIcon) {
}






void AELSSPlayerController::OnPlayerDead_Implementation(AELSSPlayerState* inDeadPlayer, AELSSPlayerState* inKillerPlayer, ESSLogIconType inLogIcon) {
}





















void AELSSPlayerController::OnOtherPlayerHpUpdate(AELSSPlayer* inPlayer) {
}






void AELSSPlayerController::OnChangeClientFlowState_Server_Implementation(ESSClientFlowState inClientState, int32 inSyncId) {
}

void AELSSPlayerController::OnAntiCheatClientViolated(EEOSAntiCheatClientViolationType ViolationType, const FString& StatusMessage) {
}

void AELSSPlayerController::NotifyEndGameFromClient_Server_Implementation(ESSEndGameReason inEndGameReason) {
}

void AELSSPlayerController::NotifyDetectedCheat_ClientToServer_Implementation(int32 inViolationType) {
}

bool AELSSPlayerController::NeedsTransitionToWatchGame() const {
    return false;
}

bool AELSSPlayerController::NeedsShowPlayerStatus(AELSSPlayer* inPlayer) const {
    return false;
}

bool AELSSPlayerController::NeedsShowOnlineID(AELSSPlayer* inPlayer) const {
    return false;
}

bool AELSSPlayerController::NeedsShowInteractableObjectStatus(AActor* InActor) const {
    return false;
}






bool AELSSPlayerController::IsViewTargetGameplayCamera() const {
    return false;
}

bool AELSSPlayerController::IsRegisteredEndGameReasonOnServer() const {
    return false;
}

bool AELSSPlayerController::IsOpenErrorDialog() const {
    return false;
}

bool AELSSPlayerController::IsEnabledInputByThisController() const {
    return false;
}

bool AELSSPlayerController::IsDoneSyncResult() const {
    return false;
}

bool AELSSPlayerController::IsDoneResultAPI() const {
    return false;
}

bool AELSSPlayerController::IsClientFlowStateCategory(ESSClientFlowStateCategory inCategory) const {
    return false;
}

bool AELSSPlayerController::IsClientFlowState(ESSClientFlowState inClientState) const {
    return false;
}

bool AELSSPlayerController::IsChildPlayerController() const {
    return false;
}

void AELSSPlayerController::HideRespawnCountdown() {
}

bool AELSSPlayerController::HasRestrictCharacterControlFlag(ESSRestrictCharacterControlFlag Type) const {
    return false;
}

bool AELSSPlayerController::HasAnyRestrictCharacterControlFlag() const {
    return false;
}

AELSSPlayer* AELSSPlayerController::GetWatchTargetPlayer() {
    return NULL;
}


AELSSStationalCamera* AELSSPlayerController::GetStationalCamera() const {
    return NULL;
}

FVector2D AELSSPlayerController::GetRightStickInput() const {
    return FVector2D{};
}


AELSSPlayerController* AELSSPlayerController::GetParentSSPlayerController() const {
    return NULL;
}

bool AELSSPlayerController::GetNearPlayerHpRatio(AELSSPlayer* inPlayer, float& outHpRatio, float& outKoHpRatio, float& outShieldDurabilityRatio) const {
    return false;
}

FVector AELSSPlayerController::GetMoveInput() const {
    return FVector{};
}

FVector2D AELSSPlayerController::GetMouseMoveInput() const {
    return FVector2D{};
}

FVector2D AELSSPlayerController::GetLeftStickInput() const {
    return FVector2D{};
}

FVector2D AELSSPlayerController::GetLastRightStickInput() const {
    return FVector2D{};
}

FVector2D AELSSPlayerController::GetLastMouseMoveInput() const {
    return FVector2D{};
}

FVector2D AELSSPlayerController::GetLastLeftStickInput() const {
    return FVector2D{};
}

APawn* AELSSPlayerController::GetGameplayCameraTarget() const {
    return NULL;
}

AELSSGameplayCamera* AELSSPlayerController::GetGameplayCamera() const {
    return NULL;
}

ESSEndGameReason AELSSPlayerController::GetEndGameReasonOnServer() const {
    return ESSEndGameReason::None;
}

UELLocalPlayer* AELSSPlayerController::GetELLocalPlayer() {
    return NULL;
}

FRotator AELSSPlayerController::GetCameraRotation() const {
    return FRotator{};
}

FVector AELSSPlayerController::GetCameraLocation() const {
    return FVector{};
}

AELSSPlayer* AELSSPlayerController::GetAssociatedSSPlayer() const {
    return NULL;
}




void AELSSPlayerController::ExitClientFlowState_WatchTeam_Native() {
}


void AELSSPlayerController::ExitClientFlowState_WatchGame_Native() {
}









void AELSSPlayerController::ExitClientFlowState_Dialog_Native() {
}







void AELSSPlayerController::EnterClientFlowState_WatchTeam_Native() {
}


void AELSSPlayerController::EnterClientFlowState_WatchGame_Native() {
}









void AELSSPlayerController::EnterClientFlowState_Dialog_Native() {
}




void AELSSPlayerController::EndViewControlledPawn() {
}





void AELSSPlayerController::DebugVehicleSetDurability_Implementation(float Ratio, bool isAll) {
}

void AELSSPlayerController::DebugVehicleResetRotation_Implementation(bool isAll) {
}

void AELSSPlayerController::DebugVehicleInvincible_Implementation(bool IsOn, bool isAll) {
}

void AELSSPlayerController::DebugVehicleFullDurability_Implementation(bool isAll) {
}

void AELSSPlayerController::DebugSpawnWeapon_Implementation(int32 ID, int32 Amount) {
}

void AELSSPlayerController::DebugSpawnVehicle_Implementation(int32 ID, float offsetDistance, float offsetZ, float offsetRoll) {
}

void AELSSPlayerController::DebugSpawnShield_Implementation(int32 ID, int32 Amount) {
}

void AELSSPlayerController::DebugSpawnItemBox_Implementation(int32 inItemBoxType, int32 inSpawnNum) {
}

void AELSSPlayerController::DebugSpawnItem_Implementation(int32 ID, int32 Amount) {
}

void AELSSPlayerController::DebugSpawnAndEquipWeapon_Implementation(int32 ID) {
}

void AELSSPlayerController::DebugSetPlayerEquipSettings_Implementation(const FSSPlayerEquipSettings& InParam, EWrestlerID_N inWrestlerId, bool inDuplicate) {
}

void AELSSPlayerController::DebugSetHeatLevel_Implementation(int32 inHeatLevel) {
}

void AELSSPlayerController::DebugSetAttentionPoint_Implementation(int32 inAttentionPoint) {
}

void AELSSPlayerController::DebugServerMemReport_Implementation(bool full) {
}

void AELSSPlayerController::DebugServerCrashRequest_Implementation() {
}

void AELSSPlayerController::DebugRoundSpeed_Implementation(float Speed) {
}

void AELSSPlayerController::DebugResetAttention_Implementation() {
}

void AELSSPlayerController::DebugNotifyChangePlayer_Client_Implementation() {
}

void AELSSPlayerController::DebugNoResponseMode_Implementation(bool IsOn) {
}

void AELSSPlayerController::DebugNetworkProfilerOnServer_Implementation(bool IsOn) {
}

void AELSSPlayerController::DebugMoveFrictionScale_Implementation(float Scale) {
}

void AELSSPlayerController::DebugMoveFrictionDuration_Implementation(float Duration) {
}

void AELSSPlayerController::DebugLobbySkip_Implementation() {
}

void AELSSPlayerController::DebugForciblyEndMatch_Implementation() {
}

void AELSSPlayerController::DebugForceRespawnNearTeamMember_Implementation() {
}

void AELSSPlayerController::DebugForceRespawn_Implementation() {
}

void AELSSPlayerController::DebugForceFeverOffense_Implementation(bool Enable) {
}

void AELSSPlayerController::DebugForceFeverDefense_Implementation(bool Enable) {
}

void AELSSPlayerController::DebugFgfBallOwnerSpeedScale_Implementation(float Scale) {
}

void AELSSPlayerController::DebugDuplicateSSPlayer_Implementation(bool inPossessPlayer, bool inBaseKill) {
}

void AELSSPlayerController::DebugDestroyTeamMembers_Implementation(bool excludeMyself) {
}

void AELSSPlayerController::DebugDestroyExceptTeamMembers_Implementation(int32 inExceptTeamId) {
}

void AELSSPlayerController::DebugDestroyAllPickupObjects_Implementation() {
}

void AELSSPlayerController::DebugAIPlayerSpawnPresetByName_Implementation(const FString& InName) {
}

void AELSSPlayerController::DebugAIPlayerSpawnPreset_Implementation(int32 InFaceID, int32 InBodyID, int32 InHairID, int32 InBottomsID, int32 InShoesID, int32 InSuitID, bool InRandom) {
}

void AELSSPlayerController::DebugAIPlayerSpawn_Implementation(EWrestlerID_N WrestlerID) {
}

void AELSSPlayerController::DebugAIPlayerNoDamage_Implementation(bool IsOn) {
}

void AELSSPlayerController::DebugAIPlayerDisableAll_Implementation(bool IsOn) {
}

void AELSSPlayerController::DebugAIPlayerAutoRequestTransit_Implementation(ESSActionTransitTrigger Trigger, float intervalTime, bool autoJump) {
}

void AELSSPlayerController::DebugAIPlayerAutoMove_Implementation(bool IsOn, float Yaw, float RotateSpeed) {
}

void AELSSPlayerController::DebugAIPlayerAutoKill_Implementation(bool IsOn) {
}

void AELSSPlayerController::DebugAddAttentionPoint_Implementation(ESSAttentionReason inReason, int32 inAddPoint) {
}

void AELSSPlayerController::DeactiveStationalCamera() {
}

FVector AELSSPlayerController::ConvertLeftStickToMoveInput(const FVector2D& inStickInput) const {
    return FVector{};
}


bool AELSSPlayerController::ClosePauseMenu(bool allowedCharacterControllWhenClose) {
    return false;
}

void AELSSPlayerController::ClearWatchGameHold() {
}

bool AELSSPlayerController::CheckInSightFromCameraForInteract(AActor* inCheckActor) const {
    return false;
}

bool AELSSPlayerController::CheckInSightFromCamera(AActor* inCheckActor, float inTargetOffsetZ) const {
    return false;
}

bool AELSSPlayerController::CheckCompletePlayerSetup() const {
    return false;
}

bool AELSSPlayerController::CheckAllowCharacterControll() const {
    return false;
}

void AELSSPlayerController::ChangeClientFlowState(ESSClientFlowState inClientState) {
}

void AELSSPlayerController::BeginViewControlledPawn() {
}




