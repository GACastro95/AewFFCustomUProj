#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AudioVolume_Param.generated.h"

USTRUCT(BlueprintType)
struct ABP_200508_API FAudioVolume_Param : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsMute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Volume;
    
    FAudioVolume_Param();
};

