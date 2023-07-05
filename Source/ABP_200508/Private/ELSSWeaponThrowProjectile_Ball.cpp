#include "ELSSWeaponThrowProjectile_Ball.h"

AELSSWeaponThrowProjectile_Ball::AELSSWeaponThrowProjectile_Ball() {
    this->CollisionProfileAfterImpact = TEXT("PhysicsActor");
    this->LifeSpanAfterImpact = 1.00f;
    this->GravityScaleAfterImpact = 1.00f;
    this->bPlayedEffect = false;
}

