#include "ELEntranceCutsceneAnimationData.h"

FELEntranceCutsceneAnimationData::FELEntranceCutsceneAnimationData() {
    this->CastID01 = 0;
    this->CastID02 = 0;
    this->DefaultWeapon = 0;
    this->AnimationType = EELEntranceCutsceneAnimationType::None;
    this->UseBeltProp = false;
    this->IgnoreAttachPosition = EELBeltAttachPosition::None;
    this->UnlockItemId = 0;
}

