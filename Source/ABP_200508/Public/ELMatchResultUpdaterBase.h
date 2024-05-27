#pragma once
#include "CoreMinimal.h"
#include "EELAchievementList.h"
#include "GameFramework/Actor.h"
#include "ELMatchScore_StarData.h"
#include "ELWrestlerSelectParamForNative.h"
#include "ELMatchResultUpdaterBase.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class ABP_200508_API AELMatchResultUpdaterBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* StarData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCareer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Is1on1Match;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CompetitorCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WinTeamNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsOnline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsTagRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HostPadNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HostTeamNo;
    
public:
    AELMatchResultUpdaterBase(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void Update_Native();
    
    UFUNCTION(BlueprintCallable)
    void Update_GlobalStat();
    
    UFUNCTION(BlueprintCallable)
    void SetupCommonParameters_Native(int32 InHostPadNo, int32 InWinTeamNo, bool InIsOnline, bool InIsTagRule, bool InIsExhibition);
    
public:
    UFUNCTION(BlueprintCallable)
    void PushUnlockAchievement(EELAchievementList AchievementType, int32 AddCount);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnShowMatchResultMenuEvent_Native();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCompetitor(const FELWrestlerSelectParamForNative& Wrestler) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetStarEvaluation(float MatchTotalScore, FELMatchScore_StarData& OutStarData) const;
    
    UFUNCTION(BlueprintCallable)
    void Check_AchievementStatus();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddDefeatComStat_Impl(int32 InAIDifficulty);
    
};

