#pragma once
#include "CoreMinimal.h"
#include "EWrestlerID_N.h"
#include "CareerChampionshipCore.generated.h"

USTRUCT(BlueprintType)
struct FCareerChampionshipCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWrestlerID_N eWrestlerA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWrestlerID_N eWrestlerB;
    
    ABP_200508_API FCareerChampionshipCore();
};

