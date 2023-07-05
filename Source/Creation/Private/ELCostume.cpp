#include "ELCostume.h"

void UELCostume::UpdateEyeHighlightParameter(float HighlightLevel) {
}

void UELCostume::UpdateEyeColorParameter(const float Hue, const float Luminous, const float Desaturation, const bool bLeft) {
}

void UELCostume::UnbindDynamicMaterials(USkeletalMeshComponent* SkeletalMeshComponent) {
}

void UELCostume::SetVectorParameter(const FName& ParameterName, const FVector& NewValue, const FName Specific) {
}

void UELCostume::SetupPartsMeshComponent(USkeletalMeshComponent* Parent, USkeletalMeshComponent* Child, const FName CollisionProfileName) {
}

void UELCostume::SetupCostume(const FAttireParam& Base, const FAttireParam& Attire, const FAttireParam& Extra) {
}

void UELCostume::SetTextureParameter(const FName& ParameterName, UTexture* NewTexture, const FName Specific) {
}

void UELCostume::SetScalarParameter(const FName& ParameterName, const float NewValue, const FName Specific) {
}

void UELCostume::SetMaterialSectionVisibility(USkeletalMeshComponent* SkeletalMeshComponent, const TSet<FName>& MaterialSlotNames, const bool bShow) {
}

void UELCostume::SetAdjustSkinToneEnable(const bool bFlag) {
}

void UELCostume::ResetMaterials() {
}

void UELCostume::Reset() {
}

void UELCostume::RemovePartsMesh(const EEditPartsSlot Slot) {
}

USkeletalMeshComponent* UELCostume::OnUpdateParts_Implementation(const EEditPartsSlot Slot, USkeletalMesh* NewMesh, const FName InSocketName) {
    return NULL;
}

USkeletalMeshComponent* UELCostume::OnSetupParts_Implementation(const EEditPartsSlot Slot, const FEditPartsData& EditPartsData) {
    return NULL;
}

bool UELCostume::OnSetupPaint_Implementation(const FEditPaintData& EditPaintData) {
    return false;
}

void UELCostume::OnSetupAttire_Implementation(const FAttireData& AttireData) {
}

void UELCostume::LoadAttireParam(const FAttireParam& InParam, FAttireData& Out) {
}

bool UELCostume::IsEquippedParts(const FEditPartsCategoryName& PartsCategoryName) {
    return false;
}

USkeletalMeshComponent* UELCostume::GetPartsMeshWithResult(const EEditPartsSlot Slot, EBasicFindResult& resultType) {
    return NULL;
}

bool UELCostume::GetPartsMesh(const EEditPartsSlot Slot, USkeletalMeshComponent*& Out) const {
    return false;
}

void UELCostume::GetMeshes_Implementation(TArray<USkeletalMeshComponent*>& List) {
}

UMaterialInstanceDynamic* UELCostume::GetMaterialInstanceDynamic(const FName& MaterialSlotName) {
    return NULL;
}

UMaterialInstanceDynamic* UELCostume::GetEyeMaterialInstanceDynamic(const bool bLeft) {
    return NULL;
}

void UELCostume::BindDynamicMaterials(USkeletalMeshComponent* SkeletalMeshComponent, UMaterialInterface* OverrideMaterial) {
}

void UELCostume::BindDynamicMaterial(USkeletalMeshComponent* SkeletalMeshComponent, const TSet<FName>& MaterialSlotNames, UMaterialInterface* OverrideMaterial) {
}

USkeletalMeshComponent* UELCostume::AddPartsMesh(const EEditPartsSlot Slot, USkeletalMesh* NewMesh, const FName InSocketName) {
    return NULL;
}

USkeletalMeshComponent* UELCostume::AddPartsAsset(const EEditPartsSlot Slot, UEditWrestlerPartsAsset* Asset, const int32 MeshIndex) {
    return NULL;
}

UELCostume::UELCostume() {
    this->MaskMaterial = NULL;
    this->bCanSkinTone = true;
    this->DefaultEyeHighlightLevel = 1.00f;
}

