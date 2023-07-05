#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ESSAbilityCalcMethod.h"
#include "ESSAbilityKind.h"
#include "SSAbilityKindParam.generated.h"

USTRUCT(BlueprintType)
struct FSSAbilityKindParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSAbilityKind Kind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSAbilityCalcMethod CalcMethod;
    
    ABP_200508_API FSSAbilityKindParam();
};

