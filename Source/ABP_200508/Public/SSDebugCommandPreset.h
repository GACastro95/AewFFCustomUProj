#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SSDebugCommandPresetElem.h"
#include "SSDebugCommandPreset.generated.h"

USTRUCT(BlueprintType)
struct FSSDebugCommandPreset : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSDebugCommandPresetElem> Commands;
    
    ABP_200508_API FSSDebugCommandPreset();
};

