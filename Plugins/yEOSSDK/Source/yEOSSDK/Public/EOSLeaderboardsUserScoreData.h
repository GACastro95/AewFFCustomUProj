#pragma once
#include "CoreMinimal.h"
#include "EOSLeaderboardsUserScoreData.generated.h"

USTRUCT(BlueprintType)
struct YEOSSDK_API FEOSLeaderboardsUserScoreData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Score;
    
    FEOSLeaderboardsUserScoreData();
};

