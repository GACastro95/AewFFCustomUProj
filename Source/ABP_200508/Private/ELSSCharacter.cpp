#include "ELSSCharacter.h"
#include "ELBuildBody.h"
#include "CharacterBasicProfiles.h"

bool AELSSCharacter::ShouldPlayFootstepSound() const {
    return false;
}

void AELSSCharacter::SetWrestlerProfile(const FELWrestlerProfile& InWrestlerProfile) {
}


void AELSSCharacter::SetSrcMeshComponentsToMerge(TArray<USkeletalMeshComponent*> inSrcMeshCompsToMerge) {
}

void AELSSCharacter::SetSpawnedMeshChara(ACharacter* inChara) {
}

void AELSSCharacter::SetInsignificateMeshes(TArray<USkeletalMeshComponent*> inMeshes) {
}

void AELSSCharacter::SetHairMesh(USkeletalMeshComponent* inHairMesh) {
}

void AELSSCharacter::SetExtraMeshes(TArray<USkeletalMeshComponent*> inExtraMeshes) {
}

void AELSSCharacter::SetEnableVisibleMergedMesh(bool flg, bool Force) {
}

void AELSSCharacter::ReductionBodyMaterial(USkeletalMeshComponent* inBodyMesh) {
}

void AELSSCharacter::PlayMontage(UAnimMontage* inMontage) {
}

void AELSSCharacter::PlayDefaultIdleMontage() {
}

USkeletalMesh* AELSSCharacter::MergeMeshes(TArray<USkeletalMesh*> inMeshesToMerge, TArray<USkeletalMeshComponent*> inMeshCompsToMerge) {
    return NULL;
}

FELWrestlerProfile AELSSCharacter::GetWrestlerProfile() const {
    return FELWrestlerProfile{};
}




UAnimMontage* AELSSCharacter::GetActiveMontage() {
    return NULL;
}

void AELSSCharacter::ApplySourceMeshMaterials(USkeletalMeshComponent* inMergedMesh, const EEditPartsSlot Slot, USkeletalMeshComponent* inSrcMesh) {
}

AELSSCharacter::AELSSCharacter() {
    this->BuildBody = CreateDefaultSubobject<UELBuildBody>(TEXT("BuildBody"));
    this->SpawnedMeshChara = NULL;
    this->HairMesh = NULL;
    this->CharacterProfilesClass = UCharacterBasicProfiles::StaticClass();
    this->CharacterProfiles = NULL;
    this->DefaultIdleMontage = NULL;
    this->MergedMeshComp = NULL;
    this->bVisibleMergedMesh = false;
}

