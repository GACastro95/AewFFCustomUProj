#include "SSCameraHomingParam.h"

FSSCameraHomingParam::FSSCameraHomingParam() {
    this->Mode = ESSHomingMode::Linear;
    this->RotateSpeed = 0.00f;
    this->FixTargetYaw = false;
    this->DisableWhenUserRotate = false;
}

