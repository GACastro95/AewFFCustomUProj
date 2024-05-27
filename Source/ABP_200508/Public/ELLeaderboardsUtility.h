#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ELLeaderboardUserData.h"
#include "ELLeaderboardsUtility.generated.h"

class UELLeaderboardUserSeasonStats;
class UELLeaderboardUserStats;
class UELLeaderboards;
class UObject;

UCLASS(Blueprintable)
class UELLeaderboardsUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELLeaderboardsUtility();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FDateTime GetUserScoreQueryDateTime(const UObject* WorldContextObject, const FString& LeaderboardName, int32 Season, bool bPlatformOnly);
    
    UFUNCTION(BlueprintCallable)
    static void GetSubLeaderboardUserData(const TArray<FELLeaderboardUserData>& InUserDataArray, int32 StartIndex, int32 EndIndex, TArray<FELLeaderboardUserData>& OutUserDataArray);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FDateTime GetLeaderboardUserStatsQueryDateTime(const UObject* WorldContextObject, const FString& ProductUserID, int32 Season);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UELLeaderboardUserStats* GetLeaderboardUserStats(const UObject* WorldContextObject, const FString& UserId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UELLeaderboardUserSeasonStats* GetLeaderboardUserSeasonStats(const UObject* WorldContextObject, const FString& UserId, int32 Season);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FDateTime GetLeaderboardQueryDateTime(const UObject* WorldContextObject, const FString& LeaderboardName, int32 Season, bool bPlatformOnly);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetLeaderboardProductUserIds(const UObject* WorldContextObject, const TArray<FELLeaderboardUserData>& UserDataArray, TArray<FString>& ProductUserIDs);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UELLeaderboards* GetELLeaderboards(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 FindUserScoreRank(const UObject* WorldContextObject, const FString& UserId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 FindUserLeaderboardRank(const UObject* WorldContextObject, const FString& UserId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 FindUserData(const UObject* WorldContextObject, const TArray<FELLeaderboardUserData>& UserDataArray, const FString& UserId, FELLeaderboardUserData& UserData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 FindMyUserScoreRank(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 FindMyUserData(const UObject* WorldContextObject, const TArray<FELLeaderboardUserData>& UserDataArray, FELLeaderboardUserData& UserData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 FindMyLeaderboardUserDataByLeaderboadName(const UObject* WorldContextObject, const FString& LeaderboardName, int32 Season, bool bPlatformOnly, FELLeaderboardUserData& UserData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 FindMyLeaderboardUserData(const UObject* WorldContextObject, int32 Season, bool bPlatformOnly, FELLeaderboardUserData& UserData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 FindMyLeaderboardRank(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 FindLeaderboardUserDataByLeaderboadName(const UObject* WorldContextObject, const FString& UserId, const FString& DisplayName, const FString& LeaderboardName, int32 Season, bool bPlatformOnly, FELLeaderboardUserData& UserData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 FindLeaderboardUserData(const UObject* WorldContextObject, const FString& UserId, const FString& DisplayName, int32 Season, bool bPlatformOnly, FELLeaderboardUserData& UserData);
    
};

