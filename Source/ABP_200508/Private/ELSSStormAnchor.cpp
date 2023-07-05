#include "ELSSStormAnchor.h"
#include "Components/SceneComponent.h"

void AELSSStormAnchor::SetParam(const FSSStormPhaseParam& Param) {
}

float AELSSStormAnchor::GetShrinkDuration() const {
    return 0.0f;
}

float AELSSStormAnchor::GetRadiusMeter() const {
    return 0.0f;
}

float AELSSStormAnchor::GetRadius() const {
    return 0.0f;
}

float AELSSStormAnchor::GetIntervalDuration() const {
    return 0.0f;
}

float AELSSStormAnchor::GetDuration() {
    return 0.0f;
}

float AELSSStormAnchor::GetAnnounceDuration() const {
    return 0.0f;
}

AELSSStormAnchor::AELSSStormAnchor() {
    this->SceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
}

