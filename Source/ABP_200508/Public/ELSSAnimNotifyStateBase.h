#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "ELSSAnimNotifyStateBase.generated.h"

class AELSSPlayer;
class USkeletalMeshComponent;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ABP_200508_API UELSSAnimNotifyStateBase : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UELSSAnimNotifyStateBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELSSPlayer* GetOwnerPlayer(USkeletalMeshComponent* inMeshComp) const;
    
};

