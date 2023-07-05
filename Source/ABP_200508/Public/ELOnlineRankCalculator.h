#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnlineRank.h"
#include "SSPlayerRankParam.h"
#include "ELOnlineRankCalculator.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UELOnlineRankCalculator : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DefaultRankTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOnlineRank> RankArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSPlayerRankParam> SSPlayerRankTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WinPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LosePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WinStreakCoeff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WinStreakCoeff2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LoseStreakCoeff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LoseStreakCoeff2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RankDiffWinBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RankDiffLosePenalty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LeaderboardRankMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RankPointMax;
    
public:
    UELOnlineRankCalculator();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSSPlayerRankFromPlayerRankPoint(int32 RankPoint, int32 LeaderboardRank) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRankPointRatio(int32 Rank, int32 RankPoint) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetRankName(int32 Rank) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetRankGroupName(int32 Rank) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRankFromRankPoint(int32 RankPoint, int32 LeaderboardRank) const;
    
    UFUNCTION(BlueprintCallable)
    int32 ClampRankPoint(int32 RankPoint);
    
    UFUNCTION(BlueprintCallable)
    bool CalcRank(UPARAM(Ref) int32& Rank, UPARAM(Ref) int32& RankPoint, int32 AddRankPoint, int32 LeaderboardRank);
    
    UFUNCTION(BlueprintCallable)
    int32 CalcAddPoint(bool Win, bool Lose, int32 WinStreak, int32 LoseStreak, int32 RankDiff);
    
};

