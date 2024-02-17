#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SSRuleParam.h"
#include "SSRuleResourceParam.h"
#include "SSRuleScheduleParam.h"
#include "SSRuleStatus.generated.h"

USTRUCT(BlueprintType)
struct FSSRuleStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScheduleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSRuleParam RuleParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSRuleScheduleParam ScheduleParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSRuleResourceParam ResourceParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime EventEndDateTime;
    
    ABP_200508_API FSSRuleStatus();
};

