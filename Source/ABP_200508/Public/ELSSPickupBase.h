#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "ELSSActorCommonInterface.h"
#include "ELSSInteractableObjectInterface.h"
#include "ESSPickupType.h"
#include "ESSRarity.h"
#include "ESSSpawnPickupReason.h"
#include "SSPickupTrans.h"
#include "SSProjectileLaunchInfoForPickup.h"
#include "ELSSPickupBase.generated.h"

class AELSSPickupBase;
class AELSSPlayer;
class UPrimitiveComponent;
class UProjectileMovementComponent;
class USphereComponent;

UCLASS(Abstract, Blueprintable)
class ABP_200508_API AELSSPickupBase : public AActor, public IELSSActorCommonInterface, public IELSSInteractableObjectInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SphereComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* InteractCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProjectileMovementComponent* ProjectileMovementComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSPickupType PickupType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 DatabaseId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSRarity Rarity;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LaunchInfo, meta=(AllowPrivateAccess=true))
    FSSProjectileLaunchInfoForPickup LaunchInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PickupTrans, meta=(AllowPrivateAccess=true))
    FSSPickupTrans PickupTrans;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsLaunchStop, meta=(AllowPrivateAccess=true))
    uint8 IsLaunchStop: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> OverlappingActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsCanTouch, meta=(AllowPrivateAccess=true))
    uint8 IsCanTouch: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PickupOwner, meta=(AllowPrivateAccess=true))
    AELSSPlayer* PickupOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsLastOwnerLocallyControlled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsCurrentEquipped: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> RarityEffectDatabaseRowNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* RarityEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LostEffectDatabaseRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LostEffectDelaySec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DestroyAfterLostEffectDelaySec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CalledLostEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LostSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LostTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReservedLostByTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float SpawnedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlaySpawnedSEConditionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ESSSpawnPickupReason SpawnReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InteractUIOffset;
    
public:
    AELSSPickupBase();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateLostTimer(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable)
    FName ToAttachParamRowName() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetPickupOwner(AELSSPlayer* NewOwner);
    
    UFUNCTION(BlueprintCallable)
    void SetInternalVisible(bool flg);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetExternalVisible(bool flg);
    
    UFUNCTION(BlueprintCallable)
    void RefreshVisibility();
    
    UFUNCTION(BlueprintCallable)
    bool PickupOnTouch(AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    bool PickupFailedOnFullInventory(AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Pickup(AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnUnEquipCurrent();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PickupTrans();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_PickupOwner();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_LaunchInfo();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsLaunchStop();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsCanTouch();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPickedup(AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnLaunchStop(const FHitResult& ImpactResult);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractEndOverlap(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractBeginOverlap(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnEquipCurrent(AELSSPickupBase* lastPickup, AELSSPlayer* NewOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCanTouch(bool flg);
    
protected:
    UFUNCTION(BlueprintCallable)
    void LostEffect_Impl();
    
public:
    UFUNCTION(BlueprintCallable)
    void LostEffect();
    
    UFUNCTION(BlueprintCallable)
    void Launch(const FVector& Velocity, float GravityScale);
    
    UFUNCTION(BlueprintCallable)
    bool IsBroken() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetValueForInventoryIcon() const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetMinimapLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsNeedInteract() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    bool DoInteract(AActor* OtherActor);
    
public:
    UFUNCTION(BlueprintCallable)
    void DetachRarityEffect();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DestroyAfterLostEffect();
    
    UFUNCTION(BlueprintCallable)
    bool CheckUpdateLostTimer() const;
    
public:
    UFUNCTION(BlueprintCallable)
    bool CheckCurrentEquipped() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanMinimapVisible() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanBePickup(const AActor* OtherActor, bool ignoreHasAuthority, bool& out_reasonIsFullInventory) const;
    
    UFUNCTION(BlueprintCallable)
    void AttachRarityEffect();
    
    
    // Fix for true pure virtual functions not being implemented
};

