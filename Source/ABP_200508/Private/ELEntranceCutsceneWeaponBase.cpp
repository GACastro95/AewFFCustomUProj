#include "ELEntranceCutsceneWeaponBase.h"
#include "Components/SceneComponent.h"

AELEntranceCutsceneWeaponBase::AELEntranceCutsceneWeaponBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->WeaponNo = 0;
    this->AnimMontage = NULL;
}


void AELEntranceCutsceneWeaponBase::SetMesh(UStaticMesh* StaticMesh, USkeletalMesh* SkeletalMesh) {
}


