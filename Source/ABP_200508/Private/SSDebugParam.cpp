#include "SSDebugParam.h"

FSSDebugParam::FSSDebugParam() {
    this->ShowPlayerStatus = false;
    this->ShowAttackCapsule = false;
    this->ShowMoveCorrection = false;
    this->ShowAimOffsetStatus = false;
    this->ShowVehicleStatus = false;
    this->ShowGaugeValue = false;
    this->ShowMapAreaId = false;
    this->ShowDamage = false;
    this->ShowDamageReason = false;
    this->ShowAttention = false;
    this->ShowAttentionStatus = false;
    this->ShowServerFPS = false;
    this->ShowRoundInfo = false;
    this->CameraParamType = ESSCameraParamType::TypeA;
    this->DisableCameraAction = false;
    this->VisualizeStormCourse = false;
}

