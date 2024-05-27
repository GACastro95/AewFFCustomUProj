#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "EEOSLeaderboardEvent.h"
#include "EOSLeaderboardsDefinitionData.h"
#include "ELLeaderboardStatDataCache.h"
#include "ELLeaderboards.generated.h"

class UELLeaderboardUserStats;
class UELStats;
class UEOSFriend;
class UEOSLeaderboard;
class UEOSUser;
class UEOSUserManager;

UCLASS(Blueprintable, Config=Game)
class ABP_200508_API UELLeaderboards : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELStats* ELStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSLeaderboard* EOSLeaderboards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSFriend* EOSFriend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSUser* EOSUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSUserManager* EOSUserManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FELLeaderboardStatDataCache> LeaderboardMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FELLeaderboardStatDataCache> FriendLeaderboardMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UELLeaderboardUserStats*> UserStatsMap;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> LeaderboardStatNames;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> LeaderboardStatDetailNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SeasonNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentSeason;
    
public:
    UELLeaderboards();

    UFUNCTION(BlueprintCallable)
    void SetEOSLeaderboards(UEOSLeaderboard* InEOSLeaderboards);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentSeason(int32 Season);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnQueryLeaderboardsInfo(EEOSLeaderboardEvent EOSLeaderboardEvent, const TMap<FString, FEOSLeaderboardsDefinitionData>& LeaderboardDefinitionData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool HasLeaderboard(const FString& LeaderboardName, int32 Season, bool bPlatformOnly) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetSeasonTime(int32 Season, FDateTime& StartTime, FDateTime& EndTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSeasonNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetMonthlySeasonFromCurrent(int32& Season, int32 OffsetMonth) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetLeaderboardId(const FString& LeaderboardName, int32 Season, bool bPlatformOnly, FString& LeaderboardId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetCurrentSeason(int32& Season) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetCurrentMonthlySeason(int32& Season) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool FindCurrentSeason(int32& Season) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearUserScoreCache(const TArray<FString>& ExcludeLeaderboardNames);
    
    UFUNCTION(BlueprintCallable)
    void ClearUserDataMap();
    
    UFUNCTION(BlueprintCallable)
    void ClearLeaderboardStatsCache(const TArray<FString>& ExcludeUserIds);
    
    UFUNCTION(BlueprintCallable)
    void ClearLeaderboardsCache(const TArray<FString>& ExcludeLeaderboardNames);
    
    UFUNCTION(BlueprintCallable)
    void ClearCache();
    
};

