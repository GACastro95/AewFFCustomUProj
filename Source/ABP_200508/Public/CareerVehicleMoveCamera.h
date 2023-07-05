#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CareerVehicleMoveCamera.generated.h"

USTRUCT(BlueprintType)
struct FCareerVehicleMoveCamera : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpringArmLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpringArmRotY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FieldOfView;
    
    ABP_200508_API FCareerVehicleMoveCamera();
};

