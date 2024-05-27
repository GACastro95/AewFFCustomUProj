#include "ELSSPanelInGameBase.h"

UELSSPanelInGameBase::UELSSPanelInGameBase() {
    this->AbilityContainer = NULL;
    this->CharacterHpgaugeContainer = NULL;
    this->MemberIconContainer = NULL;
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
    this->JewelList = NULL;
    this->JewelRadar = NULL;
    this->GuideIconContainer = NULL;
    this->RespawnCount = NULL;
    this->FGFScoreboard = NULL;
}


void UELSSPanelInGameBase::UpdateKeyConfig() {
}

void UELSSPanelInGameBase::UpdateAlly(float DeltaTime) {
}

void UELSSPanelInGameBase::SwitchWrestlerHpType(bool InIsDownHpGaugeShow) {
}

void UELSSPanelInGameBase::SwitchOtherWrestlerHpType(bool InIsDownHpGaugeShow, int32 InIndex) {
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

void UELSSPanelInGameBase::SetVisibleRespawnCountTime(bool InPlayIn) {
}

void UELSSPanelInGameBase::SetVisibleOtherWrestlerStats(int32 InIndex, bool inIsVisible) {
}

void UELSSPanelInGameBase::SetVisibleOtherWrestlerAllStats(bool inIsVisible) {
}

void UELSSPanelInGameBase::SetVisibleOffenceInfo(bool InOwnSide, bool inIsVisible) {
}

void UELSSPanelInGameBase::SetVisibleGuideIconMatchIcon(bool inIsVisible) {
}

void UELSSPanelInGameBase::SetVisibleFeverEffect(bool inIsVisible, bool InPlayStartSE, bool InPlayEndSE) {
}

void UELSSPanelInGameBase::SetVisibleDefenceBoostText(bool InOwnSide, bool inIsVisible) {
}

void UELSSPanelInGameBase::SetVisibleBeatTopTeamNotice() {
}

void UELSSPanelInGameBase::SetVisibleAllyIconContainer(bool inIsVisible) {
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



void UELSSPanelInGameBase::SetSessionIndex(int32 InSessionIndex) {
}

void UELSSPanelInGameBase::SetOtherWrestlerVC(const FString& InProductUserID, int32 InIndex) {
}

void UELSSPanelInGameBase::SetOtherWrestlerSessionIndex(int32 InSessionIndex, int32 InIndex) {
}

void UELSSPanelInGameBase::SetOtherWrestlerGamerTag(const FString& InGamerTagText, int32 InIndex) {
}

void UELSSPanelInGameBase::SetOperationGuideVisibleInPause(bool InVisible) {
}

void UELSSPanelInGameBase::SetOperationGuideGuardState(bool InGuardState) {
}

void UELSSPanelInGameBase::SetMyWrestlerVC(const FString& InProductUserID) {
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

void UELSSPanelInGameBase::ResetAllyIcon() {
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

void UELSSPanelInGameBase::OnChangeActive_GuideIcon(bool IsActive) {
}


void UELSSPanelInGameBase::DeleteInventoryIcon(int32 InIndex) {
}



void UELSSPanelInGameBase::CancelSpectateWindowHold() {
}

void UELSSPanelInGameBase::ApplyWrestlerMatchIcon(bool inIsVisible, ESSMatchIconType InIconType) {
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

void UELSSPanelInGameBase::ApplyRespawnCountTime(float InSecond) {
}

void UELSSPanelInGameBase::ApplyRatioToInteractUI(float InRatio) {
}

void UELSSPanelInGameBase::ApplyRadarLevel(int32 inLevel) {
}

void UELSSPanelInGameBase::ApplyOtherWrestlrStatusMatchIcon(bool inIsVisible, ESSMatchIconType InIconType, int32 InIndex) {
}

void UELSSPanelInGameBase::ApplyOtherWrestlerHp(int32 InWrestlerHp, int32 inMaxHP, bool InGaugeTransition, int32 InIndex) {
}

void UELSSPanelInGameBase::ApplyOtherWrestlerHeatMeater(int32 inHeatLevel, float InExpRatio, bool InGaugeTransition, int32 InIndex) {
}

void UELSSPanelInGameBase::ApplyOtherWrestlerHasCarrotMedal(bool inIsVisible, int32 InIndex) {
}

void UELSSPanelInGameBase::ApplyOtherWrestlerDownHp(int32 InWrestlerDownHp, int32 InMaxWrestlerDownHp, bool InGaugeTransition, int32 InIndex) {
}

void UELSSPanelInGameBase::ApplyOtherShieldDurableValue(int32 InShieldDurableValue, int32 InMaxShieldDurableValue, bool InGaugeTransition, int32 InIndex) {
}

void UELSSPanelInGameBase::ApplyOnlineID(AActor* inTargetActor, const FString& InOnlineID, bool inIsVisible, bool InHasCarrot, ESSMatchIconType InIconType) {
}

void UELSSPanelInGameBase::ApplyMatchTimeCountDown(float InSecond) {
}

void UELSSPanelInGameBase::ApplyKOCount(int32 InCount) {
}

void UELSSPanelInGameBase::ApplyJewelRankData(int32 InRank, int32 InJewelNum, int32 InMaxJewelNum, bool InSelfData, int32 InSlot, bool InPlayChangeRankAnim) {
}

void UELSSPanelInGameBase::ApplyInventoryIcon(int32 InIndex, ESSPickupType InPickuptype, int32 InItemId, int32 InDurableValue) {
}

void UELSSPanelInGameBase::ApplyInventoryBareIconGuideState() {
}

void UELSSPanelInGameBase::ApplyInventoryBareIconFGFState(bool InIsDefault, int32 InBallLevel) {
}

void UELSSPanelInGameBase::ApplyInteractPoint(AActor* inTargetActor, bool inIsVisible) {
}

void UELSSPanelInGameBase::ApplyHUDWatchGameMode() {
}

void UELSSPanelInGameBase::ApplyHeatMeater(int32 inHeatLevel, float InExpRatio, bool InGaugeTransition) {
}

void UELSSPanelInGameBase::ApplyHasCarrotMedal(bool inIsVisible) {
}

void UELSSPanelInGameBase::ApplyGuideIcon(AActor* InActor, ESSGuideIconType InIconType, bool inIsVisible) {
}

void UELSSPanelInGameBase::ApplyFGFTeamIcon(ESSFGFIconType InIconType, bool InOwnSide) {
}

void UELSSPanelInGameBase::ApplyFGFScore(int32 InOwnScore, int32 InOppositeScore) {
}

void UELSSPanelInGameBase::ApplyFGFRoundTime(float InSecond) {
}

void UELSSPanelInGameBase::ApplyFGFRound(int32 InRound) {
}

void UELSSPanelInGameBase::ApplyFGFBallLevel(int32 inLevel, int32 inBallLevelPoint, int32 InMaxBallLevelPoint, bool InOwnSide) {
}

void UELSSPanelInGameBase::ApplyCharacterHpGauge(AActor* inTargetActor, int32 InNowHp, int32 InIdealHp, int32 inMaxHP, ESSCharacterHpType InType, bool& Out) {
}

void UELSSPanelInGameBase::ApplyAttentionGauge(int32 InAttentionValue, int32 InAddValue, ESSAttentionReason InActType, bool InGaugeTransition) {
}

void UELSSPanelInGameBase::ApplyAttentionBoostValue(float InAttentionBoostValue) {
}

void UELSSPanelInGameBase::ApplyAnnouncePlate(bool inIsVisible, float InSecond, ESSAreaCountDownTextType InTextType) {
}

void UELSSPanelInGameBase::ApplyAllyIcon(AActor* InActor, int32 InPlayerIndex, bool inIsVisible) {
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


