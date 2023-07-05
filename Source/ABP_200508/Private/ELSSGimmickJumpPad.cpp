#include "ELSSGimmickJumpPad.h"
#include "Components/SkeletalMeshComponent.h"

AELSSGimmickJumpPad::AELSSGimmickJumpPad() {
    this->JumpPadMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("JumpPadMeshComponent"));
}

