#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "StAOnDamage.h"
#include "StAOnParam.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FStAOnParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> AttackMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStAOnDamage Damage;
    
    ABP_200508_API FStAOnParam();
};

