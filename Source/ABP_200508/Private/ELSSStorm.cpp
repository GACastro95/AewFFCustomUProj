#include "ELSSStorm.h"

void AELSSStorm::UpdateZone(float timeSinceStart) {
}

void AELSSStorm::Update(float timeSinceStart) {
}

ESSStormPositionRelation AELSSStorm::ToPositionRelation(const FVector& Location) const {
    return ESSStormPositionRelation::Safe;
}

void AELSSStorm::SetupCourse() {
}

bool AELSSStorm::IsFinalPhase() const {
    return false;
}

AELSSStormZone* AELSSStorm::GetZone() const {
    return NULL;
}

ESSStormState AELSSStorm::GetStormState(float timeSinceStart) const {
    return ESSStormState::None;
}

ESSStormState AELSSStorm::GetCurrentStormState() const {
    return ESSStormState::None;
}

float AELSSStorm::GetCurrentPhaseTime() const {
    return 0.0f;
}

AELSSStormAnchor* AELSSStorm::GetCurrentAnchor() const {
    return NULL;
}

AELSSStormAnchor* AELSSStorm::GetAnchor(int32 phaseLevel) const {
    return NULL;
}


void AELSSStorm::DebugSetupCourse() {
}

void AELSSStorm::DebugDrawCourse(float Time) {
}

AELSSStormAnchor* AELSSStorm::CreateAnchor(const FSSStormPhaseParam& phaseParam, AELSSStormAnchor* prevAnchor) {
    return NULL;
}

float AELSSStorm::CalcShrinkStartTime(int32 phaseLevel) {
    return 0.0f;
}

float AELSSStorm::CalcShrinkEndTime(int32 phaseLevel) {
    return 0.0f;
}

void AELSSStorm::CalcIntersection(const FVector2D& center1, float r1, const FVector2D& center2, float r2, FVector2D& resultA, FVector2D& resultB) {
}

int32 AELSSStorm::CalcCurrentPhase(float timeSinceStart) const {
    return 0;
}

FVector AELSSStorm::CalcAnchorLocation(const FSSStormPhaseParam& phaseParam, AELSSStormAnchor* prevAnchor) {
    return FVector{};
}


void AELSSStorm::AddSchedule(int32 phaseLevel) {
}

AELSSStorm::AELSSStorm() {
    this->CurrentTime = 0.00f;
    this->zoneClass = NULL;
    this->zone = NULL;
    this->finalParamTable = NULL;
    this->EndShrinkSE_PlayTime = -0.50f;
    this->RandomSeed = 0;
}

