#pragma once
#include "CoreMinimal.h"
#include "SSLoadoutPreset.h"
#include "SSLoadoutSettings.generated.h"

USTRUCT(BlueprintType)
struct FSSLoadoutSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PresetIndex;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSLoadoutPreset Preset[10];
    
    ABP_200508_API FSSLoadoutSettings();
};

