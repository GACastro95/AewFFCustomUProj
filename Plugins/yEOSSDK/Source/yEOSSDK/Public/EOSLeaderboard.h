#pragma once
#include "CoreMinimal.h"
#include "EOSLeaderboardAPIVersionSettings.h"
#include "EOSLeaderboardEventDispatcherDelegate.h"
#include "EOSLeaderboardsDefinitionData.h"
#include "EOSLeaderboardsRecordData.h"
#include "EOSLeaderboardsUserScoreData.h"
#include "EOSStats.h"
#include "EOSLeaderboard.generated.h"

class UEOSLeaderboardOwnRequest;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSLeaderboard : public UEOSStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSLeaderboardEventDispatcher LeaderboardEventDispatcher;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEOSLeaderboardOwnRequest*> m_cOwnRequests;
    
public:
    UEOSLeaderboard();

    UFUNCTION(BlueprintCallable)
    static void SetLeaderboardApiVersion(FEOSLeaderboardAPIVersionSettings _stAPIVerSetting);
    
    UFUNCTION(BlueprintCallable)
    bool RequestQueryUserScores(const TArray<FString>& _cLeaderboardIds, const TArray<FString>& _cProductUserIds);
    
    UFUNCTION(BlueprintCallable)
    bool RequestQueryRanks(const FString& _strLeaderboardId);
    
    UFUNCTION(BlueprintCallable)
    bool RequestQueryLeaderboardInfo();
    
    UFUNCTION(BlueprintCallable)
    bool GetLeaderboardUserScoreDataFromCache(TArray<FEOSLeaderboardsUserScoreData>& _rstUserScoreData, const FString& _strLeaderboardId);
    
    UFUNCTION(BlueprintCallable)
    bool GetLeaderboardRecordDataFromCache(TArray<FEOSLeaderboardsRecordData>& _rstRecordData, const FString& _strLeaderboardId);
    
    UFUNCTION(BlueprintCallable)
    bool GetLeaderboardDefinitionDataFromCache(FEOSLeaderboardsDefinitionData& _rstDefinitionData, const FString& _strLeaderboardId);
    
};

