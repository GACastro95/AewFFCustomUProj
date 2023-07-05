#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ECareerEventMoveCameraType.h"
#include "CareerEventCameraMove.generated.h"

USTRUCT(BlueprintType)
struct FCareerEventCameraMove {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECareerEventMoveCameraType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECareerEventMoveCameraType Type_SW;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Move;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    ABP_200508_API FCareerEventCameraMove();
};

