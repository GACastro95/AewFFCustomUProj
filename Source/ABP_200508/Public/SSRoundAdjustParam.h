#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SSRoundAdjustParam.generated.h"

USTRUCT(BlueprintType)
struct FSSRoundAdjustParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DrawDebugRoundState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeforeShrinkAnnounceDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShrinkAnnounceDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeLagTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NearSafeAreaDistance;
    
    ABP_200508_API FSSRoundAdjustParam();
};

