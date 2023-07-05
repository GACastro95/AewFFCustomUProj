#pragma once
#include "CoreMinimal.h"
#include "ESSHomingMode.h"
#include "SSCameraHomingParam.generated.h"

USTRUCT(BlueprintType)
struct FSSCameraHomingParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSHomingMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotateSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FixTargetYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableWhenUserRotate;
    
    ABP_200508_API FSSCameraHomingParam();
};

