#pragma once
#include "CoreMinimal.h"
#include "ECareerCutsceneBeltType.h"
#include "ECareerCutsceneCastType.h"
#include "ELEntranceCutsceneWeaponBase.h"
#include "ELCareerCutsceneBelt.generated.h"

class UAnimMontage;
class UMeshComponent;

UCLASS(Blueprintable)
class ABP_200508_API AELCareerCutsceneBelt : public AELEntranceCutsceneWeaponBase {
    GENERATED_BODY()
public:
    AELCareerCutsceneBelt(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UMeshComponent* GetMesh(ECareerCutsceneCastType Cast);
    
    UFUNCTION(BlueprintCallable)
    void Attach(ECareerCutsceneCastType InCast, FName InAttachBone, ECareerCutsceneBeltType InBletType, UAnimMontage* InAnimMontage);
    
};

