#include "ELSSPanelInGameBase.h"


void UELSSPanelInGameBase::UpdateKeyConfig() {
}

void UELSSPanelInGameBase::SwitchWrestlerHpType(bool InIsDownHpGaugeShow) {
}

void UELSSPanelInGameBase::SwitchMapMode(bool InIsWholeMapMode) {
}

void UELSSPanelInGameBase::ShowOffVehicleStatus() {
}

void UELSSPanelInGameBase::SetVisibleToSpectateWindow(bool inIsVisible) {
}

void UELSSPanelInGameBase::SetVisibleToOperationGuide(ESSOperationGuideExecute InType) {
}

void UELSSPanelInGameBase::SetVisibleToItemInteractUI(ESSInteractOperate InInteractOperate, ESSInteractExecute InType, int32 InPickupID, int32 InPickupDurability) {
}

void UELSSPanelInGameBase::SetVisibleToInteractUI(ESSInteractExecute InType) {
}

void UELSSPanelInGameBase::SetVisibleFeverEffect(bool inIsVisible, bool InPlayStartSE, bool InPlayEndSE) {
}


void UELSSPanelInGameBase::SetVisibleAbilitySlot(int32 inSlotIndex, bool InVisible) {
}

void UELSSPanelInGameBase::SetupAbilityUI(const TArray<FSSAbilityParam>& inAbilityList) {
}

void UELSSPanelInGameBase::SetTargetActorToInteractUI(AActor* inTargetActor, const FVector& InOffset) {
}

void UELSSPanelInGameBase::SetStormActor(AELSSStorm* InStormActor) {
}

void UELSSPanelInGameBase::SetSpectateWindowHoldRatio(float InRatio) {
}

void UELSSPanelInGameBase::SetSpectatedInfo(AELSSPlayerState* inPlayerState) {
}

void UELSSPanelInGameBase::SetOperationGuideVisibleInPause(bool InVisible) {
}

void UELSSPanelInGameBase::SetOperationGuideGuardState(bool InGuardState) {
}

void UELSSPanelInGameBase::SetMinimapTexture(int32 InMinimapID) {
}

void UELSSPanelInGameBase::SetMapOperationButtonVisibleInPause(bool InVisible) {
}

void UELSSPanelInGameBase::SetMapAnnounceStormAndGuideVisible(bool InVisible) {
}

void UELSSPanelInGameBase::SetInventoryVisible(bool InFlag) {
}

void UELSSPanelInGameBase::SetInventoryPosition(int32 InIndex) {
}

void UELSSPanelInGameBase::SetInventoryOperationButtonVisibleInPause(bool InVisible) {
}

void UELSSPanelInGameBase::SetInventoryLimit(bool InFlag) {
}

void UELSSPanelInGameBase::SetInventoryItem(ESSInteractOperate InInteractOperate, ESSInteractExecute InType, int32 InInventoryItemID, int32 InInventoryItemDurability) {
}

void UELSSPanelInGameBase::SetInventoryIconValue(int32 InIndex, int32 InDurableValue) {
}

void UELSSPanelInGameBase::SetGamerTag(const FString& InGamerTagText) {
}

void UELSSPanelInGameBase::SetAndApplyMaxAttentionValue(int32 InMaxAttentionValue) {
}

void UELSSPanelInGameBase::SetActorUICanShow(bool InCanShow) {
}

void UELSSPanelInGameBase::SetAbilityVisible(bool inIsVisible) {
}

void UELSSPanelInGameBase::SetAbilityHoldButtonVisible(bool inIsVisible) {
}

void UELSSPanelInGameBase::SetAbilityGuideVisible(bool inIsVisible) {
}

void UELSSPanelInGameBase::ResetSSSkillNotice() {
}

void UELSSPanelInGameBase::ResetAttentionGauge() {
}

void UELSSPanelInGameBase::ResetAllLogs() {
}

void UELSSPanelInGameBase::ResetAllAbilities() {
}

void UELSSPanelInGameBase::PlaySSSkillNotice(const FString& InSkillCategory, int32 HeatSkillId) {
}



void UELSSPanelInGameBase::OnPushQuitMatch() {
}

void UELSSPanelInGameBase::OnChangeSpectateUser(bool InIsNextUser) {
}


void UELSSPanelInGameBase::DeleteInventoryIcon(int32 InIndex) {
}



