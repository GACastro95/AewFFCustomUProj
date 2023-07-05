#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ELDataAsset.h"
#include "CustomSliderSettingDataAsset.generated.h"

UCLASS(Blueprintable)
class UCustomSliderSettingDataAsset : public UELDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GaugeResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Keys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUnit UnitType;
    
    UCustomSliderSettingDataAsset();
};

