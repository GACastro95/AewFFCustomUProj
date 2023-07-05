#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "ELSSActorCommonInterface.h"
#include "ESSDamageReason.h"
#include "ESSWeaponTrapMode.h"
#include "ESSWeaponTrapObjectType.h"
#include "ELSSWeaponTrapObject.generated.h"

class AELSSPlayer;
class UBoxComponent;
class UELSSWeaponUserDesignComponent;
class USkeletalMeshComponent;
class USoundAtomCue;
class UStaticMeshComponent;

UCLASS(Abstract, Blueprintable)
class ABP_200508_API AELSSWeaponTrapObject : public AActor, public IELSSActorCommonInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELSSWeaponUserDesignComponent* UserDesignComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* CheckPutTriggerCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* GuideMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSWeaponTrapObjectType ObjectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ObjectOwner, meta=(AllowPrivateAccess=true))
    AELSSPlayer* objectOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Mode, meta=(AllowPrivateAccess=true))
    ESSWeaponTrapMode ModeRep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCanPutGuideVisiual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CheckPutTriggerProfileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> TempActorsToIgnore;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* SoundCue_Put;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitEffectLineTraceScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> HitEffectLineTraceObjectTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* SoundCue_Hit;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsReserveDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RemainDurability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxDurability;
    
public:
    AELSSWeaponTrapObject();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UpdateGuideVisual(bool NewCanPut);
    
    UFUNCTION(BlueprintCallable)
    void Setup(AELSSPlayer* NewObjectOwner, ESSWeaponTrapMode Mode);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetRemainDurability(int32 Durability);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetObjectOwner(AELSSPlayer* NewOwner);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetInternalVisible(bool flg);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetGuideVisual(bool NewCanPut);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetExternalVisible(bool flg);
    
    UFUNCTION(BlueprintCallable)
    bool ReserveDestroy();
    
    UFUNCTION(BlueprintCallable)
    void Put();
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlayHitEffect(const FVector& StartLoc, AActor* DamageCauser, ESSDamageReason DamageReason);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ObjectOwner(AELSSPlayer* lastOwner);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_Mode();
    
    UFUNCTION(BlueprintCallable)
    int32 GetRemainDurability() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESSWeaponTrapObjectType GetObjectType() const;
    
    UFUNCTION(BlueprintCallable)
    AELSSPlayer* GetObjectOwner() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetMaxDurability() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsBroken() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetIsAfterPut() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ChangeMode_Trap();
    
    UFUNCTION(BlueprintCallable)
    void ChangeMode_Guide();
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangeMode(ESSWeaponTrapMode Mode);
    
    UFUNCTION(BlueprintCallable)
    bool CanPut() const;
    
    UFUNCTION(BlueprintCallable)
    int32 AddDurability(int32 Value);
    
    
    // Fix for true pure virtual functions not being implemented
};

