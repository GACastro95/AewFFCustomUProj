#include "CareerEventCameraMove.h"

FCareerEventCameraMove::FCareerEventCameraMove() {
    this->Type = ECareerEventMoveCameraType::Fix;
    this->Type_SW = ECareerEventMoveCameraType::Fix;
    this->Time = 0.00f;
}

