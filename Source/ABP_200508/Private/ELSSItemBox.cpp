#include "ELSSItemBox.h"
#include "Net/UnrealNetwork.h"

bool AELSSItemBox::UpdateFalling_Native(float inDeltaSeconds, bool inApplyToTransform) {
    return false;
}

void AELSSItemBox::SpawnItems_Implementation() {
}

void AELSSItemBox::SetInternalVisible(bool flg) {
}

void AELSSItemBox::SetExternalVisible(bool flg) {
}

void AELSSItemBox::SetBoxLocation(const FVector InLocation, bool inApplyToTransform) {
}


void AELSSItemBox::SetBlockCollision() {
}


void AELSSItemBox::PlayHitEffect(const FVector& StartLoc, AActor* DamageCauser, ESSDamageReason DamageReason) {
}

void AELSSItemBox::OpenBox_Native() {
}


void AELSSItemBox::OnRep_SpawnPickupSE() {
}

void AELSSItemBox::OnRep_OpenedTime() {
}

void AELSSItemBox::OnRep_BlockCollisionEnabled() {
}

bool AELSSItemBox::IsOpened() const {
    return false;
}

bool AELSSItemBox::IsInteractableObject_Implementation() const {
    return false;
}


ESSItemBoxType AELSSItemBox::GetItemBoxType() const {
    return ESSItemBoxType::None;
}

void AELSSItemBox::ApplyLocationToTransform() {
}

void AELSSItemBox::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AELSSItemBox, TargetLocation);
    DOREPLIFETIME(AELSSItemBox, LandLocationZ);
    DOREPLIFETIME(AELSSItemBox, TargetRotationYaw);
    DOREPLIFETIME(AELSSItemBox, SkipAnim);
    DOREPLIFETIME(AELSSItemBox, SpawnedTime);
    DOREPLIFETIME(AELSSItemBox, OpenedTime);
    DOREPLIFETIME(AELSSItemBox, SpawnPickupSE);
    DOREPLIFETIME(AELSSItemBox, BlockCollisionEnabled);
}

AELSSItemBox::AELSSItemBox() {
    this->HitEffectLineTraceScale = 0.50f;
    this->ItemBoxType = ESSItemBoxType::Common;
    this->SpawnDuration = 0.00f;
    this->StartLocationOffsetZ = 400.00f;
    this->CeilCheckOffsetZ = 200.00f;
    this->LandCheckOffsetZ = -10000.00f;
    this->DotIconBaseLocationOffsetZ = 0.00f;
    this->LifeTimeInDamageArea = 0.00f;
    this->DelayDestroyTime = 0.10f;
    this->LandLocationZ = 0.00f;
    this->TargetRotationYaw = 0.00f;
    this->SkipAnim = false;
    this->SpawnedTime = 0.00f;
    this->OpenedTime = -1.00f;
    this->SpawnPickupSE = ESSSpawnPickupSE::None;
    this->BlockCollisionEnabled = false;
    this->LandCheckCapsuleHeight = 0.00f;
    this->LandCheckCapsuleRadius = 0.00f;
    this->FallingAccel = 0.00f;
    this->FallingSpeed = 0.00f;
}

