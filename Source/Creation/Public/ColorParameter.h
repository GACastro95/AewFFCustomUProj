#pragma once
#include "CoreMinimal.h"
#include "ColorParameter.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FColorParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ColorID;
    
    FColorParameter();
};

