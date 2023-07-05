#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "ELSSActorCommonInterface.h"
#include "ELSSWeaponProjectileInterface.h"
#include "ESSWeaponThrowProjectileState.h"
#include "ESSWeaponThrowProjectileType.h"
#include "SSProjectileHitInfo.h"
#include "SSProjectileLaunchInfo.h"
#include "ELSSWeaponThrowProjectile.generated.h"

class AELSSWeaponThrow;
class UELSSWeaponUserDesignComponent;
class UPrimitiveComponent;
class UProjectileMovementComponent;
class USkeletalMeshComponent;
class USphereComponent;

UCLASS(Abstract, Blueprintable)
class ABP_200508_API AELSSWeaponThrowProjectile : public AActor, public IELSSActorCommonInterface, public IELSSWeaponProjectileInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SphereComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProjectileMovementComponent* ProjectileMovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELSSWeaponUserDesignComponent* UserDesignComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSWeaponThrowProjectileType ProjectileType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AELSSWeaponThrow* OwnerWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 WeaponID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 MoveId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    ESSWeaponThrowProjectileState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LaunchInfo, meta=(AllowPrivateAccess=true))
    FSSProjectileLaunchInfo LaunchInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HitInfo, meta=(AllowPrivateAccess=true))
    FSSProjectileHitInfo HitInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EffectRadius;
    
public:
    AELSSWeaponThrowProjectile();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetInternalVisible(bool flg);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetExternalVisible(bool flg);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_State();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_LaunchInfo();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HitInfo();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnProjectileImpactForClient(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnProjectileImpact(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnProjectileBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    
    
    // Fix for true pure virtual functions not being implemented
};

