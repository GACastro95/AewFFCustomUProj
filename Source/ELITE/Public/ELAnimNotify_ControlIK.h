#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ControlIK.h"
#include "ELAnimNotify_ControlIK.generated.h"

class UAnimSequenceBase;
class USkeletalMeshComponent;

UCLASS(Blueprintable, CollapseCategories)
class ELITE_API UELAnimNotify_ControlIK : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FControlIK> Items;
    
    UELAnimNotify_ControlIK();
    UFUNCTION(BlueprintCallable)
    void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) const;
    
};

