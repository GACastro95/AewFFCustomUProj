#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "ELAnimNotifyStateBase.generated.h"

class AELCharacter_Native;
class UAnimSequenceBase;
class USkeletalMeshComponent;

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class ABP_200508_API UELAnimNotifyStateBase : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UELAnimNotifyStateBase();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELCharacter_Native* GetMainAnimCharacter_N(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) const;
    
};

