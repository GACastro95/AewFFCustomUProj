#include "SSBodyHomingParam.h"

FSSBodyHomingParam::FSSBodyHomingParam() {
    this->Mode = ESSHomingMode::Linear;
    this->RotateSpeed = 0.00f;
    this->InternalRotationKeepTime = 0.00f;
    this->WithCameraHoming = false;
}

