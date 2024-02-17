#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ESSFgfEndRoundReason.h"
#include "ESSFgfPlayerProgress.h"
#include "ESSFgfPlayerProgressSubState.h"
#include "ESSFgfRoundFlowState.h"
#include "ESSFinishedMatchType.h"
#include "SSFgfFieldPatternParam.h"
#include "SSFgfFlowStateSyncParam.h"
#include "SSFgfMatchInfo.h"
#include "SSRuleAdjustParam.h"
#include "ELSSFgfManager.generated.h"

class AELSSGimmickFgfGoal;
class AELSSItemBox;
class AELSSLocator_PlayerStart;
class AELSSPlayer;
class AELSSPlayerController;
class AELSSWeaponFgfBall;

UCLASS(Blueprintable)
class ABP_200508_API AELSSFgfManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FgfMatchInfo, meta=(AllowPrivateAccess=true))
    FSSFgfMatchInfo FgfMatchInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELSSPlayerController* CachedFirstLocalSSPlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FgfFlowStateSyncParam, meta=(AllowPrivateAccess=true))
    FSSFgfFlowStateSyncParam FgfFlowStateSyncParamRep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSFgfRoundFlowState LocalFlowStateForDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSFgfRoundFlowState ServerFlowStateForDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ServerRoundNoForDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ServerIsFirstHalfForDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentRoundNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FirstHalfFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSFinishedMatchType FinishedMatchType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RoundEndTime, meta=(AllowPrivateAccess=true))
    float RoundEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ESSFgfEndRoundReason EndRoundReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ExecutingResetFgfRoundFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FgfRoundActiveFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELSSWeaponFgfBall* FgfBall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BallExp, meta=(AllowPrivateAccess=true))
    int32 FgfBallExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CachedFgfBallLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefenseBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AELSSGimmickFgfGoal*> FgfGoals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AELSSItemBox*> DefenseTeamTreasureBoxes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSFgfFieldPatternParam FieldPatternParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AELSSLocator_PlayerStart*> OffenseLocators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AELSSLocator_PlayerStart*> OffenseRespawnLocators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AELSSLocator_PlayerStart*> DefenseLocators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AELSSLocator_PlayerStart*> DefenseRespawnLocatorsA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AELSSLocator_PlayerStart*> DefenseRespawnLocatorsB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AELSSLocator_PlayerStart*> DefenseRespawnLocatorsC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSRuleAdjustParam RuleAdjustParam;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bForceOffenseFever;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bForceDefenseFever;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float BallOwnerSpeedScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float MoveFrictionOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float MoveAdjustDurationOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AppliedSpeedScale;
    
    AELSSFgfManager();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TickState_RoundSetup(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TickState_RoundPlaying(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickState_RoundOpening(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickState_RoundFinished(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickState_RoundClosing(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickState_Initialize(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickState_Finished(float inDeltaSeconds);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void SyncFgfFlowStateParam_Multicast(const FSSFgfFlowStateSyncParam& syncParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartFgfFlow();
    
    UFUNCTION(BlueprintCallable)
    void SpawnFgfBall();
    
    UFUNCTION(BlueprintCallable)
    void SetupFieldPatternParam();
    
    UFUNCTION(BlueprintCallable)
    void SetNextRound(bool& outIsFinishedMatch, ESSFinishedMatchType& outFinishedMatchType);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RoundEndTime();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FgfMatchInfo();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FgfFlowStateSyncParam();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_BallExp();
    
public:
    UFUNCTION(BlueprintCallable)
    void MakeFgfMap();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSecondHalf() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalPlayerTeamOffense() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalPlayerTeamDefense() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFlowState(ESSFgfRoundFlowState inState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFirstHalf() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFinishedRound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFinalRound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExecutingResetFgfRound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDragonTeamOffense() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDoneFgfPlayerProgressBySubState(ESSFgfPlayerProgressSubState inSubState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDoneFgfPlayerProgress(ESSFgfPlayerProgress InProgress) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELSSPlayerController* GetFirstLocalSSPlayerController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESSFgfPlayerProgress GetFgfPlayerProgressTypeBySubState(ESSFgfPlayerProgressSubState inSubState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELSSPlayer* GetFgfBallOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentRoundNo() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishMatch(ESSFinishedMatchType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool FinishFgfRound(ESSFgfEndRoundReason inReason);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExitState_RoundSetup();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExitState_RoundPlaying();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitState_RoundOpening();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitState_RoundFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitState_RoundClosing();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitState_Initialize();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitState_Finished();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ExistsNextRound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ExistsDefenseBonus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecuteRoundChangeFlow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecuteResetFgfRound();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EnterState_RoundSetup();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EnterState_RoundPlaying();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterState_RoundOpening();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EnterState_RoundFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterState_RoundClosing();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterState_Initialize();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterState_Finished();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndFgfFlow();
    
    UFUNCTION(BlueprintCallable)
    void DestroyFgfBall();
    
    UFUNCTION(BlueprintCallable)
    void CompleteExecuteResetFgfRound();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CleanupPickupAndItemBox();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckReachCalledGame() const;
    
    UFUNCTION(BlueprintCallable)
    void CheckFinishMatchCondition(bool& outIsFinishedMatch, ESSFinishedMatchType& outFinishedMatchType);
    
    UFUNCTION(BlueprintCallable)
    void ChangeFlowStateForServer(ESSFgfRoundFlowState inState);
    
    UFUNCTION(BlueprintCallable)
    void ChangeFlowStateForClient(ESSFgfRoundFlowState inState);
    
    UFUNCTION(BlueprintCallable)
    void ChangeFlowState(ESSFgfRoundFlowState inState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanChangeNextFlowStateForClient() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyDefenseBonusOnServer();
    
};

