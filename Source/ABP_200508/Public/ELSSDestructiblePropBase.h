#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "ELSSActorCommonInterface.h"
#include "ESSDamageReason.h"
#include "ELSSDestructiblePropBase.generated.h"

class UDestructibleComponent;
class UDestructibleMesh;
class USceneComponent;
class USoundAtomCue;
class UStaticMeshComponent;

UCLASS(Abstract, Blueprintable)
class ABP_200508_API AELSSDestructiblePropBase : public AActor, public IELSSActorCommonInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDestructibleComponent* DestructibleComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDestructibleMesh* DestructibleMeshAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* SoundCue_Break;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCopyMaterialToDM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPhysicsDP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableInvolveFeedbackReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpulseStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageToPlayer;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitEffectLineTraceScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> HitEffectLineTraceObjectTypes;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsBroken, meta=(AllowPrivateAccess=true))
    bool IsBroken;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AttentionPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RemainDurability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxDurability;
    
public:
    AELSSDestructiblePropBase();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Setup();
    
    UFUNCTION(BlueprintCallable)
    void SetRemainDurability(int32 Durability);
    
private:
    UFUNCTION(BlueprintCallable)
    void PlayHitEffect(const FVector& StartLoc, AActor* DamageCauser, ESSDamageReason DamageReason);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsBroken();
    
public:
    UFUNCTION(BlueprintCallable)
    int32 GetRemainDurability() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetMaxDurability() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void Break_Imple();
    
public:
    UFUNCTION(BlueprintCallable)
    int32 AddDurability(int32 Value);
    
private:
    UFUNCTION(BlueprintCallable)
    void AddAttentionPoint(AActor* Actor);
    
    
    // Fix for true pure virtual functions not being implemented
};

