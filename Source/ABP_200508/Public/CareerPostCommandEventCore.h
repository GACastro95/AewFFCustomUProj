#pragma once
#include "CoreMinimal.h"
#include "ECareerPostCommandEventMark.h"
#include "CareerPostCommandEventCore.generated.h"

USTRUCT(BlueprintType)
struct FCareerPostCommandEventCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EventNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECareerPostCommandEventMark EventMark;
    
    ABP_200508_API FCareerPostCommandEventCore();
};

