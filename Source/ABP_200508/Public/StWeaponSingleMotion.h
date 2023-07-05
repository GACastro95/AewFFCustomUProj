#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "StWeaponSingleMotion.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FStWeaponSingleMotion : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage_Char;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage_Weapon;
    
    ABP_200508_API FStWeaponSingleMotion();
};

