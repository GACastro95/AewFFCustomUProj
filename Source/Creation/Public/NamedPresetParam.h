#pragma once
#include "CoreMinimal.h"
#include "PresetParam.h"
#include "NamedPresetParam.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FNamedPresetParam {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPresetParam Preset;
    
    FNamedPresetParam();
};

