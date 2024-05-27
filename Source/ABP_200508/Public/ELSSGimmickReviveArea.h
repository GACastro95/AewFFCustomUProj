#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ELSSGimmickBase.h"
#include "ELSSGimmickReviveArea.generated.h"

class AActor;
class AELSSPlayer;
class UPrimitiveComponent;
class USphereComponent;

UCLASS(Abstract, Blueprintable)
class ABP_200508_API AELSSGimmickReviveArea : public AELSSGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* AreaCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RecoveryKoHPCycle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RecoveryKoHPRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReviveHpRecoverPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AELSSPlayer*> OverlapPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isAnyOverlap;
    
public:
    AELSSGimmickReviveArea(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateRiveArea(bool NewIsAnyOverlap);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnAreaEndOverlap(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnAreaBeginOverlap(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

