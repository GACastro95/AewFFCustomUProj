#pragma once
#include "CoreMinimal.h"
#include "ELSSResponseBase.h"
#include "ELSSFlexMatchMakeStop_ResponseData.generated.h"

USTRUCT(BlueprintType)
struct FELSSFlexMatchMakeStop_ResponseData : public FELSSResponseBase {
    GENERATED_BODY()
public:
    ABP_200508_API FELSSFlexMatchMakeStop_ResponseData();
};

