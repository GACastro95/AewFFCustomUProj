#include "ELSSWeaponThrow.h"
#include "ESSWeaponType.h"
#include "Net/UnrealNetwork.h"

AELSSWeaponThrow::AELSSWeaponThrow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WeaponType = ESSWeaponType::Throw;
    this->MoveId = 0;
    this->StockedProjectile = NULL;
    this->VisualProjectile = NULL;
    this->Quantity = 0;
}

void AELSSWeaponThrow::SetQuantity(int32 inQuantity) {
}

void AELSSWeaponThrow::OnRep_Quantity() {
}

int32 AELSSWeaponThrow::GetQuantity() const {
    return 0;
}

int32 AELSSWeaponThrow::DecreaseQuantity() {
    return 0;
}

void AELSSWeaponThrow::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AELSSWeaponThrow, Quantity);
}


