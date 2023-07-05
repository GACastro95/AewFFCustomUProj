#pragma once
#include "CoreMinimal.h"
#include "EditColorTargetInfo.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FEditColorTargetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
    FEditColorTargetInfo();
};

