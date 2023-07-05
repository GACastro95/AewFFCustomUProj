#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SSCameraPlaceParam.generated.h"

USTRUCT(BlueprintType)
struct FSSCameraPlaceParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetLengthOffsetByPlace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetLengthOffsetByPlaceInterp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetLengthOffsetByPitchScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetLengthOffsetByPitchScaleInterp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTargetLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTargetLengthInterp;
    
    ABP_200508_API FSSCameraPlaceParam();
};

