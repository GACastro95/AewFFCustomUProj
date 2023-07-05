#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EYGS2AnalyticsType.h"
#include "YGS2AnalyticsData.generated.h"

USTRUCT(BlueprintType)
struct YGS2CLIENT_API FYGS2AnalyticsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYGS2AnalyticsType AnalyticsType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Success;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime ProcessStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime ProcessStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> Values;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> Strings;
    
    FYGS2AnalyticsData();
};

