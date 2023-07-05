#pragma once
#include "CoreMinimal.h"
#include "ELSSActionStateBase.h"
#include "ELSSCompleteUseItemState.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UELSSCompleteUseItemState : public UELSSActionStateBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UseItemDelayTime;
    
public:
    UELSSCompleteUseItemState();
private:
    UFUNCTION(BlueprintCallable)
    void UseItem();
    
};

