#include "ELSSWeaponThrowProjectile_Oil.h"

void AELSSWeaponThrowProjectile_Oil::PerformOnImpact_Multicast_Implementation(const FVector_NetQuantize10& NewLocation, float inYaw) {
}


AELSSWeaponThrowProjectile_Oil::AELSSWeaponThrowProjectile_Oil() {
    this->LifeSpanAfterImpact = 60.00f;
    this->SpreadPlacementProfileName = TEXT("IgnoreOnlyPawn");
    this->TraceDistanceOnImpact = 10000.00f;
}

