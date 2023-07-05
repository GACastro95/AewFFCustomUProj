#include "ELSSDrivingState.h"

void UELSSDrivingState::RequestDamageMotion(float inCauserYaw) {
}

UELSSDrivingState::UELSSDrivingState() {
    this->IsRequestedDamageMotion = false;
    this->RequestedDamageCauserYaw = 0.00f;
    this->MontageDamage = NULL;
    this->MontageDrivingPose = NULL;
}

