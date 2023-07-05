#pragma once
#include "CoreMinimal.h"
#include "EOSNatP2PSplitPacketData.h"
#include "EOSNatP2PSplitPacketCache.generated.h"

USTRUCT(BlueprintType)
struct FEOSNatP2PSplitPacketCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEOSNatP2PSplitPacketData> DataArray;
    
    YEOSSDK_API FEOSNatP2PSplitPacketCache();
};

