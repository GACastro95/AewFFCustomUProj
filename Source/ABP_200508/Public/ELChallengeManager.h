#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "EWrestlerID_N.h"
#include "ChallengeAchievementParameter.h"
#include "ChallengeCompleteState.h"
#include "ChallengeProgressDetailInfo.h"
#include "ChallengeProgressSaveData.h"
#include "ChallengeRecordSaveData.h"
#include "ChangedChallengeListDelegate.h"
#include "EChallengePeriodType.h"
#include "OnlyNormalChallengeRecordSaveData.h"
#include "ELChallengeManager.generated.h"

class UDataTable;
class USaveDataObject_PlayerData;

UCLASS(Blueprintable)
class ABP_200508_API UELChallengeManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangedChallengeList ChangedChallengeListDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FChallengeAchievementParameter> m_ChallengeAchievementParamMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChallengeProgressDetailInfo> m_ChallengePogressChangedInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChallengeRecordSaveData> m_ChallengeRecordDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnlyNormalChallengeRecordSaveData m_OnlyNormalChallengeRecordData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChallengeProgressSaveData m_ChallengeProgressData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<EWrestlerID_N> UnavailableDlcWrestlerIdSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USaveDataObject_PlayerData* m_pPlayerData;
    
public:
    UELChallengeManager();
    UFUNCTION(BlueprintCallable)
    void StopChallengeRecordMonitor();
    
    UFUNCTION(BlueprintCallable)
    void StartChallengeRecordMonitor();
    
    UFUNCTION(BlueprintCallable)
    void SetupChallengeParamDataTable(TSoftObjectPtr<UDataTable> _achievementParamDT);
    
    UFUNCTION(BlueprintCallable)
    void SetBlockPopupFlag(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void RestartChallengeRecordMonitor();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateBattlePassPoint(bool _Successed);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIncludedUnavailableDlcWrestler(EWrestlerID_N TargetID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChangedWeeklyChallenges() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChangedDailyChallenges() const;
    
    UFUNCTION(BlueprintCallable)
    FTimespan GetRemainingTime(EChallengePeriodType _targetPeriodType);
    
    UFUNCTION(BlueprintCallable)
    TArray<FChallengeCompleteState> GetProgressStateList(EChallengePeriodType _targetType, bool _targetNotCompleteState);
    
    UFUNCTION(BlueprintCallable)
    void GetProgressDetailInfoFromID(TArray<int32> _targetIdList, EChallengePeriodType _periodType, TArray<FChallengeProgressDetailInfo>& _outResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    int32 GetPlayedMatchCountNumFromDailyChallenge(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    bool GetChangedChallengeInfo(TArray<FChallengeProgressDetailInfo>& _outResultList);
    
    UFUNCTION(BlueprintCallable)
    void GetChallengeParameterFromId(TArray<FChallengeAchievementParameter>& OutResult, TArray<int32> _targetIdList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBlockPopupFlag() const;
    
    UFUNCTION(BlueprintCallable)
    void DisposeSaveData();
    
    UFUNCTION(BlueprintCallable)
    void Debug_ForceChangingChallengeList(bool _bDaily, bool _bWeekly);
    
    UFUNCTION(BlueprintCallable)
    void CreatePlayerData();
    
    UFUNCTION(BlueprintCallable)
    void ConfirmedChangeWeeklyChallenges();
    
    UFUNCTION(BlueprintCallable)
    void ConfirmedChangeDailyChallenges();
    
    UFUNCTION(BlueprintCallable)
    void CheckChallengeExpirationDate();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    void AcquiredChallengeReward(UObject* _pWorldContextObject, int32 _targetId);
    
};

