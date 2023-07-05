#include "ELSSWeaponTrapObject_Barricade.h"
#include "Net/UnrealNetwork.h"

void AELSSWeaponTrapObject_Barricade::TakeDamage_Imple(int32 Damage, const FSSDamageEvent& SSDamageEvent, AActor* DamageCauser) {
}

void AELSSWeaponTrapObject_Barricade::OnRep_IsBroken() {
}

void AELSSWeaponTrapObject_Barricade::Break_Imple() {
}

void AELSSWeaponTrapObject_Barricade::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AELSSWeaponTrapObject_Barricade, IsBroken);
}

AELSSWeaponTrapObject_Barricade::AELSSWeaponTrapObject_Barricade() {
    this->IsBroken = false;
    this->SkeletalMesh_BeforeBroken = NULL;
    this->SkeletalMesh_AfterBroken = NULL;
    this->SoundCue_Break = NULL;
    this->ImpulseStrength = 100.00f;
    this->DamageToPlayer = 20.00f;
    this->LifeSpanAfterBroken = 5.00f;
}

