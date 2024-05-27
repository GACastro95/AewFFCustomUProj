#include "ELSSWeaponThrowProjectile_Oil.h"
#include "ESSWeaponThrowProjectileType.h"

AELSSWeaponThrowProjectile_Oil::AELSSWeaponThrowProjectile_Oil(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProjectileType = ESSWeaponThrowProjectileType::Oil;
    this->LifeSpanAfterImpact = 60.00f;
    this->SpreadPlacementProfileName = TEXT("IgnoreOnlyPawn");
    this->TraceDistanceOnImpact = 10000.00f;
}

void AELSSWeaponThrowProjectile_Oil::PerformOnImpact_Multicast_Implementation(const FVector_NetQuantize10& NewLocation, float inYaw) {
}



