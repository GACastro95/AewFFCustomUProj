#include "ELSSActionCameraController.h"

UELSSActionCameraController::UELSSActionCameraController() {
    this->ActiveTargetLocation = false;
    this->TargetLocationLerpAlphaSpeed = 0.00f;
    this->TargetLocationLerpHeightCoef = 0.00f;
    this->TargetLocationLerpAlphaTarget = 0.00f;
    this->TargetLocationLerpAlpha = 0.00f;
    this->StatusIsEnableUserRotate = false;
    this->StatusIsEnableUpdateState = false;
    this->MainPlayer = NULL;
    this->OpponentPlayer = NULL;
    this->GameplayCamera = NULL;
    this->ParamManager = NULL;
    this->CurrentStep = 0;
    this->StatusIsActive = false;
}

void UELSSActionCameraController::UpdateOnTick(float inDeltaSeconds) {
}

void UELSSActionCameraController::SetTargetLocationToOwner(float InDuration) {
}

void UELSSActionCameraController::SetTargetLocationToOpponent(float inTargetRate, float inHeightCoef, float InDuration) {
}

void UELSSActionCameraController::SetActiveTargetLocation(bool flg) {
}

void UELSSActionCameraController::ReserveNextStep(int32 inStep, float inTimer) {
}

void UELSSActionCameraController::Play() {
}

void UELSSActionCameraController::OnTick_Implementation(float inDeltaSeconds) {
}

void UELSSActionCameraController::OnEnd_Implementation() {
}

void UELSSActionCameraController::OnChangeStep_Implementation(int32 inStep) {
}

void UELSSActionCameraController::OnBegin_Implementation() {
}

bool UELSSActionCameraController::IsActiveTargetLocation() const {
    return false;
}

bool UELSSActionCameraController::IsActive() const {
    return false;
}

FVector UELSSActionCameraController::GetTargetLocation_Implementation() const {
    return FVector{};
}

int32 UELSSActionCameraController::GetCurrentStep() const {
    return 0;
}

void UELSSActionCameraController::Finish() {
}

void UELSSActionCameraController::ChangeStep(int32 inStep) {
}


