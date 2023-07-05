#pragma once
#include "CoreMinimal.h"
#include "ELSSAnimNotifyStateBase.h"
#include "ELSSAnimNotifyState_AimOffset.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ABP_200508_API UELSSAnimNotifyState_AimOffset : public UELSSAnimNotifyStateBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ResetAimOffsetAngle;
    
public:
    UELSSAnimNotifyState_AimOffset();
};

