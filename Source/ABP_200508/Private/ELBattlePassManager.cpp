#include "ELBattlePassManager.h"

void UELBattlePassManager::UpdatePossessedPremiumPass(bool _state) {
}

void UELBattlePassManager::UpdateEarnedRewardState(bool _state) {
}

void UELBattlePassManager::UpdateBattlePassPoint(int32 _addPoint, FUpdatedBattlePassPointDelegate OnUpdatedDelegate, EUpdateBattlePassPointType _updateType) {
}

void UELBattlePassManager::SetupBattlePassDataTable(TSoftObjectPtr<UDataTable> _rewardItemDT, TSoftObjectPtr<UDataTable> _levelProgressDT) {
}

void UELBattlePassManager::SetAddPointBoostRate(float _rate) {
}

void UELBattlePassManager::RequestUpdateOnlineMatchResult(EBattlePassRankMatchType _MatchType, int32 _addWinCount, FUpdatedBattlePassRankMatchRecordDelegate _updateDelegate) {
}

void UELBattlePassManager::OnYGS2Response_RankMatchRecord(EYGS2ErrorType _errorType, UYGS2RequestBase* _requestBaseInstance) {
}

void UELBattlePassManager::OnYGS2Response_PersonalData(EYGS2ErrorType _errorType, UYGS2RequestBase* _requestBaseInstance) {
}

void UELBattlePassManager::OnUploadGoldCoin(bool Successed) {
}

void UELBattlePassManager::OnUnlockableItemPurchased(bool Successed) {
}

void UELBattlePassManager::OnDownloadGoldCoin(bool Successed, int32 GoldCoinNum) {
}

bool UELBattlePassManager::IsRegistedUnlockableItem(int32 _checkItemID) {
    return false;
}

bool UELBattlePassManager::IsPossessedPremiumPass() const {
    return false;
}

TArray<FBattlePassRewardItemParam> UELBattlePassManager::GetRewardItemParamList() const {
    return TArray<FBattlePassRewardItemParam>();
}

void UELBattlePassManager::GetRewardItemParamFromLevel(int32 _targetLevel, TArray<FBattlePassRewardItemParam>& _resultList, bool& _findParam) {
}

FBattlePassPersonalData UELBattlePassManager::GetPersonalData() {
    return FBattlePassPersonalData{};
}

float UELBattlePassManager::GetNextBattlePassLevelRateFromTotalPoint(int32 _totalPoint) {
    return 0.0f;
}

float UELBattlePassManager::GetNextBattePassLevelRate() {
    return 0.0f;
}

bool UELBattlePassManager::GetEarnedRewardState() const {
    return false;
}

int32 UELBattlePassManager::GetCurrentBattlePassLevel() {
    return 0;
}

int32 UELBattlePassManager::GetBattlePassMaxLevel() {
    return 0;
}

int32 UELBattlePassManager::GetBattlePassLevel(int32 _totalPoints) {
    return 0;
}

float UELBattlePassManager::GetAddPointBoostRate() const {
    return 0.0f;
}

int32 UELBattlePassManager::GetAccumulationBattlePassPoint(int32 _targetLevel) {
    return 0;
}

void UELBattlePassManager::EarnRewardsUpToSpecifiedLevel(int32 _targetFreePassLv, int32 _targetPremiumPassLv, FCompletedEarnRewardsUpDelegate OnCompleteDelegate) {
}

void UELBattlePassManager::CheckValidSeason(FCheckedValidSeasonDelegate OnResultDelegate) {
}

void UELBattlePassManager::CheckValidPersonalData(FCheckedValidPersonalDataDelegate OnResultDelegate) {
}

UELBattlePassManager::UELBattlePassManager() {
}

