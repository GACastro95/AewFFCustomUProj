#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EELIKPartType.h"
#include "ELAttachCondition.h"
#include "ControlIK.generated.h"

USTRUCT(BlueprintType)
struct FControlIK {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EELIKPartType TargetIK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftClassPath EffectorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EffectorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELAttachCondition Condition;
    
    ELITE_API FControlIK();
};

