#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ESSWrestlerType.h"
#include "SSWrestlerTypeResourceParam.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FSSWrestlerTypeResourceParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSWrestlerType WrestlerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TauntAnimMontage;
    
    ABP_200508_API FSSWrestlerTypeResourceParam();
};

