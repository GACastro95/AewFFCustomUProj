#include "ELSSWeaponTrap.h"
#include "Components/SkeletalMeshComponent.h"
#include "Net/UnrealNetwork.h"

void AELSSWeaponTrap::SetQuantity(int32 inQuantity) {
}

void AELSSWeaponTrap::OnRep_StockedObject() {
}

void AELSSWeaponTrap::OnRep_Quantity() {
}

int32 AELSSWeaponTrap::GetQuantity() const {
    return 0;
}

int32 AELSSWeaponTrap::DecreaseQuantity() {
    return 0;
}

void AELSSWeaponTrap::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AELSSWeaponTrap, StockedObjectRep);
    DOREPLIFETIME(AELSSWeaponTrap, Quantity);
}

AELSSWeaponTrap::AELSSWeaponTrap() {
    this->SkeletalMeshComponent_Attach = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent_Attach"));
    this->StockedObjectRep = NULL;
    this->StockedObjectLocal = NULL;
    this->Quantity = 0;
}

