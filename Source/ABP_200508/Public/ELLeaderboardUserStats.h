#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UserProfileColorParam.h"
#include "ELLeaderboardUserStats.generated.h"

class UELLeaderboardUserSeasonStats;

UCLASS(Blueprintable)
class UELLeaderboardUserStats : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProductUserID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UELLeaderboardUserSeasonStats*> SeasonStatsMap;
    
    UELLeaderboardUserStats();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UELLeaderboardUserSeasonStats* GetUserSeasonStats(int32 Season) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    int32 GetStat(const FString& StatName, int32 Season, int32 DefaultValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetLeaderboardSSRankPoint(int32& SSRankPoint) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetLeaderboardPlayerRankPoint(int32& PlayerRankPoint) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetLeaderboardPlayerRank(int32& PlayerRank, int32& PlayerRankPoint) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetLeaderboardPlayerIcon(int32& PlayerIcon, int32& BGIcon, FUserProfileColorParam& ColorParam) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetLeaderboardPlayerExternalAccountId(FString& AccountId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetLeaderboardPlayerBadges(TArray<int32>& Badges) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetLeaderboardBattlePassPoint(int32& BattlePassPoint) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool FindStat(const FString& StatName, int32 Season, int32& Value) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool FindLatestStat(const FString& StatName, int32& Value) const;
    
};

