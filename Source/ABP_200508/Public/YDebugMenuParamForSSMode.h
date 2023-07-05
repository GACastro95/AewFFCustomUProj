#pragma once
#include "CoreMinimal.h"
#include "EYDebugMenuUITypeForSSMode.h"
#include "YDebugMenuParamForSSMode.generated.h"

class UELSSDebugMenuDummyItem01_MenuSettings;

USTRUCT(BlueprintType)
struct ABP_200508_API FYDebugMenuParamForSSMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EYDebugMenuUITypeForSSMode> UITypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELSSDebugMenuDummyItem01_MenuSettings* ELSSDebugMenuDummyItem01_MenuSettings;
    
    FYDebugMenuParamForSSMode();
};

