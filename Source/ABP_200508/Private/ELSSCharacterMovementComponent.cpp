#include "ELSSCharacterMovementComponent.h"

UELSSCharacterMovementComponent::UELSSCharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bOrientRotationToMovement = true;
    this->bAllowPhysicsRotationDuringAnimRootMotion = true;
    this->DesiredRotationKeepDuration = 0.00f;
    this->bOrientDesiredRotationToAcc = false;
    this->LastReceivedServerMoveTimeStamp = 0.00f;
    this->IdealServerMoveTimeStamp = 0.00f;
    this->ServerMoveDelayCurrent = 0.00f;
    this->ServerMoveDelayMax = 0.10f;
    this->RequestTimeStamp = 0.00f;
    this->AutonomousDelay = 0.00f;
    this->LastPredictTimeStamp = 0.00f;
    this->LastReceivedClientMoveResponseTimeStamp = 0.00f;
    this->CurrentStateRequestId = 0;
    this->AwaitStateRequest = false;
    this->TransitAwaitTimeStamp = 0.00f;
    this->TransitAwaitingTime = 0.00f;
    this->AwaitSlowStart = 0.05f;
    this->AwaitSlowFactor = 1.50f;
    this->PredictSyncRate = 0.50f;
    this->LargeDelayThreshold = 0.05f;
    this->LargeDelayReduceFactor = 0.50f;
    this->DelaySyncRate = 0.75f;
    this->DelayInterpSpeed = 5.00f;
    this->TimeStampOnHitStop = 0.00f;
    this->ResponseCorrectYaw = 0.00f;
    this->ReservedStateRequestTimeStamp = 0.00f;
    this->ReserveRequestDuration = 0.20f;
    this->OverrideReserveRequestDuration = -1.00f;
    this->bSimulatedMoving = false;
    this->ClientUpdatingOnBeginState = false;
    this->NoFallTime = 0.00f;
}

void UELSSCharacterMovementComponent::SSServerMoveResponse_Implementation(const FSSMoveResponse& response, int32 inMultiMoved) {
}

void UELSSCharacterMovementComponent::SSServerMove_Implementation(const FSSMoveRequestHistory& inRequest) {
}

void UELSSCharacterMovementComponent::SetDesiredRotation(const FRotator& inRotatioCn) {
}

void UELSSCharacterMovementComponent::OrientDesiredRotationToAccelerate() {
}


