#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SSCameraStateControlParam.generated.h"

USTRUCT(BlueprintType)
struct FSSCameraStateControlParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpingDown_BeginHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseStateMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VehicleMovingConditionSpeedKph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HorseMovingConditionSpeedKph;
    
    ABP_200508_API FSSCameraStateControlParam();
};

