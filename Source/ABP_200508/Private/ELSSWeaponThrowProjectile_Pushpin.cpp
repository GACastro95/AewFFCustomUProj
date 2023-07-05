#include "ELSSWeaponThrowProjectile_Pushpin.h"
#include "Net/UnrealNetwork.h"

void AELSSWeaponThrowProjectile_Pushpin::PerformOnImpact_Multicast_Implementation(const FVector_NetQuantize10& NewLocation, float inYaw) {
}


void AELSSWeaponThrowProjectile_Pushpin::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AELSSWeaponThrowProjectile_Pushpin, IsSteppedOn);
}

AELSSWeaponThrowProjectile_Pushpin::AELSSWeaponThrowProjectile_Pushpin() {
    this->LifeSpanAfterImpact = 60.00f;
    this->SpreadPlacementProfileName = TEXT("IgnoreOnlyPawn");
    this->TraceDistanceOnImpact = 10000.00f;
    this->IsSteppedOn = false;
    this->SoundCue_Pushpin = NULL;
}

