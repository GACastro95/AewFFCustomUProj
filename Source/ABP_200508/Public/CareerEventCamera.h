#pragma once
#include "CoreMinimal.h"
#include "CareerEventCameraDOF.h"
#include "CareerEventCameraMove.h"
#include "CareerEventCamera.generated.h"

USTRUCT(BlueprintType)
struct FCareerEventCamera {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString No;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCareerEventCameraMove Move;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCareerEventCameraDOF DOF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCareerEventCameraDOF DOF_SW;
    
    ABP_200508_API FCareerEventCamera();
};

