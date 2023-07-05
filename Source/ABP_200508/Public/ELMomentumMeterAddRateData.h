#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELMomentumMeterAddRateData.generated.h"

USTRUCT(BlueprintType)
struct FELMomentumMeterAddRateData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AddSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SubSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitTime;
    
    ABP_200508_API FELMomentumMeterAddRateData();
};

