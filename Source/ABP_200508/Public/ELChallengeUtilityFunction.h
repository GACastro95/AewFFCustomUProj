#pragma once
#include "CoreMinimal.h"
#include "EELBelt.h"
#include "EWrestlerID_N.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EChallengeCpuDifficultyType.h"
#include "EChallengeMatchRuleType.h"
#include "ELChallengeUtilityFunction.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UELChallengeUtilityFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELChallengeUtilityFunction();

    UFUNCTION(BlueprintCallable)
    static void UpdateTwoPlatoonCntRankMatch(int32 _cnt);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateSSWrestlerKillCountInOneMatch(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateSSVendingMachineBuyCountInOneMatch(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateSSTreasureBoxInOneMatch(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateSSSlotMachinePlayCountInOneMatch(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateSSSituationMoveCountInOneMatch(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateSSHighestReachPlayerRank(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateSSFinisherSuccessCountInOneMatch(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateSSFeverCountInOneMatch(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateSSExpItemInOneMatch(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateSSEpicWeaponHitInOneMatch(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateSSAbilityUseCountInOneMatch(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateOnlineRanking(int32 _rankingVale);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateOnlineRank(int32 _rankValue);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateMiniGameHighScore(int32 _minigameIndex, int32 _Score);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateMatchResultRank(float _rankValue);
    
    UFUNCTION(BlueprintCallable)
    static void DisposeSaveData();
    
    UFUNCTION(BlueprintCallable)
    static void CreatePlayerData();
    
    UFUNCTION(BlueprintCallable)
    static void AddWinTheChampionTitle(EWrestlerID_N _usedWrestler, EELBelt _beltType);
    
    UFUNCTION(BlueprintCallable)
    static void AddWatchingGamesCount();
    
    UFUNCTION(BlueprintCallable)
    static void AddUnlockedWrestler(int32 _Count);
    
    UFUNCTION(BlueprintCallable)
    static void AddThrewOpponentWhoCamebackFromRope();
    
    UFUNCTION(BlueprintCallable)
    static void AddStadiumStampedeModeVictoryRoyalCount(int32 Add);
    
    UFUNCTION(BlueprintCallable)
    static void AddSSWeakStrikeTechniqueHitCount(int32 Add);
    
    UFUNCTION(BlueprintCallable)
    static void AddSSVictoryRoyalWrestlerTypeToPower(int32 Add);
    
    UFUNCTION(BlueprintCallable)
    static void AddSSVictoryRoyalWrestlerTypeToHighFly(int32 Add);
    
    UFUNCTION(BlueprintCallable)
    static void AddSSVictoryRoyalWrestlerTypeToBalance(int32 Add);
    
    UFUNCTION(BlueprintCallable)
    static void AddSSTotalWrestlerKillCount(int32 Add);
    
    UFUNCTION(BlueprintCallable)
    static void AddSSTotalVendingMachineBuyCount(int32 Add);
    
    UFUNCTION(BlueprintCallable)
    static void AddSSTotalSlotMachinePlayCount(int32 Add);
    
    UFUNCTION(BlueprintCallable)
    static void AddSSTotalRevivalCount(int32 Add);
    
    UFUNCTION(BlueprintCallable)
    static void AddSSTotalAbilityUseCount(int32 Add);
    
    UFUNCTION(BlueprintCallable)
    static void AddSSThrowingWeaponAttackDamageCount(int32 Add);
    
    UFUNCTION(BlueprintCallable)
    static void AddSSStrongStrikeTechniqueHitCount(int32 Add);
    
    UFUNCTION(BlueprintCallable)
    static void AddSSNearWeaponAttackDamageCount(int32 Add);
    
    UFUNCTION(BlueprintCallable)
    static void AddSSJumpAttackHitCount(int32 Add);
    
    UFUNCTION(BlueprintCallable)
    static void AddSSFinisherSuccessCount(int32 Add);
    
    UFUNCTION(BlueprintCallable)
    static void AddSSFarWeaponAttackDamageCount(int32 Add);
    
    UFUNCTION(BlueprintCallable)
    static void AddPurchasedItem(int32 _Count);
    
    UFUNCTION(BlueprintCallable)
    static void AddPossessedBadgeItem(int32 _Count);
    
    UFUNCTION(BlueprintCallable)
    static void AddPlayStadiumStampedeModeCount(int32 Add);
    
    UFUNCTION(BlueprintCallable)
    static void AddPlayedOnlineRankMatch(int32 _Count);
    
    UFUNCTION(BlueprintCallable)
    static void AddPlayedOnlineCasualMatch(int32 _Count);
    
    UFUNCTION(BlueprintCallable)
    static void AddPlayedMiniGame();
    
    UFUNCTION(BlueprintCallable)
    static void AddPlayedCrate(int32 _Count);
    
    UFUNCTION(BlueprintCallable)
    static void AddPlayedCareerMode();
    
    UFUNCTION(BlueprintCallable)
    static void AddModifiedWrester();
    
    UFUNCTION(BlueprintCallable)
    static void AddModifiedEntrance();
    
    UFUNCTION(BlueprintCallable)
    static void AddModifiedCustomWrestlerSkill();
    
    UFUNCTION(BlueprintCallable)
    static void AddMatchResultScore(int32 _Score);
    
    UFUNCTION(BlueprintCallable)
    static void AddMatchResultRankRankMatch(int32 _rankValue);
    
    UFUNCTION(BlueprintCallable)
    static void AddHitWeaponAttack();
    
    UFUNCTION(BlueprintCallable)
    static void AddHitWeakBlow();
    
    UFUNCTION(BlueprintCallable)
    static void AddHitStrongBlow();
    
    UFUNCTION(BlueprintCallable)
    static void AddHitFrontWeakGrab();
    
    UFUNCTION(BlueprintCallable)
    static void AddHitFrontStrongGrab();
    
    UFUNCTION(BlueprintCallable)
    static void AddHitDivingBlow();
    
    UFUNCTION(BlueprintCallable)
    static void AddHitDashBlow();
    
    UFUNCTION(BlueprintCallable)
    static void AddHitBehindWeakGrab();
    
    UFUNCTION(BlueprintCallable)
    static void AddHitBehindStrongGrab();
    
    UFUNCTION(BlueprintCallable)
    static void AddGrabToTheOpponentWhoWentDown();
    
    UFUNCTION(BlueprintCallable)
    static void AddFrendTagWin();
    
    UFUNCTION(BlueprintCallable)
    static void AddForcedMovedToTitleBelt();
    
    UFUNCTION(BlueprintCallable)
    static void AddExhibitionMatchCountWithCpu(EChallengeMatchRuleType _ruleType, EWrestlerID_N _usedWrestler, EChallengeCpuDifficultyType _Difficulty, bool _isWinner);
    
    UFUNCTION(BlueprintCallable)
    static void AddExhibitionMatchCount(EChallengeMatchRuleType _ruleType, EWrestlerID_N _usedWrestler, bool _isOnlineMode, bool _isWinner);
    
    UFUNCTION(BlueprintCallable)
    static void AddEditedTeam();
    
    UFUNCTION(BlueprintCallable)
    static void AddEditedBadgeItem(int32 _Count);
    
    UFUNCTION(BlueprintCallable)
    static void AddDistanceRankMatch(int32 _distance);
    
    UFUNCTION(BlueprintCallable)
    static void AddDefeatedCpuWithSubmission();
    
    UFUNCTION(BlueprintCallable)
    static void AddDefeatedCpuWithPinfall();
    
    UFUNCTION(BlueprintCallable)
    static void AddDefeatedCpuWithCountout();
    
    UFUNCTION(BlueprintCallable)
    static void AddDamageRankMatch(int32 _damage);
    
    UFUNCTION(BlueprintCallable)
    static void AddCreatedCustomWrestler();
    
    UFUNCTION(BlueprintCallable)
    static void AddCreatedCustomArea();
    
    UFUNCTION(BlueprintCallable)
    static void AddCrearedCareerMode(bool _isSameWrestler);
    
    UFUNCTION(BlueprintCallable)
    static void AddCompletedTheTaunt();
    
    UFUNCTION(BlueprintCallable)
    static void AddBlowOpponentWhoCamebackFromRope();
    
    UFUNCTION(BlueprintCallable)
    static void AddBecameFinisher();
    
};

