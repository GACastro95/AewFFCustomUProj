#include "yDebugCamera.h"

void AyDebugCamera::TakeScreenShot() {
}

void AyDebugCamera::StartGreenBack(bool _hidden) {
}

void AyDebugCamera::SetPlayerController(APlayerController* _pcPlayerController) {
}

bool AyDebugCamera::InputYButton() const {
    return false;
}

bool AyDebugCamera::InputXButton() const {
    return false;
}

bool AyDebugCamera::InputUpButton() const {
    return false;
}

bool AyDebugCamera::InputStartButton() const {
    return false;
}

bool AyDebugCamera::InputRStickButton() const {
    return false;
}

float AyDebugCamera::InputRightTriggerAxis() const {
    return 0.0f;
}

float AyDebugCamera::InputRightStickYAxis() const {
    return 0.0f;
}

float AyDebugCamera::InputRightStickXAxis() const {
    return 0.0f;
}

bool AyDebugCamera::InputRightButton() const {
    return false;
}

bool AyDebugCamera::InputRBButton() const {
    return false;
}

bool AyDebugCamera::InputPadButton() const {
    return false;
}

bool AyDebugCamera::InputLStickButton() const {
    return false;
}

float AyDebugCamera::InputLeftTriggerAxis() const {
    return 0.0f;
}

float AyDebugCamera::InputLeftStickYAxis() const {
    return 0.0f;
}

float AyDebugCamera::InputLeftStickXAxis() const {
    return 0.0f;
}

bool AyDebugCamera::InputLeftButton() const {
    return false;
}

bool AyDebugCamera::InputLBButton() const {
    return false;
}

bool AyDebugCamera::InputDownButton() const {
    return false;
}

bool AyDebugCamera::InputBButton() const {
    return false;
}

bool AyDebugCamera::InputAButton() const {
    return false;
}

bool AyDebugCamera::DownedYButton() const {
    return false;
}

bool AyDebugCamera::DownedXButton() const {
    return false;
}

bool AyDebugCamera::DownedUpButton() const {
    return false;
}

bool AyDebugCamera::DownedRightButton() const {
    return false;
}

bool AyDebugCamera::DownedRBButton() const {
    return false;
}

bool AyDebugCamera::DownedLeftButton() const {
    return false;
}

bool AyDebugCamera::DownedLBButton() const {
    return false;
}

bool AyDebugCamera::DownedDownButton() const {
    return false;
}

AyDebugCamera::AyDebugCamera() {
    this->m_bWatchingNow = false;
    this->m_pcController = NULL;
}

