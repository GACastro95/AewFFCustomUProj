#include "ELSSWeaponGun.h"
#include "ESSWeaponType.h"
#include "Net/UnrealNetwork.h"

AELSSWeaponGun::AELSSWeaponGun(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WeaponType = ESSWeaponType::Gun;
    this->ammo = 0;
}

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


