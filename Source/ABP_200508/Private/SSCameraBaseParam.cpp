#include "SSCameraBaseParam.h"

FSSCameraBaseParam::FSSCameraBaseParam() {
    this->BasePitch = 0.00f;
    this->CameraOffsetX = 0.00f;
    this->CameraOffsetY = 0.00f;
    this->CameraOffsetZ = 0.00f;
    this->Rotate_YawSpeed = 0.00f;
    this->Rotate_PitchSpeed = 0.00f;
    this->Rotate_PitchLimitMin = 0.00f;
    this->Rotate_PitchLimitMax = 0.00f;
    this->TargetLengthOffsetByPitch = 0.00f;
    this->TargetLengthOffsetByPitch_MinAngle = 0.00f;
    this->TargetLengthOffsetByPitch_MaxAngle = 0.00f;
    this->IgnoreJumpMove_MaxHeight = 0.00f;
    this->IgnoreJumpMove_InterpDec = 0.00f;
    this->ResetCameraDuration = 0.00f;
    this->DisableActionCamera = false;
    this->RefreshParamOnEveryTick = false;
}

