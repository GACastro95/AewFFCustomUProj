#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SSCameraConfigParam.generated.h"

USTRUCT(BlueprintType)
struct FSSCameraConfigParam : public FTableRowBase {
    GENERATED_BODY()
public:
    ABP_200508_API FSSCameraConfigParam();
};

