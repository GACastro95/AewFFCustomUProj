#include "ELSSWeaponUserDesignComponent.h"

UELSSWeaponUserDesignComponent::UELSSWeaponUserDesignComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UserTexture = NULL;
    this->SymbolTexture = NULL;
    this->DynamicMaterial_Logo = NULL;
    this->DynamicMaterial_Base = NULL;
    this->TargetSkeletalMeshComponent = NULL;
}


