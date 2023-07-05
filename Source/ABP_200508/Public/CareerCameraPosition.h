#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CareerCameraPosition.generated.h"

USTRUCT(BlueprintType)
struct FCareerCameraPosition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fChangeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fArmLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform transformCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform transformCameraArm;
    
    ABP_200508_API FCareerCameraPosition();
};

