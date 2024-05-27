#include "ELSSDrivingState.h"

UELSSDrivingState::UELSSDrivingState() {
    this->IsRequestedDamageMotion = false;
    this->RequestedDamageCauserYaw = 0.00f;
    this->MontageDamage = NULL;
    this->MontageDrivingPose = NULL;
}

void UELSSDrivingState::RequestDamageMotion(float inCauserYaw) {
}


