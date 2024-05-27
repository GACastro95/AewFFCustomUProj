#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EYGS2ErrorType.h"
#include "BattlePassLevelProgressParam.h"
#include "BattlePassPersonalData.h"
#include "BattlePassRewardItemParam.h"
#include "CheckedValidPersonalDataDelegateDelegate.h"
#include "CheckedValidSeasonDelegateDelegate.h"
#include "CompletedEarnRewardsUpDelegateDelegate.h"
#include "EBattlePassRankMatchType.h"
#include "EUpdateBattlePassPointType.h"
#include "UpdatedBattlePassPointDelegateDelegate.h"
#include "UpdatedBattlePassRankMatchRecordDelegateDelegate.h"
#include "ELBattlePassManager.generated.h"

class UDataTable;
class UYGS2RequestBase;

UCLASS(Blueprintable)
class ABP_200508_API UELBattlePassManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBattlePassRewardItemParam> m_RewardItemParamList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBattlePassLevelProgressParam> m_LevelProgressParamList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FBattlePassRewardItemParam> m_RegistedUnlockableItemMap;
    
public:
    UELBattlePassManager();

    UFUNCTION(BlueprintCallable)
    void UpdatePossessedPremiumPass(bool _state);
    
    UFUNCTION(BlueprintCallable)
    void UpdateEarnedRewardState(bool _state);
    
    UFUNCTION(BlueprintCallable)
    void UpdateBattlePassPoint(int32 _addPoint, FUpdatedBattlePassPointDelegate OnUpdatedDelegate, EUpdateBattlePassPointType _updateType);
    
    UFUNCTION(BlueprintCallable)
    void SetupBattlePassDataTable(TSoftObjectPtr<UDataTable> _rewardItemDT, TSoftObjectPtr<UDataTable> _levelProgressDT);
    
    UFUNCTION(BlueprintCallable)
    void SetAddPointBoostRate(float _rate);
    
    UFUNCTION(BlueprintCallable)
    void RequestUpdateOnlineMatchResult(EBattlePassRankMatchType _MatchType, int32 _addWinCount, FUpdatedBattlePassRankMatchRecordDelegate _updateDelegate);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnYGS2Response_RankMatchRecord(EYGS2ErrorType _errorType, UYGS2RequestBase* _requestBaseInstance);
    
    UFUNCTION(BlueprintCallable)
    void OnYGS2Response_PersonalData(EYGS2ErrorType _errorType, UYGS2RequestBase* _requestBaseInstance);
    
    UFUNCTION(BlueprintCallable)
    void OnUploadGoldCoin(bool Successed);
    
    UFUNCTION(BlueprintCallable)
    void OnUnlockableItemPurchased(bool Successed);
    
    UFUNCTION(BlueprintCallable)
    void OnDownloadGoldCoin(bool Successed, int32 GoldCoinNum);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRegistedUnlockableItem(int32 _checkItemID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPossessedPremiumPass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FBattlePassRewardItemParam> GetRewardItemParamList() const;
    
    UFUNCTION(BlueprintCallable)
    void GetRewardItemParamFromLevel(int32 _targetLevel, TArray<FBattlePassRewardItemParam>& _resultList, bool& _findParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBattlePassPersonalData GetPersonalData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNextBattlePassLevelRateFromTotalPoint(int32 _totalPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNextBattePassLevelRate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEarnedRewardState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentBattlePassLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBattlePassMaxLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBattlePassLevel(int32 _totalPoints);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAddPointBoostRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAccumulationBattlePassPoint(int32 _targetLevel);
    
    UFUNCTION(BlueprintCallable)
    void EarnRewardsUpToSpecifiedLevel(int32 _targetFreePassLv, int32 _targetPremiumPassLv, FCompletedEarnRewardsUpDelegate OnCompleteDelegate);
    
    UFUNCTION(BlueprintCallable)
    void CheckValidSeason(FCheckedValidSeasonDelegate OnResultDelegate);
    
    UFUNCTION(BlueprintCallable)
    void CheckValidPersonalData(FCheckedValidPersonalDataDelegate OnResultDelegate);
    
};

