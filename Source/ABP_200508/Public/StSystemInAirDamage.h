#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "StSystemInAirDamage.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FStSystemInAirDamage : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Falling_Front;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Landing_Front;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Falling_Back;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Landing_Back;
    
    ABP_200508_API FStSystemInAirDamage();
};

