#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SSStationalCameraLocatorParam.h"
#include "SSStationalCameraParam.generated.h"

USTRUCT(BlueprintType)
struct FSSStationalCameraParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSStationalCameraLocatorParam Param;
    
    ABP_200508_API FSSStationalCameraParam();
};

