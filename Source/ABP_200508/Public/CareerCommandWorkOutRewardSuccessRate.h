#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CareerCommandWorkOutRewardSuccessRate.generated.h"

USTRUCT(BlueprintType)
struct FCareerCommandWorkOutRewardSuccessRate : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnagyPercent_0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnagyPercent_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnagyPercent_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnagyPercent_3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnagyPercent_4;
    
    ABP_200508_API FCareerCommandWorkOutRewardSuccessRate();
};

