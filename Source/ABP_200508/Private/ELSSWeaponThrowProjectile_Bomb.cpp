#include "ELSSWeaponThrowProjectile_Bomb.h"
#include "ESSWeaponThrowProjectileType.h"

AELSSWeaponThrowProjectile_Bomb::AELSSWeaponThrowProjectile_Bomb(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProjectileType = ESSWeaponThrowProjectileType::Bomb;
    this->LifeSpanAfterImpact = 60.00f;
    this->DamageRadius = 200.00f;
}

bool AELSSWeaponThrowProjectile_Bomb::TakeDamageToAny(AActor* OtherActor) {
    return false;
}

void AELSSWeaponThrowProjectile_Bomb::PerformOnImpact_Multicast_Implementation(const FVector_NetQuantize10& NewLocation) {
}

void AELSSWeaponThrowProjectile_Bomb::ApplyDamage() {
}


