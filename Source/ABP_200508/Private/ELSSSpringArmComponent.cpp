#include "ELSSSpringArmComponent.h"

UELSSSpringArmComponent::UELSSSpringArmComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TargetArmLengthInterpSpeed = 10.00f;
    this->CameraFixTolerance = 1.00f;
    this->bIsCameraFixedPrev = true;
}


