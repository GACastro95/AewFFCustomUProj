#include "ELSSHorseMovementComponent.h"

void UELSSHorseMovementComponent::SendForward_Implementation(float inYaw, bool inBackMoving) {
}

bool UELSSHorseMovementComponent::IsBraking() const {
    return false;
}

UELSSHorseMovementComponent::UELSSHorseMovementComponent() {
    this->BackMoving = false;
    this->Braking = false;
    this->PrevSpeed = 0.00f;
    this->RemainBrakeTime = 0.00f;
    this->BrakeDecelerationThoreshold = 2000.00f;
    this->BrakeMinDuration = 1.50f;
    this->BrakeMinSpeedRate = 0.50f;
    this->LateralInputAccelerationRate = 0.50f;
    this->LateralInputAccelerationRateOnBraking = 0.10f;
    this->BackInputAccelerationRate = 0.50f;
    this->SteeringCoefOnMaxSpeed = 0.50f;
    this->SteeringForwardRate = 1.00f;
    this->InputVectorInterpSpeedForward = 1.00f;
    this->InputVectorInterpSpeedForwardOnSteering = 1.00f;
    this->InputVectorInterpSpeedLateral = 1.00f;
    this->InputVectorInterpSpeedOnBraking = 10.00f;
    this->MinInputAccelerationLength = 0.10f;
}

