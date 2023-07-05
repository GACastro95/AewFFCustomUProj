#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CareerAutoPlay_Choice.h"
#include "ECareerAutoPlay_MatchResult.h"
#include "ECareerScenarioNo.h"
#include "CareerAutoPlay_ScenarioDetail.generated.h"

USTRUCT(BlueprintType)
struct FCareerAutoPlay_ScenarioDetail : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECareerScenarioNo CheckScenario;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECareerAutoPlay_MatchResult ResultWeek1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECareerAutoPlay_MatchResult ResultWeek2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECareerAutoPlay_MatchResult ResultWeek3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECareerAutoPlay_MatchResult ResultWeek4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECareerAutoPlay_MatchResult ResultWeek4EX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCareerAutoPlay_Choice Choice1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCareerAutoPlay_Choice Choice2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCareerAutoPlay_Choice Choice3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCareerAutoPlay_Choice Choice4;
    
    ABP_200508_API FCareerAutoPlay_ScenarioDetail();
};

