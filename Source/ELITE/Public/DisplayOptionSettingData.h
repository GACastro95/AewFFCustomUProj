#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DisplayOptionSettingData.generated.h"

USTRUCT(BlueprintType)
struct ELITE_API FDisplayOptionSettingData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShadowQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AntiAliasingQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TextureQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PostProcessQuality;
    
    FDisplayOptionSettingData();
};

