#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ELSSAnimNotifyBase.generated.h"

class AELSSPlayer;
class UELSSActionStateBase;
class USkeletalMeshComponent;

UCLASS(Blueprintable, CollapseCategories)
class ABP_200508_API UELSSAnimNotifyBase : public UAnimNotify {
    GENERATED_BODY()
public:
    UELSSAnimNotifyBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UELSSActionStateBase* GetOwnerPlayerState(USkeletalMeshComponent* inMeshComp) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELSSPlayer* GetOwnerPlayer(USkeletalMeshComponent* inMeshComp) const;
    
};

