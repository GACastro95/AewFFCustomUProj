#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ELLeaderboardUserData.h"
#include "ELLeaderboardStatDataCache.generated.h"

USTRUCT(BlueprintType)
struct FELLeaderboardStatDataCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime LastRequestDateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime LastQueryDateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FELLeaderboardUserData> UserRankData;
    
    ABP_200508_API FELLeaderboardStatDataCache();
};

