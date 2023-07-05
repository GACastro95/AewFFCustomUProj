#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CareerRewardEnergy.generated.h"

USTRUCT(BlueprintType)
struct FCareerRewardEnergy : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubstructEnergy;
    
    ABP_200508_API FCareerRewardEnergy();
};

