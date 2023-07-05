#pragma once
#include "CoreMinimal.h"
#include "BasicWrestlerParam.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FBasicWrestlerParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> IntParam;
    
    FBasicWrestlerParam();
};

