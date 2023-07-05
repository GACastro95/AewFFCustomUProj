#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ECareerScenarioMatchTiming.h"
#include "CareerRecordsScenarioPercent.generated.h"

USTRUCT(BlueprintType)
struct FCareerRecordsScenarioPercent : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECareerScenarioMatchTiming ScenarioPart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScenarioPercent;
    
    ABP_200508_API FCareerRecordsScenarioPercent();
};

