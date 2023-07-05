#pragma once
#include "CoreMinimal.h"
#include "SSBadStatusParam.generated.h"

class AELSSPlayer;

USTRUCT(BlueprintType)
struct FSSBadStatusParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELSSPlayer* Instigator;
    
    ABP_200508_API FSSBadStatusParam();
};

