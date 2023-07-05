#pragma once
#include "CoreMinimal.h"
#include "SSDebugReceivedRPCInfo.generated.h"

USTRUCT(BlueprintType)
struct FSSDebugReceivedRPCInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastReceivedId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReceivedCount;
    
    ABP_200508_API FSSDebugReceivedRPCInfo();
};

