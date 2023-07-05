#include "ELSSWeaponMelee.h"
#include "Net/UnrealNetwork.h"

void AELSSWeaponMelee::SetRemainDurability(int32 Durability) {
}

void AELSSWeaponMelee::OnRep_RemainDurability() {
}

int32 AELSSWeaponMelee::GetRemainDurability() const {
    return 0;
}

int32 AELSSWeaponMelee::DecreaseRemainDurability() {
    return 0;
}

void AELSSWeaponMelee::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AELSSWeaponMelee, RemainDurability);
}

AELSSWeaponMelee::AELSSWeaponMelee() {
    this->RemainDurability = 0;
}

