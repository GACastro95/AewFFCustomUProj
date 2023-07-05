#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ESSVehicleType.h"
#include "SSVehicleParam.generated.h"

USTRUCT(BlueprintType)
struct FSSVehicleParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSVehicleType VehicleType;
    
    ABP_200508_API FSSVehicleParam();
};

