#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "StShockCounterLevelParam.h"
#include "StShockCounterDownParam.generated.h"

USTRUCT(BlueprintType)
struct FStShockCounterDownParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> ShockLevelTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStShockCounterLevelParam> HPLevelTable;
    
    ABP_200508_API FStShockCounterDownParam();
};

