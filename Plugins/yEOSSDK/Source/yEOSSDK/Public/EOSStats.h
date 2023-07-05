#pragma once
#include "CoreMinimal.h"
#include "EOSIDs.h"
#include "EOSIngestStatParam.h"
#include "EOSQueryStatOption.h"
#include "EOSStatData.h"
#include "EOSStatsAPIVersionSettings.h"
#include "EOSStatsEventDispatcherDelegate.h"
#include "EOSStats.generated.h"

class UEOSStatsOwnRequest;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSStats : public UEOSIDs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSStatsEventDispatcher StatsEventDispatcher;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEOSStatsOwnRequest*> m_cOwnStatRequests;
    
public:
    UEOSStats();
    UFUNCTION(BlueprintCallable)
    static void SetApiVersion(FEOSStatsAPIVersionSettings _stAPIVerSetting);
    
    UFUNCTION(BlueprintCallable)
    bool RequestQueryTargetStats(const FString& _strProductID, const FEOSQueryStatOption& _stQueryStatOption);
    
    UFUNCTION(BlueprintCallable)
    bool RequestQueryStats(const FEOSQueryStatOption& _stQueryStatOption);
    
    UFUNCTION(BlueprintCallable)
    bool RequestIngestStats(const TArray<FEOSIngestStatParam>& _cIngestStatParams);
    
    UFUNCTION(BlueprintCallable)
    bool RequestIngestStat(const FString& _strStatName, int32 _sAmount);
    
    UFUNCTION(BlueprintCallable)
    int32 GetTargetStatsCount(const FString& _strProductID);
    
    UFUNCTION(BlueprintCallable)
    bool GetTargetStatByName(const FString& _strProductID, FEOSStatData& _stStatData, const FString& _strStatName);
    
    UFUNCTION(BlueprintCallable)
    bool GetTargetStat(const FString& _strProductID, FEOSStatData& _stStatData, int32 _sIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetStatsCount();
    
    UFUNCTION(BlueprintCallable)
    bool GetStatByName(FEOSStatData& _stStatData, const FString& _strStatName);
    
    UFUNCTION(BlueprintCallable)
    bool GetStat(FEOSStatData& _stStatData, int32 _sIndex);
    
};

