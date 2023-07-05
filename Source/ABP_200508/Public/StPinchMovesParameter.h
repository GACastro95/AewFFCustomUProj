#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "StPinchMovesParameter.generated.h"

USTRUCT(BlueprintType)
struct FStPinchMovesParameter : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DamageLv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Momentum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Pin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PinIndex;
    
    ABP_200508_API FStPinchMovesParameter();
};

