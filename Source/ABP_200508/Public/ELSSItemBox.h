#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Engine/NetSerialization.h"
#include "ELSSActorCommonInterface.h"
#include "ELSSInteractableObjectInterface.h"
#include "ESSDamageReason.h"
#include "ESSItemBoxType.h"
#include "ESSRarity.h"
#include "ESSSpawnPickupSE.h"
#include "ELSSItemBox.generated.h"

class AELSSPlayer;
class UMeshComponent;

UCLASS(Blueprintable)
class ABP_200508_API AELSSItemBox : public AActor, public IELSSInteractableObjectInterface, public IELSSActorCommonInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitEffectLineTraceScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> HitEffectLineTraceObjectTypes;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSItemBoxType ItemBoxType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ItemSpawnOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CeilCheckOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartLocationOffsetZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CeilCheckOffsetZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LandCheckOffsetZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InteractUIOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DotIconLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DotIconBaseLocationOffsetZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeTimeInDamageArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayDestroyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize TargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float LandLocationZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator TargetRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float TargetRotationYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool SkipAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float SpawnedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OpenedTime, meta=(AllowPrivateAccess=true))
    float OpenedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SpawnPickupSE, meta=(AllowPrivateAccess=true))
    ESSSpawnPickupSE SpawnPickupSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BlockCollisionEnabled, meta=(AllowPrivateAccess=true))
    bool BlockCollisionEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELSSPlayer* OpenCauser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LandCheckCapsuleHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LandCheckCapsuleRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallingAccel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> LandCheckTraceObjectTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 TeamId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxLockNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_UnLockedPlayerSlotNos, meta=(AllowPrivateAccess=true))
    TArray<int32> UnLockedPlayerSlotNos;
    
public:
    AELSSItemBox();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateTeamView();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool UpdateFalling_Native(float inDeltaSeconds, bool inApplyToTransform);
    
public:
    UFUNCTION(BlueprintCallable)
    void Unlock(AELSSPlayer* inPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SpawnItems();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetInternalVisible(bool flg);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetExternalVisible(bool flg);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetBoxLocation(const FVector InLocation, bool inApplyToTransform);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBlockCollision_Impl();
    
    UFUNCTION(BlueprintCallable)
    void SetBlockCollision();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaySpawnPickupSE(ESSRarity inRarity);
    
private:
    UFUNCTION(BlueprintCallable)
    void PlayHitEffect(const FVector& StartLoc, AActor* DamageCauser, ESSDamageReason DamageReason);
    
public:
    UFUNCTION(BlueprintCallable)
    void OpenBox_Native();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenBox();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUnLock();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_UnLockedPlayerSlotNos();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_SpawnPickupSE();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OpenedTime();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BlockCollisionEnabled();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsViewTargetTeamBox() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTreasureBox() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTeamBox() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpened() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMultiLockedBox() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsInteractableObject() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUnLockedCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTeamId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UMeshComponent* GetMeshForPlaySE() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxLock() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESSItemBoxType GetItemBoxType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckWaitingUnLock(const AELSSPlayer* inPlayer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckUnLockedPlayer(const AELSSPlayer* inPlayer) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ApplyLocationToTransform();
    
    
    // Fix for true pure virtual functions not being implemented
};

