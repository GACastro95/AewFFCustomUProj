#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "SSAttackCollisionParam.h"
#include "SSAttackCollisionShapeBlend.h"
#include "SSAttackInfo.h"
#include "SSAttackOverlap.h"
#include "SSDamageEvent.h"
#include "SSInvolveInfo.h"
#include "ELSSAttackerComponent.generated.h"

class AActor;
class UCapsuleComponent;
class UPrimitiveComponent;
class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABP_200508_API UELSSAttackerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSAttackInfo AttackInfo;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCapsuleComponent*> AttackCollisions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ParentComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSAttackCollisionShapeBlend ShapeBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendTimeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSAttackOverlap> AttackOverlaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* InvolveCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InvolvePropDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InvolvePlayerDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSInvolveInfo InvolveInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* TrampCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> TrampActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrampVelocityDirectionFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrampDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrampVelocityCoef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrampVelocityMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExecutingAttack;
    
public:
    UELSSAttackerComponent();
    UFUNCTION(BlueprintCallable)
    void UpdateInvolveCollision();
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateCollisionShape();
    
    UFUNCTION(BlueprintCallable)
    bool TryInvolve(AActor* inReceiveActor, FSSInvolveInfo& inInvolveInfo);
    
    UFUNCTION(BlueprintCallable)
    bool TryAttack(AActor* inReceiveActor, FSSAttackInfo& inAttackInfo, UPrimitiveComponent* inAtkCollision);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetupInvolve(AActor* AttackUser, AActor* AttackOwner);
    
    UFUNCTION(BlueprintCallable)
    void SetParentComponent(USceneComponent* parentComp);
    
    UFUNCTION(BlueprintCallable)
    void SetCollisionOffset(const FVector& Offset);
    
    UFUNCTION(BlueprintCallable)
    void PerformInvolvePropOnly();
    
    UFUNCTION(BlueprintCallable)
    void PerformInvolvePlayerOnly();
    
    UFUNCTION(BlueprintCallable)
    void PerformInvolve();
    
    UFUNCTION(BlueprintCallable)
    void OnEndOverlapTramp(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnEndOverlapInvolve(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnEndOverlapAttack(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlapTramp(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlapInvolve(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlapAttack(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsEnableInvolve() const;
    
    UFUNCTION(BlueprintCallable)
    FSSInvolveInfo GetInvolveInfo() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceUpdateInvolveCollision();
    
    UFUNCTION(BlueprintCallable)
    void ForceUpdate();
    
    UFUNCTION(BlueprintCallable)
    void DeactivateAttack(int32 attackId);
    
    UFUNCTION(BlueprintCallable)
    void ClearAttack();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool CheckDamage(AActor* inOtherActor, const FSSDamageEvent& inDamageEvent);
    
public:
    UFUNCTION(BlueprintCallable)
    void ActivateAttack(const FSSAttackCollisionParam& inCollisionParam, const FSSAttackCollisionShapeBlend& inShapeBlend);
    
};

