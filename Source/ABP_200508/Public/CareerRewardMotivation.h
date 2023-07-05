#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CareerRewardMotivation.generated.h"

USTRUCT(BlueprintType)
struct FCareerRewardMotivation : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Injury;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Win;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Lose;
    
    ABP_200508_API FCareerRewardMotivation();
};

