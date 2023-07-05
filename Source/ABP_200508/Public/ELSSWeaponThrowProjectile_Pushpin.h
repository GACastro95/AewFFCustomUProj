#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "ELSSWeaponThrowProjectile.h"
#include "ELSSWeaponThrowProjectile_Pushpin.generated.h"

class USoundAtomCue;

UCLASS(Abstract, Blueprintable)
class ABP_200508_API AELSSWeaponThrowProjectile_Pushpin : public AELSSWeaponThrowProjectile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeSpanAfterImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SplashEffectDatabaseRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpreadPlacementProfileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceDistanceOnImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 IsSteppedOn: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* SoundCue_Pushpin;
    
public:
    AELSSWeaponThrowProjectile_Pushpin();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void PerformOnImpact_Multicast(const FVector_NetQuantize10& NewLocation, float inYaw);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpread();
    
};

