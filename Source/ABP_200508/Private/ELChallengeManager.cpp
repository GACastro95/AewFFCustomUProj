#include "ELChallengeManager.h"

void UELChallengeManager::StopChallengeRecordMonitor() {
}

void UELChallengeManager::StartChallengeRecordMonitor() {
}

void UELChallengeManager::SetupChallengeParamDataTable(TSoftObjectPtr<UDataTable> _achievementParamDT) {
}

void UELChallengeManager::SetBlockPopupFlag(bool Flag) {
}

void UELChallengeManager::RestartChallengeRecordMonitor() {
}

void UELChallengeManager::OnUpdateBattlePassPoint(bool _Successed) {
}

bool UELChallengeManager::IsIncludedUnavailableDlcWrestler(EWrestlerID_N TargetID) const {
    return false;
}

bool UELChallengeManager::IsChangedWeeklyChallenges() const {
    return false;
}

bool UELChallengeManager::IsChangedDailyChallenges() const {
    return false;
}

FTimespan UELChallengeManager::GetRemainingTime(EChallengePeriodType _targetPeriodType) {
    return FTimespan{};
}

TArray<FChallengeCompleteState> UELChallengeManager::GetProgressStateList(EChallengePeriodType _targetType, bool _targetNotCompleteState) {
    return TArray<FChallengeCompleteState>();
}

void UELChallengeManager::GetProgressDetailInfoFromID(TArray<int32> _targetIdList, EChallengePeriodType _periodType, TArray<FChallengeProgressDetailInfo>& _outResult) {
}

int32 UELChallengeManager::GetPlayedMatchCountNumFromDailyChallenge(UObject* _pWorldContextObject) {
    return 0;
}

bool UELChallengeManager::GetChangedChallengeInfo(TArray<FChallengeProgressDetailInfo>& _outResultList) {
    return false;
}

void UELChallengeManager::GetChallengeParameterFromId(TArray<FChallengeAchievementParameter>& OutResult, TArray<int32> _targetIdList) {
}

bool UELChallengeManager::GetBlockPopupFlag() const {
    return false;
}

void UELChallengeManager::DisposeSaveData() {
}

void UELChallengeManager::Debug_ForceChangingChallengeList(bool _bDaily, bool _bWeekly) {
}

void UELChallengeManager::CreatePlayerData() {
}

void UELChallengeManager::ConfirmedChangeWeeklyChallenges() {
}

void UELChallengeManager::ConfirmedChangeDailyChallenges() {
}

void UELChallengeManager::CheckChallengeExpirationDate() {
}

void UELChallengeManager::AcquiredChallengeReward(UObject* _pWorldContextObject, int32 _targetId) {
}

UELChallengeManager::UELChallengeManager() {
    this->m_ChallengeRecordDataList.AddDefaulted(3);
    this->m_pPlayerData = NULL;
}

