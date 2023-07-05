#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CostumeParam.h"
#include "NamedPresetParam.h"
#include "CustomRosterParam.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FCustomRosterParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid UID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCostumeParam PlainCostume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNamedPresetParam> Presets;
    
    FCustomRosterParam();
};

