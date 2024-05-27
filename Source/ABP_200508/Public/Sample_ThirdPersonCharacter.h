#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Engine/EngineTypes.h"
#include "Templates/SubclassOf.h"
#include "Sample_ThirdPersonCharacter.generated.h"

class AActor;
class AController;
class ASample_ThirdPersonProjectile;

UCLASS(Blueprintable)
class ABP_200508_API ASample_ThirdPersonCharacter : public ACharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentHealth, meta=(AllowPrivateAccess=true))
    float CurrentHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASample_ThirdPersonProjectile> ProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FireRate;
    
public:
    ASample_ThirdPersonCharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    float TakeDamage(float DamageTaken, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser);
    
protected:
    UFUNCTION(BlueprintCallable)
    void StopFire();
    
    UFUNCTION(BlueprintCallable)
    void StartFire();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCurrentHealth(float healthValue);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentHealth();
    
    UFUNCTION(BlueprintCallable)
    void OnHealthUpdate();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDead() const;
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void HandleFire();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealthRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentHealth() const;
    
};

