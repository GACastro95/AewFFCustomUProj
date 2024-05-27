#pragma once
#include "CoreMinimal.h"
#include "ELSSWeaponThrowProjectile.h"
#include "ELSSWeaponThrowProjectile_Ball.generated.h"

UCLASS(Abstract, Blueprintable)
class ABP_200508_API AELSSWeaponThrowProjectile_Ball : public AELSSWeaponThrowProjectile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CollisionProfileAfterImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeSpanAfterImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GravityScaleAfterImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SplashEffectDatabaseRowName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayedEffect;
    
public:
    AELSSWeaponThrowProjectile_Ball(const FObjectInitializer& ObjectInitializer);

};

