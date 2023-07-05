#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BodyHomingParam.generated.h"

USTRUCT(BlueprintType)
struct FBodyHomingParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QuickStartSec;
    
    ABP_200508_API FBodyHomingParam();
};

