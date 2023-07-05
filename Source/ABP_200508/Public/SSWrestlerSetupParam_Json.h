#pragma once
#include "CoreMinimal.h"
#include "SSWrestlerSetupParam.h"
#include "SSWrestlerSetupParam_Json.generated.h"

USTRUCT(BlueprintType)
struct FSSWrestlerSetupParam_Json {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSWrestlerSetupParam JsonSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString JsonValue;
    
    ABP_200508_API FSSWrestlerSetupParam_Json();
};

