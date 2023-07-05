#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SSUseItemParam.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FSSUseItemParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* UseItemSt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* UseItemLo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* UseItemEn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UseItemDelayTime;
    
    ABP_200508_API FSSUseItemParam();
};

