#include "ELSSWeaponThrowProjectile_Ball.h"
#include "ESSWeaponThrowProjectileType.h"

AELSSWeaponThrowProjectile_Ball::AELSSWeaponThrowProjectile_Ball(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProjectileType = ESSWeaponThrowProjectileType::Ball;
    this->CollisionProfileAfterImpact = TEXT("PhysicsActor");
    this->LifeSpanAfterImpact = 1.00f;
    this->GravityScaleAfterImpact = 1.00f;
    this->bPlayedEffect = false;
}


