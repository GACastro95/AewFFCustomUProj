#include "ELSSWeaponThrowProjectile_Pushpin.h"
#include "ESSWeaponThrowProjectileType.h"
#include "Net/UnrealNetwork.h"

AELSSWeaponThrowProjectile_Pushpin::AELSSWeaponThrowProjectile_Pushpin(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProjectileType = ESSWeaponThrowProjectileType::Pushpin;
    this->LifeSpanAfterImpact = 60.00f;
    this->SpreadPlacementProfileName = TEXT("IgnoreOnlyPawn");
    this->TraceDistanceOnImpact = 10000.00f;
    this->IsSteppedOn = false;
    this->SoundCue_Pushpin = NULL;
}

void AELSSWeaponThrowProjectile_Pushpin::PerformOnImpact_Multicast_Implementation(const FVector_NetQuantize10& NewLocation, float inYaw) {
}


void AELSSWeaponThrowProjectile_Pushpin::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AELSSWeaponThrowProjectile_Pushpin, IsSteppedOn);
}