void UELSSPanelInGameBase::CancelSpectateWindowHold() {
}

void UELSSPanelInGameBase::ApplyWrestlerHp(int32 InWrestlerHp, int32 inMaxHP, bool InGaugeTransition) {
}

void UELSSPanelInGameBase::ApplyWrestlerDownHp(int32 InWrestlerDownHp, int32 InMaxWrestlerDownHp, bool InGaugeTransition) {
}

void UELSSPanelInGameBase::ApplyVehicleStatusDurability(int32 InVehicleDurability, int32 InMaxDurability, bool InGaugeTransition, ESSVehicleType InVehicleType) {
}

void UELSSPanelInGameBase::ApplyStormTime(float InSecond) {
}

void UELSSPanelInGameBase::ApplySpectators(int32 InSpectatorsNum) {
}

void UELSSPanelInGameBase::ApplyShieldDurableValue(int32 InShieldDurableValue, int32 InMaxShieldDurableValue, bool InGaugeTransition) {
}

void UELSSPanelInGameBase::ApplyRatioToInteractUI(float InRatio) {
}

void UELSSPanelInGameBase::ApplyOnlineID(AActor* inTargetActor, const FString& InOnlineID, bool inIsVisible, bool InHasCarrot) {
}

void UELSSPanelInGameBase::ApplyKOCount(int32 InCount) {
}

void UELSSPanelInGameBase::ApplyInventoryIcon(int32 InIndex, ESSPickupType InPickuptype, int32 InItemId, int32 InDurableValue) {
}

void UELSSPanelInGameBase::ApplyInventoryBareIconGuideState() {
}

void UELSSPanelInGameBase::ApplyInteractPoint(AActor* inTargetActor, bool inIsVisible) {
}

void UELSSPanelInGameBase::ApplyHUDWatchGameMode() {
}

void UELSSPanelInGameBase::ApplyHeatMeater(int32 inHeatLevel, float InExpRatio, bool InGaugeTransition) {
}

void UELSSPanelInGameBase::ApplyHasCarrotMedal(bool inIsVisible) {
}

void UELSSPanelInGameBase::ApplyCharacterHpGauge(AActor* inTargetActor, int32 InNowHp, int32 InIdealHp, int32 inMaxHP, ESSCharacterHpType InType, bool& Out) {
}

void UELSSPanelInGameBase::ApplyAttentionGauge(int32 InAttentionValue, int32 InAddValue, ESSAttentionReason InActType, bool InGaugeTransition) {
}

void UELSSPanelInGameBase::ApplyAttentionBoostValue(float InAttentionBoostValue) {
}

void UELSSPanelInGameBase::ApplyAnnouncePlate(bool inIsVisible, float InSecond, ESSAreaCountDownTextType InTextType) {
}

void UELSSPanelInGameBase::ApplyAliveCount(int32 InCount) {
}

void UELSSPanelInGameBase::ApplyAbilityEffectiveGauge(int32 inSlotIndex, float inRemainTime, float inDurationTime) {
}

void UELSSPanelInGameBase::ApplyAbilityCoolTimeGauge(int32 inSlotIndex, float inRemainTime, float inDurationTime) {
}

void UELSSPanelInGameBase::AddMultiColorLogMessage(const TArray<FSSLogTextParam>& inTextParam, ESSLogIconType InIconType) {
}

void UELSSPanelInGameBase::AddMessage(const FString& InNewItem, ESSLogIconType InIconType) {
}

UELSSPanelInGameBase::UELSSPanelInGameBase() {
    this->AbilityContainer = NULL;
    this->CharacterHpgaugeContainer = NULL;
    this->OnlineIDContainer = NULL;
    this->InteractPointContainer = NULL;
    this->AttentionGauge = NULL;
    this->AreaCountDown = NULL;
    this->WrestlerStatus = NULL;
    this->HeatMeater = NULL;
    this->MiniMap = NULL;
    this->Inventory = NULL;
    this->OperationGuide = NULL;
    this->LogSet = NULL;
    this->Interact = NULL;
    this->SSSkillNotice = NULL;
    this->SpectateWindow = NULL;
    this->Spectators = NULL;
    this->VehicleStatus = NULL;
    this->PlayInAnim = NULL;
    this->PlayInAnimationElapsed = 0.00f;
    this->IsPlayingPlayInAnimation = false;
}

