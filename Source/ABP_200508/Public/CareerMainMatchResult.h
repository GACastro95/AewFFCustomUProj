#pragma once
#include "CoreMinimal.h"
#include "EWrestlerID_N.h"
#include "CareerMatchCardCore.h"
#include "ECareerScenarioPart.h"
#include "CareerMainMatchResult.generated.h"

USTRUCT(BlueprintType)
struct FCareerMainMatchResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECareerScenarioPart ScenarioPart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCareerMatchCardCore MatchCard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWrestlerID_N Winner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWrestlerID_N Loser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Win;
    
    ABP_200508_API FCareerMainMatchResult();
};

