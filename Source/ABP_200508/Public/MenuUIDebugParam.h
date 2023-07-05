#pragma once
#include "CoreMinimal.h"
#include "MenuUIDebugParam.generated.h"

USTRUCT(BlueprintType)
struct FMenuUIDebugParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InMenuUIDebug;
    
    ABP_200508_API FMenuUIDebugParam();
};

