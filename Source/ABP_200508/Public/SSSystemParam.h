#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SSSystemParam.generated.h"

USTRUCT(BlueprintType)
struct FSSSystemParam : public FTableRowBase {
    GENERATED_BODY()
public:
    ABP_200508_API FSSSystemParam();
};

