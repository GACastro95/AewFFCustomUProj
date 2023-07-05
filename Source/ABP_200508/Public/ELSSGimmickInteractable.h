#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "ELSSGimmickBase.h"
#include "ELSSInteractableObjectInterface.h"
#include "Templates/SubclassOf.h"
#include "ELSSGimmickInteractable.generated.h"

class AActor;
class UBoxComponent;
class UELSSActionStateBase;
class UPrimitiveComponent;
class USceneComponent;

UCLASS(Blueprintable)
class ABP_200508_API AELSSGimmickInteractable : public AELSSGimmickBase, public IELSSInteractableObjectInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UELSSActionStateBase> OperateStateClass;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* RootComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBoxComponent* InteractCollision;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InteractUIOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DotIconLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DotIconBaseLocationOffsetZ;
    
public:
    AELSSGimmickInteractable();
    UFUNCTION(BlueprintCallable)
    void OnEndOverlapInteract(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlapInteract(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    
    // Fix for true pure virtual functions not being implemented
};

