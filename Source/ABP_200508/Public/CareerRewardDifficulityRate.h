#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CareerRewardDifficulityRate.generated.h"

USTRUCT(BlueprintType)
struct FCareerRewardDifficulityRate : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fRateEasy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fRateNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fRateHard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fRateAllElite;
    
    ABP_200508_API FCareerRewardDifficulityRate();
};

