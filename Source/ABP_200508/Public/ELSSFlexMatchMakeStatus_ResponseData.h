#pragma once
#include "CoreMinimal.h"
#include "ELSSResponseBase.h"
#include "ELSSFlexMatchMakeStatus_ResponseData.generated.h"

USTRUCT(BlueprintType)
struct FELSSFlexMatchMakeStatus_ResponseData : public FELSSResponseBase {
    GENERATED_BODY()
public:
    ABP_200508_API FELSSFlexMatchMakeStatus_ResponseData();
};

