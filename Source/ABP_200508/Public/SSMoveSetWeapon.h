#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ESSHpItemBonusLevel.h"
#include "ESSMoveLevel.h"
#include "ESSWrestlerType.h"
#include "SSMoveSetWeapon.generated.h"

USTRUCT(BlueprintType)
struct FSSMoveSetWeapon : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSWrestlerType WrestlerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MoveSetLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSMoveLevel Weapon1_Lv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSMoveLevel Weapon2_Lv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSHpItemBonusLevel HpItemBonus_Lv;
    
    ABP_200508_API FSSMoveSetWeapon();
};

