#include "ELSSAnimNotify_Camera.h"

UELSSAnimNotify_Camera::UELSSAnimNotify_Camera() {
    this->CameraLocatorId = 1;
    this->InterpDuration = 0.00f;
    this->InterpEaseType = ESSStationalCameraEaseType::EaseInOut;
    this->BaseTransformMode = ESSStationalCameraBaseTransformMode::Continue;
}

void UELSSAnimNotify_Camera::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) {
}


