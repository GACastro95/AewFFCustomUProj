#pragma once
#include "CoreMinimal.h"
#include "ESSHomingMode.h"
#include "SSBodyHomingParam.generated.h"

USTRUCT(BlueprintType)
struct FSSBodyHomingParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSHomingMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotateSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InternalRotationKeepTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool WithCameraHoming;
    
    ABP_200508_API FSSBodyHomingParam();
};

