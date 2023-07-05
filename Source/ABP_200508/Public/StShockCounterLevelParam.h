#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "StShockCounterLevelParam.generated.h"

USTRUCT(BlueprintType)
struct FStShockCounterLevelParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> RingSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> ArenaSec;
    
    ABP_200508_API FStShockCounterLevelParam();
};

