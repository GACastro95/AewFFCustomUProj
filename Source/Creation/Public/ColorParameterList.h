#pragma once
#include "CoreMinimal.h"
#include "ColorParameter.h"
#include "ColorParameterList.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FColorParameterList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FColorParameter> List;
    
    FColorParameterList();
};

