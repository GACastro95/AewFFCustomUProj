#pragma once
#include "CoreMinimal.h"
#include "ELAnimNotifyStateBase.h"
#include "StAOnColPoint.h"
#include "ELAnimNotifyState_AOn.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ABP_200508_API UELAnimNotifyState_AOn : public UELAnimNotifyStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStAOnColPoint CollisionParts_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWeapon_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWeaponHitEffect_N;
    
    UELAnimNotifyState_AOn();
};

