#pragma once
#include "CoreMinimal.h"
#include "ELYGS2PingCache.generated.h"

USTRUCT(BlueprintType)
struct FELYGS2PingCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> PingHistory;
    
    ABP_200508_API FELYGS2PingCache();
};

