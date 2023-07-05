#pragma once
#include "CoreMinimal.h"
#include "ESSCameraPlaceType.h"
#include "SSCameraCorrectVolumeInfo.generated.h"

USTRUCT(BlueprintType)
struct FSSCameraCorrectVolumeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSCameraPlaceType CameraPlaceType;
    
    ABP_200508_API FSSCameraCorrectVolumeInfo();
};

