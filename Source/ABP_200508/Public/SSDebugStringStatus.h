#pragma once
#include "CoreMinimal.h"
#include "SSDebugStringStatus.generated.h"

USTRUCT(BlueprintType)
struct FSSDebugStringStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString STRING;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    ABP_200508_API FSSDebugStringStatus();
};

