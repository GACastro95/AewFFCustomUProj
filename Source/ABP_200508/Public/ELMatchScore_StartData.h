#pragma once
#include "CoreMinimal.h"
#include "ELMatchScore_StartData.generated.h"

USTRUCT(BlueprintType)
struct FELMatchScore_StartData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Star;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Score;
    
    ABP_200508_API FELMatchScore_StartData();
};

