#pragma once
#include "CoreMinimal.h"
#include "CommonWrestlerRaw.h"
#include "CostumeParam.h"
#include "RosterPresetRaw.h"
#include "CustomRosterRaw.generated.h"

USTRUCT(BlueprintType)
struct FCustomRosterRaw {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonWrestlerRaw COMMON;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCostumeParam PlainAttire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRosterPresetRaw> Presets;
    
    CREATION_API FCustomRosterRaw();
};

