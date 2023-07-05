#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "StRingEscapeData.generated.h"

USTRUCT(BlueprintType)
struct FStRingEscapeData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fDownSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fRecoveryHP;
    
    ABP_200508_API FStRingEscapeData();
};

