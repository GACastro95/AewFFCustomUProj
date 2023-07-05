#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EEOSLeaderboardAggregation.h"
#include "EOSLeaderboardsDefinitionData.generated.h"

USTRUCT(BlueprintType)
struct YEOSSDK_API FEOSLeaderboardsDefinitionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LeaderboardId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime EndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEOSLeaderboardAggregation Aggregation;
    
    FEOSLeaderboardsDefinitionData();
};

