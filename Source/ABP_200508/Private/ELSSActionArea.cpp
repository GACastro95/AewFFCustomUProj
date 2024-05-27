#include "ELSSActionArea.h"
#include "Components/CapsuleComponent.h"

AELSSActionArea::AELSSActionArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AreaCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("AreaCollision"));
    this->Enabled = false;
}

void AELSSActionArea::SetEnable(bool inEnable) {
}

bool AELSSActionArea::IsEnable() {
    return false;
}

void AELSSActionArea::Check(const FTransform& userTransform, const FVector& TargetLocation, bool inEnableRemainStep) {
}


