#include "ELSSStationalCamera.h"

bool AELSSStationalCamera::Setup(AActor* inTargetActor, const FVector& inWorldOffset) {
    return false;
}

void AELSSStationalCamera::SetDisableCheckCollision(bool inDisable) {
}

void AELSSStationalCamera::SetDisable(bool inDisable) {
}

void AELSSStationalCamera::SetActorReceiver(AActor* InActor) {
}

void AELSSStationalCamera::SetActorAttacker(AActor* InActor) {
}

bool AELSSStationalCamera::IsActive() {
    return false;
}

void AELSSStationalCamera::Finish() {
}

bool AELSSStationalCamera::CheckCollision(FTransform inBaseTransform, int32 inLocatorId, float inCurrentLocatorTime) {
    return false;
}

void AELSSStationalCamera::ChangeLocator(FTransform inBaseTransform, int32 inLocatorId, float inInterpDuration, ESSStationalCameraEaseType inEaseType) {
}

AELSSStationalCamera::AELSSStationalCamera(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer) {
    this->BlendOutDuration = 1.00f;
    this->LocatorParamTable = NULL;
    this->LocatorOwner = NULL;
    this->Attacker = NULL;
    this->Receiver = NULL;
    this->CurrentLocatorId = 0;
    this->InterpStartFocalLength = 0.00f;
    this->InterpTimeCount = 0.00f;
    this->InterpDuration = 0.00f;
    this->InterpEaseType = ESSStationalCameraEaseType::Linear;
    this->CameraComp = NULL;
    this->Disable = false;
    this->DisableCheckCollision = false;
    this->TrackTgt = NULL;
}

