#include "ELFootIK.h"

void UELFootIK::SetUseStandTraceOffset(const bool UseStandOffset) {
}

void UELFootIK::ResetHipsOffset() {
}

void UELFootIK::RemoveFootOverlappedActor(const bool bLeft, AActor* OverlappedActor) {
}

bool UELFootIK::IsCheckFloor() const {
    return false;
}

FVector UELFootIK::GetHipsOffset() const {
    return FVector{};
}

void UELFootIK::AddFootOverlappedActor(const bool bLeft, AActor* OverlappedActor, const bool bForceAdd) {
}

UELFootIK::UELFootIK() {
    this->bComplexTrace = true;
    this->HipsBoneName_L = TEXT("J_Hips");
    this->FootBoneName_L = TEXT("J_Foot_L");
    this->FootBoneName_R = TEXT("J_Foot_R");
    this->LegBoneName_L = TEXT("J_Leg_L");
    this->LegBoneName_R = TEXT("J_Leg_R");
    this->CompatibleSkeleton = NULL;
    this->TraceChannel = TraceTypeQuery1;
    this->DebugTrace = EDrawDebugTrace::None;
    this->DebugTracebyFloor = EDrawDebugTrace::None;
    this->bMatchMode = true;
    this->FootOffset = 10.50f;
    this->TraceOffsetLength = 15.00f;
    this->DiffHeight = 0.00f;
    this->bWorkHipOffset = false;
    this->bOverrideHipOffset = false;
    this->StandTraceOffsetLength = 15.00f;
    this->bUseTraceOffsetTheStand = false;
    this->SkelMesh = NULL;
    this->bIsCheckFloor = false;
    this->bResetHipsOffset = false;
    this->bTemporaryOverrideHipOffset = false;
}

