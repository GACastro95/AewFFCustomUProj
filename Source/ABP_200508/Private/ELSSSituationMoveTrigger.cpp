#include "ELSSSituationMoveTrigger.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

bool AELSSSituationMoveTrigger::IsDisableCamera() const {
    return false;
}

FName AELSSSituationMoveTrigger::GetWaitReactionRowName() const {
    return NAME_None;
}

UBoxComponent* AELSSSituationMoveTrigger::GetTriggerCollision() const {
    return NULL;
}

int32 AELSSSituationMoveTrigger::GetMoveId_Implementation(AELSSPlayer* inAttackPlayer, AELSSPlayer* inReceivePlayer) const {
    return 0;
}

FTransform AELSSSituationMoveTrigger::GetIdealTransform_Implementation(const FTransform& inReceiverTransform, int32 inMoveId) const {
    return FTransform{};
}

USceneComponent* AELSSSituationMoveTrigger::GetIdealLocationComponent_Implementation(int32 inMoveId) const {
    return NULL;
}

USceneComponent* AELSSSituationMoveTrigger::GetIdealLocation(const FTransform& inReceiverTransform) const {
    return NULL;
}

FVector AELSSSituationMoveTrigger::GetCameraOffset(const FVector& inActionSyncLocation, int32 inMoveId) const {
    return FVector{};
}

void AELSSSituationMoveTrigger::ExecuteSituation_Implementation() {
}

AELSSSituationMoveTrigger::AELSSSituationMoveTrigger() {
    this->TriggerCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerCollision"));
    this->IdealLocation = CreateDefaultSubobject<USceneComponent>(TEXT("IdealLocation"));
    this->MoveIdNormal = 0;
    this->MoveIdNormalBackDamage = 0;
    this->MoveIdHighFly = 0;
    this->MoveIdHighFlyBackDamage = 0;
    this->MoveIdPower = 0;
    this->MoveIdPowerBackDamage = 0;
    this->DisableCamera = false;
    this->OffsetToReceiverY = false;
    this->OffsetCamera = true;
    this->DisableIdealLocation = false;
    this->DisableCameraLocator = false;
    this->DisableForwardCheck = false;
}

