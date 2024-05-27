#include "ELSSAnimNotify_ProgressActionCamera.h"

UELSSAnimNotify_ProgressActionCamera::UELSSAnimNotify_ProgressActionCamera() {
    this->ActionCameraID = ESSActionCameraID::None;
    this->NewStep = 0;
}

void UELSSAnimNotify_ProgressActionCamera::Notify(USkeletalMeshComponent* inMeshComp, UAnimSequenceBase* InAnimation) {
}


