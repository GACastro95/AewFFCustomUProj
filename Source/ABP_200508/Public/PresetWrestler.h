#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "PresetWrestler.generated.h"

USTRUCT(BlueprintType)
struct ABP_200508_API FPresetWrestler : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath DataAsset;
    
    FPresetWrestler();
};

