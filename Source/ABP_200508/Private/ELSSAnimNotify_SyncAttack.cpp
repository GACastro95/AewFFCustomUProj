#include "ELSSAnimNotify_SyncAttack.h"

void UELSSAnimNotify_SyncAttack::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) {
}

UELSSAnimNotify_SyncAttack::UELSSAnimNotify_SyncAttack() {
    this->AttackHitId = 1;
    this->HitDirMode = ESSAttackHitDirMode::Default;
}

