#include "ELSSWeaponGun.h"
#include "Net/UnrealNetwork.h"

void AELSSWeaponGun::SetAmmo(int32 NewAmmo) {
}

void AELSSWeaponGun::OnRep_Ammo() {
}

int32 AELSSWeaponGun::GetAmmo() const {
    return 0;
}

int32 AELSSWeaponGun::DecreaseAmmo() {
    return 0;
}

void AELSSWeaponGun::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AELSSWeaponGun, ammo);
}

AELSSWeaponGun::AELSSWeaponGun() {
    this->ammo = 0;
}

