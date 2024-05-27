#include "ELSSCameraParamManager.h"

UELSSCameraParamManager::UELSSCameraParamManager() {
    this->CurrentState = ESSCameraState::Default;
    this->CurrentPlaceType = ESSCameraPlaceType::None;
    this->BaseParamLerpRemainTime = 0.00f;
    this->OwnerActor = NULL;
    this->CameraParamType = ESSCameraParamType::TypeA;
}



void UELSSCameraParamManager::SetBaseParamWithBlend(ESSCameraBaseParamID inBaseParamID, float InDuration, bool inEaseOut) {
}



ESSCameraParamType UELSSCameraParamManager::GetCameraParamType() const {
    return ESSCameraParamType::TypeA;
}


