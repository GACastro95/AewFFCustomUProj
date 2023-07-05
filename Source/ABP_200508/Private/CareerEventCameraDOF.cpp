#include "CareerEventCameraDOF.h"

FCareerEventCameraDOF::FCareerEventCameraDOF() {
    this->bEnable = false;
    this->Target = ECareerEventTarget::NONE;
    this->fFocusOffset = 0.00f;
    this->fFocusOffsetTime = 0.00f;
    this->fAperture = 0.00f;
    this->fApertureOffset = 0.00f;
    this->fApertureOffsetTime = 0.00f;
}

