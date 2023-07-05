#include "CareerEventCameraPosition.h"

FCareerEventCameraPosition::FCareerEventCameraPosition() {
    this->eCameraType = ECareerEventCameraType::WHOLE;
    this->fPosX = 0.00f;
    this->fPosY = 0.00f;
    this->fPosZ = 0.00f;
    this->fPitch = 0.00f;
    this->fYaw = 0.00f;
    this->fRoll = 0.00f;
    this->fFieldOfView = 0.00f;
}

