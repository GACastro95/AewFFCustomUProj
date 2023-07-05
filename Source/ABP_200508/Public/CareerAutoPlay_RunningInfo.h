#pragma once
#include "CoreMinimal.h"
#include "EWrestlerID_N.h"
#include "CareerAutoPlay_ScenarioDetail.h"
#include "CareerAutoPlay_RunningInfo.generated.h"

USTRUCT(BlueprintType)
struct FCareerAutoPlay_RunningInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWrestlerID_N WrestlerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCareerAutoPlay_ScenarioDetail Prologue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCareerAutoPlay_ScenarioDetail AllOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCareerAutoPlay_ScenarioDetail FullGear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCareerAutoPlay_ScenarioDetail REVOLUTION;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCareerAutoPlay_ScenarioDetail DoN;
    
    ABP_200508_API FCareerAutoPlay_RunningInfo();
};

