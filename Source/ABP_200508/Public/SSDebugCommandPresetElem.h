#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SSDebugCommandPresetElem.generated.h"

USTRUCT(BlueprintType)
struct FSSDebugCommandPresetElem : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Command;
    
    ABP_200508_API FSSDebugCommandPresetElem();
};

