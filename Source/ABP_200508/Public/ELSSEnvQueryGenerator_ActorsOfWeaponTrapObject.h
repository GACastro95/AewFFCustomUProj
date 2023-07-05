#pragma once
#include "CoreMinimal.h"
#include "ELSSEnvQueryGenerator_ActorsOfClassBase.h"
#include "ESSWeaponTrapObjectType.h"
#include "ELSSEnvQueryGenerator_ActorsOfWeaponTrapObject.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSEnvQueryGenerator_ActorsOfWeaponTrapObject : public UELSSEnvQueryGenerator_ActorsOfClassBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSWeaponTrapObjectType WeaponTrapObjectType;
    
    UELSSEnvQueryGenerator_ActorsOfWeaponTrapObject();
};

