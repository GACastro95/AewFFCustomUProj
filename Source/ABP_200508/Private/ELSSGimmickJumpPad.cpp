#include "ELSSGimmickJumpPad.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"

AELSSGimmickJumpPad::AELSSGimmickJumpPad(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    this->JumpPadMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("JumpPadMeshComponent"));
    this->JumpPadMeshComponent->SetupAttachment(RootComponent);
}


