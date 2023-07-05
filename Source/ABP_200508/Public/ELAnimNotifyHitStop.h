#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ELAnimNotifyHitStop.generated.h"

class AELCharacter_Native;
class UAnimSequenceBase;
class USkeletalMeshComponent;

UCLASS(Blueprintable, CollapseCategories)
class ABP_200508_API UELAnimNotifyHitStop : public UAnimNotify {
    GENERATED_BODY()
public:
    UELAnimNotifyHitStop();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELCharacter_Native* GetMainAnimCharacter_N(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) const;
    
};

