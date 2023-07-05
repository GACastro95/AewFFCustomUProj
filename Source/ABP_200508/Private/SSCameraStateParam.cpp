#include "SSCameraStateParam.h"

FSSCameraStateParam::FSSCameraStateParam() {
    this->BasePitchOffset = 0.00f;
    this->BasePitchOffsetInterp = 0.00f;
    this->TargetLength = 0.00f;
    this->FOV = 0.00f;
    this->FovInterp = 0.00f;
    this->TargetLength_InterpInc = 0.00f;
    this->TargetLength_InterpDec = 0.00f;
    this->UseAutoOrientToForward = false;
    this->AutoOrientToForward_InterpSpeed = 0.00f;
}

