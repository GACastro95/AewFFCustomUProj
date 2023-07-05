#include "ELSSWeaponBase.h"
#include "Components/SkeletalMeshComponent.h"
#include "ELSSWeaponUserDesignComponent.h"

bool AELSSWeaponBase::StickToPlayer(AELSSPlayer* inTarget, int32 inRequiredStateId, const FName& inAttachParamRowName) {
    return false;
}

void AELSSWeaponBase::Setup_Implementation(const FSSWeaponParam& weaponParam) {
}

UMeshComponent* AELSSWeaponBase::GetMesh() const {
    return NULL;
}

void AELSSWeaponBase::FinishSticking() {
}

AELSSWeaponBase::AELSSWeaponBase() {
    this->UserDesignComponent = CreateDefaultSubobject<UELSSWeaponUserDesignComponent>(TEXT("UserDesignComponent"));
    this->SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->WeaponType = ESSWeaponType::None;
    this->DefaultMeshScale = 1.00f;
    this->ScaleWhenDrop = 1.00f;
    this->Sticked = false;
    this->StickedPlayer = NULL;
    this->StickRequiredStateId = 0;
    this->StickFinishedVelocityXY = -200.00f;
    this->StickFinishedVelocityZ = 500.00f;
    this->StickFinishedVelocityGravity = 2.00f;
}

