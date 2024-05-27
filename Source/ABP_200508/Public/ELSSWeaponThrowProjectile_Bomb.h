#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "ELSSWeaponThrowProjectile.h"
#include "ELSSWeaponThrowProjectile_Bomb.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable)
class ABP_200508_API AELSSWeaponThrowProjectile_Bomb : public AELSSWeaponThrowProjectile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeSpanAfterImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SplashEffectDatabaseRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageRadius;
    
public:
    AELSSWeaponThrowProjectile_Bomb(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    bool TakeDamageToAny(AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void PerformOnImpact_Multicast(const FVector_NetQuantize10& NewLocation);
    
    UFUNCTION(BlueprintCallable)
    void ApplyDamage();
    
};

