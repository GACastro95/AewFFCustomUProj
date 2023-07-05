#include "ELAudience.h"

float AELAudience::GetTickInterval() const {
    return 0.0f;
}

AELAudience::AELAudience() {
    this->AnimationSharingType = EAudienceAnimationSharingType::Male;
}

