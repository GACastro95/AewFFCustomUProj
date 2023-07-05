#include "ELSSWeaponThrowProjectile_FireBottle.h"
#include "Components/BoxComponent.h"
#include "Particles/ParticleSystemComponent.h"


void AELSSWeaponThrowProjectile_FireBottle::PerformOnImpact_Multicast_Implementation(const FVector_NetQuantize10& NewLocation, float inYaw) {
}

void AELSSWeaponThrowProjectile_FireBottle::OnEndOverlapTrigger(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AELSSWeaponThrowProjectile_FireBottle::OnBeginOverlapTrigger(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

AELSSWeaponThrowProjectile_FireBottle::AELSSWeaponThrowProjectile_FireBottle() {
    this->ParticleSystemComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystemComponent"));
    this->TriggerCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerCollision"));
    this->LifeSpanAfterImpact = 60.00f;
    this->SpreadPlacementProfileName = TEXT("IgnoreOnlyPawn");
    this->TraceDistanceOnImpact = 10000.00f;
    this->BadStatusDuration = 3.00f;
    this->BadStatusIntervalTime = 0.25f;
}

