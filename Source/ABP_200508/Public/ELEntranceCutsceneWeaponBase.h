#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ELEntranceCutsceneWeaponBase.generated.h"

class UAnimMontage;
class USkeletalMesh;
class UStaticMesh;

UCLASS(Blueprintable)
class ABP_200508_API AELEntranceCutsceneWeaponBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeaponNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AnimMontage;
    
    AELEntranceCutsceneWeaponBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Setup(int32 InWeaponNo);
    
    UFUNCTION(BlueprintCallable)
    void SetMesh(UStaticMesh* StaticMesh, USkeletalMesh* SkeletalMesh);
    
};

