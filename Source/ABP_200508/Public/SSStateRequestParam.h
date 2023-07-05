#pragma once
#include "CoreMinimal.h"
#include "ESSActionTransitTrigger.h"
#include "SSStateRequestParam.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSSStateRequestParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSActionTransitTrigger Trigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InputFlg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputYaw;
    
    ABP_200508_API FSSStateRequestParam();
};

