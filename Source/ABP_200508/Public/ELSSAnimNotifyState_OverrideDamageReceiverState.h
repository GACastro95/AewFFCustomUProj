#pragma once
#include "CoreMinimal.h"
#include "ELSSAnimNotifyStateBase.h"
#include "ESSDamageReceiverState.h"
#include "ELSSAnimNotifyState_OverrideDamageReceiverState.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ABP_200508_API UELSSAnimNotifyState_OverrideDamageReceiverState : public UELSSAnimNotifyStateBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSDamageReceiverState OverrideState;
    
public:
    UELSSAnimNotifyState_OverrideDamageReceiverState();
};

