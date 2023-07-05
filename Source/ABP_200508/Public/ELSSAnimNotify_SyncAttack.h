#pragma once
#include "CoreMinimal.h"
#include "ELSSAnimNotifyBase.h"
#include "ESSAttackHitDirMode.h"
#include "ELSSAnimNotify_SyncAttack.generated.h"

class UAnimSequenceBase;
class USkeletalMeshComponent;

UCLASS(Blueprintable, CollapseCategories)
class ABP_200508_API UELSSAnimNotify_SyncAttack : public UELSSAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AttackHitId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSAttackHitDirMode HitDirMode;
    
    UELSSAnimNotify_SyncAttack();
    UFUNCTION(BlueprintCallable)
    void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) const;
    
};

