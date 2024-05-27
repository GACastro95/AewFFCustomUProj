#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ESSAttackType.h"
#include "ESSDamageReason.h"
#include "ELSSDamageUtility.generated.h"

class UObject;

UCLASS(Blueprintable)
class ABP_200508_API UELSSDamageUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELSSDamageUtility();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ESSDamageReason ConvertToDamageReason(const UObject* WorldContextObject, ESSAttackType AttackType, bool IsPlayingSyncMotion, bool isWeaponAttack, bool isIgnoreGuard);
    
};

