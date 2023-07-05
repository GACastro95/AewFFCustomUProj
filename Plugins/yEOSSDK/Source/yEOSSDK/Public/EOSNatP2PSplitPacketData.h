#pragma once
#include "CoreMinimal.h"
#include "EOSNatP2PSplitPacketData.generated.h"

USTRUCT(BlueprintType)
struct FEOSNatP2PSplitPacketData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Data;
    
    YEOSSDK_API FEOSNatP2PSplitPacketData();
};

