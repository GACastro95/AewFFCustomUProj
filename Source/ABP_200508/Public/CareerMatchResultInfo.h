#pragma once
#include "CoreMinimal.h"
#include "CareerMatchResultInfo.generated.h"

USTRUCT(BlueprintType)
struct FCareerMatchResultInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInjury;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fRestHPRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttackedManager;
    
    ABP_200508_API FCareerMatchResultInfo();
};

