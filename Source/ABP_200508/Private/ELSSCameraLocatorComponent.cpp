#include "ELSSCameraLocatorComponent.h"

UELSSCameraLocatorComponent::UELSSCameraLocatorComponent() {
    this->LocatorId = 1;
    this->FocalLength = 10.00f;
    this->LookAtMode = ESSStationalCameraLookAt::None;
    this->TrackingInterpSpeed = 1.00f;
}

