#include "ELSSActionArea.h"
#include "Components/CapsuleComponent.h"

void AELSSActionArea::SetEnable(bool inEnable) {
}

bool AELSSActionArea::IsEnable() {
    return false;
}

void AELSSActionArea::Check(const FTransform& userTransform, const FVector& TargetLocation, bool inEnableRemainStep) {
}

AELSSActionArea::AELSSActionArea() {
    this->AreaCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("AreaCollision"));
    this->Enabled = false;
}

