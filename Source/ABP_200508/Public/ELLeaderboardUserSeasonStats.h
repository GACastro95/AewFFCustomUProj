#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UserProfileColorParam.h"
#include "ELLeaderboardUserSeasonStats.generated.h"

UCLASS(Blueprintable)
class UELLeaderboardUserSeasonStats : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime LastRequestDateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime LastQueryDateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> StatsMap;
    
    UELLeaderboardUserSeasonStats();
    UFUNCTION(BlueprintCallable)
    void UpdateRequestDateTime();
    
    UFUNCTION(BlueprintCallable)
    void UpdateQueryDateTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    int32 GetStat(const FString& StatName, int32 DefaultValue) const;
    
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDateTime GetLastRequestDateTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDateTime GetLastQueryDateTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool FindStat(const FString& StatName, int32& Value) const;
    
};

