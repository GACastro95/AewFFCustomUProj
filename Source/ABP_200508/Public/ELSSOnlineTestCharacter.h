#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EWrestlerID_N.h"
#include "GameFramework/Character.h"
#include "Templates/SubclassOf.h"
#include "ELSSOnlineTestCharacter.generated.h"

class AELSSOnlineTestAttackProjectile;

UCLASS(Blueprintable)
class ABP_200508_API AELSSOnlineTestCharacter : public ACharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EWrestlerID_N WrestlerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CostumeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 joinID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HP, meta=(AllowPrivateAccess=true))
    int32 HP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LocalHP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 maxHP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool dead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AELSSOnlineTestAttackProjectile> AttackProjectileType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AttackProjectileOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AfterDeadDuration;
    
public:
    AELSSOnlineTestCharacter();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SpawnAttackProjectile_RPC();
    
    UFUNCTION(BlueprintCallable)
    void SetWrestlerMeshParam(EWrestlerID_N inWrestlerId, int32 inCostumeID);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupMesh();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetJoinID(int32 InID);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHPDead();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IsInputMove() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHPDead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDeadForDestroy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetJoinID() const;
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ForceHPDead();
    
    UFUNCTION(BlueprintCallable)
    void DamageLocal(int32 NewDamage);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Damage(int32 NewDamage);
    
};

