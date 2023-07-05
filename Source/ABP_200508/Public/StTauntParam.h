#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "StTauntParam.generated.h"

USTRUCT(BlueprintType)
struct FStTauntParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AddValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CancelSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitSec;
    
    ABP_200508_API FStTauntParam();
};

