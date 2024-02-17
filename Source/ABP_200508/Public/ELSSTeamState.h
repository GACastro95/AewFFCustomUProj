#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ESSAliveStateType.h"
#include "ESSTeamScoreReason.h"
#include "SSLocalTeamStatus.h"
#include "SSTeamInfo.h"
#include "SSTeamResult.h"
#include "ELSSTeamState.generated.h"

class AELSSGameState;
class AELSSPlayerController;
class AELSSPlayerState;
class AELSSUIManagerInGame;
class UELSSPanelInGameBase;

UCLASS(Blueprintable)
class ABP_200508_API AELSSTeamState : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELSSGameState* CachedSSGameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TeamInfo, meta=(AllowPrivateAccess=true))
    FSSTeamInfo TeamInfoRep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSLocalTeamStatus LocalTeamStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELSSPlayerController* CachedFirstLocalSSPlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TeamLeaderSlotNo, meta=(AllowPrivateAccess=true))
    int32 TeamLeaderSlotNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TeamScore, meta=(AllowPrivateAccess=true))
    int32 TeamScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TeamScoreRanking, meta=(AllowPrivateAccess=true))
    int32 TeamScoreRanking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TeamResult, meta=(AllowPrivateAccess=true))
    FSSTeamResult TeamResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_JewelRadarLevel, meta=(AllowPrivateAccess=true))
    int32 JewelRadarLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELSSPlayerState* CacheFgfBallHoldPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SelectedSpawnArea, meta=(AllowPrivateAccess=true))
    int32 SelectedSpawnArea;
    
public:
    AELSSTeamState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UpdateUI_WaitingFinish();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateUI_SetupCommon();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateUI_First();
    
    UFUNCTION(BlueprintCallable)
    void UpdateUI_BeginWatchTeam();
    
    UFUNCTION(BlueprintCallable)
    void UpdateUI_BeginWatchGame();
    
    UFUNCTION(BlueprintCallable)
    void SyncLocalTeamStatus();
    
    UFUNCTION(BlueprintCallable)
    void SetTeamScoreRanking(int32 inScoreRanking);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TeamScoreRanking();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TeamScore();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TeamResult();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TeamLeaderSlotNo();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TeamInfo();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SelectedSpawnArea();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_JewelRadarLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerKoHpUpdate(AELSSPlayerState* inPlayerState, int32 inKoHp, int32 inKoMaxHp, bool inImmediate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerHpUpdate(AELSSPlayerState* inPlayerState, int32 inHp, int32 inMaxHP, bool inImmediate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerHeatMeterUpdate(AELSSPlayerState* inPlayerState, int32 inHeatLevel, float inExpRate, bool inImmediate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerChangePossessOfFGFBall(AELSSPlayerState* inPlayerState, bool flg, int32 inLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerChangePossessOfCarrot(AELSSPlayerState* inPlayerState, bool flg);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerChangePossessOfBlackDia(AELSSPlayerState* inPlayerState, bool flg);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerChangeCurrentShieldDurability(AELSSPlayerState* inPlayerState, int32 inDurability, int32 InMaxDurability, bool inImmediate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerChangeAliveStateType(AELSSPlayerState* inPlayerState, ESSAliveStateType inAliveStateType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeTeamScore(int32 inNewScore);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsViewTargetTeam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSyncedResult() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 IsPlayerTeam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalPlayerTeam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAlived() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UELSSPanelInGameBase* GetUIPanel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELSSUIManagerInGame* GetUIManager() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELSSPlayerState* GetTeamMemberPlayerStateBySlotNo(int32 inSlotNo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELSSPlayerState* GetTeamLeaderPlayerState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTeamId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSlotNoByPlayerState(const AELSSPlayerState* inPlayerState) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSlotIndexByPlayerState(AELSSPlayerState* inPlayerState) const;
    
public:
    UFUNCTION(BlueprintCallable)
    AELSSPlayerController* GetFirstLocalSSPlayerController() const;
    
    UFUNCTION(BlueprintCallable)
    bool ChangeLeader(int32 inLeaderSlotNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanRespawn() const;
    
    UFUNCTION(BlueprintCallable)
    void AddTeamScore(ESSTeamScoreReason inReason, int32 NewAddTeamScore);
    
};

