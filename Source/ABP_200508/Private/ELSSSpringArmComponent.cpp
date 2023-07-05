#include "ELSSSpringArmComponent.h"

UELSSSpringArmComponent::UELSSSpringArmComponent() {
    this->TargetArmLengthInterpSpeed = 10.00f;
    this->CameraFixTolerance = 1.00f;
    this->bIsCameraFixedPrev = true;
}

