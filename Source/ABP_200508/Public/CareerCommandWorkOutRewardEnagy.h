#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CareerCommandWorkOutRewardEnagy.generated.h"

USTRUCT(BlueprintType)
struct FCareerCommandWorkOutRewardEnagy : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnagyCostPercent;
    
    ABP_200508_API FCareerCommandWorkOutRewardEnagy();
};

