#pragma once
#include "CoreMinimal.h"
#include "ELSSResponseBase.h"
#include "ELSSFlexMatchMakeStart_ResponseData.generated.h"

USTRUCT(BlueprintType)
struct FELSSFlexMatchMakeStart_ResponseData : public FELSSResponseBase {
    GENERATED_BODY()
public:
    ABP_200508_API FELSSFlexMatchMakeStart_ResponseData();
};

