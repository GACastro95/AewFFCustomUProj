#pragma once
#include "CoreMinimal.h"
#include "ELDebugMenuSubMenuDefaultParam.generated.h"

USTRUCT(BlueprintType)
struct ABP_200508_API FELDebugMenuSubMenuDefaultParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StringTableNameSpace;
    
    FELDebugMenuSubMenuDefaultParam();
};

