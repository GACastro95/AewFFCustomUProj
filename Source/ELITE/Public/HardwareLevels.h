#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HardwareLevels.generated.h"

USTRUCT(BlueprintType)
struct ELITE_API FHardwareLevels : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CPUBrand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GPUBrand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Graphic4K;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GraphicFullHD;
    
    FHardwareLevels();
};

