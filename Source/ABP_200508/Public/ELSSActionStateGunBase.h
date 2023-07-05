#pragma once
#include "CoreMinimal.h"
#include "ELSSActionStateBase.h"
#include "ELSSActionStateGunBase.generated.h"

class AELSSWeaponGun;

UCLASS(Blueprintable)
class ABP_200508_API UELSSActionStateGunBase : public UELSSActionStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELSSWeaponGun* EquippedGunTemp;
    
    UELSSActionStateGunBase();
};

