#pragma once
#include "CoreMinimal.h"
#include "ELSSAnimNotifyStateBase.h"
#include "ELSSAnimNotifyState_BodyHoming.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ABP_200508_API UELSSAnimNotifyState_BodyHoming : public UELSSAnimNotifyStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableTargetActor;
    
    UELSSAnimNotifyState_BodyHoming();

};

