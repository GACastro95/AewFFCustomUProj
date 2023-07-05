#include "ELSSGameplayCamera.h"
#include "Camera/CameraComponent.h"
#include "Components/SceneComponent.h"
#include "ELSSCameraParamManager.h"
#include "ELSSSpringArmComponent.h"
#include "Templates/SubclassOf.h"

void AELSSGameplayCamera::SwitchCameraPosition() {
}

void AELSSGameplayCamera::SetSceneCaptureEnable(bool inEnable) {
}

void AELSSGameplayCamera::SetSceneCapture2D(ASceneCapture2D* inSceneCapture2D, bool inCapture) {
}

void AELSSGameplayCamera::SetControlledPawn(APawn* InPawn) {
}

void AELSSGameplayCamera::SetCameraPosition(ESSCameraPosition InPosition) {
}

void AELSSGameplayCamera::ResetCamera(bool inImmediate, bool inUseOverrideTargetPitch, float inOverrideTargetPitch, float inDiffYaw, float inOverrideDuration) {
}

void AELSSGameplayCamera::ProgressActionCamera(ESSActionCameraID inActionCameraID, int32 inStep) {
}

UELSSActionCameraController* AELSSGameplayCamera::PlayActionCamera(ESSActionCameraID inActionCameraID, AELSSPlayer* inPlayer) {
    return NULL;
}

void AELSSGameplayCamera::OnLanded(AELSSPlayer* inPlayer) {
}

void AELSSGameplayCamera::OnJumped(AELSSPlayer* inPlayer) {
}

bool AELSSGameplayCamera::IsPlayingActionCamera() const {
    return false;
}

TSubclassOf<UELSSCameraShake> AELSSGameplayCamera::GetCameraShake(ESSCameraShakeType InType) const {
    return NULL;
}

void AELSSGameplayCamera::ForceEndActionCamera() {
}

void AELSSGameplayCamera::EndActionCamera(ESSActionCameraID inActionCameraID) {
}

AELSSGameplayCamera::AELSSGameplayCamera() {
    this->MouseMoveInputScale = 1.00f;
    this->SleepWatcherCameraDuration_AfterResetCamera = 0.25f;
    this->WatcherCameraRotationInterpSpeed = 6.00f;
    this->WatcherResetCameraDisable = false;
    this->CameraPosition = ESSCameraPosition::Left;
    this->ActionCameraController = NULL;
    this->ActionCameraLocationInterpSpeed = 10.00f;
    this->ActionCameraLerpAlpha = 0.00f;
    this->ActionCameraLerpBlendExp = 2.00f;
    this->ActionCameraAlphaInterpSpeed = 10.00f;
    this->ActionCameraAlphaEndInterpSpeed = 1.00f;
    this->SceneCapture2D = NULL;
    this->DefaultSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    this->SpringArm = CreateDefaultSubobject<UELSSSpringArmComponent>(TEXT("SpringArm"));
    this->CameraParent = CreateDefaultSubobject<USceneComponent>(TEXT("CameraParent"));
    this->Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    this->PlayerController = NULL;
    this->ControlledPawn = NULL;
    this->OverrideCameraTargetActor = NULL;
    this->ParamManagerType = UELSSCameraParamManager::StaticClass();
    this->Param = NULL;
    this->ControlMode = ESSCameraMode::Default;
}

