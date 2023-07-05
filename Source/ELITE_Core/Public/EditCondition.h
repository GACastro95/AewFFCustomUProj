#pragma once
#include "CoreMinimal.h"
#include "EditCondition.generated.h"

USTRUCT(BlueprintType)
struct ELITE_CORE_API FEditCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BitFlags;
    
    FEditCondition();
};

