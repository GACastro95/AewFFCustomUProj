#include "ELReplayBase.h"

void UELReplayBase::StopReplay() {
}

void UELReplayBase::StartRec() {
}

void UELReplayBase::SetSnapshotPoseTransform_N(FPoseSnapshot& Pose, FTransform& Transform) {
}

void UELReplayBase::SetHitParticle(UParticleSystem* Particle, const FTransform& Transform) {
}

void UELReplayBase::SetHighlightReplayParam(const FELHighlightReplayParam& Param) {
}

void UELReplayBase::SetDamageLv(int32 DamageLv, bool Critical) {
}

void UELReplayBase::ResolveReplay(int32 Index) {
}

void UELReplayBase::RequestPlayReplay(float ReplayDuration) {
}

void UELReplayBase::RequestBackupRecord(int32 Index, float DelayTime) {
}

bool UELReplayBase::IsSlowTime(float BeginTime, float EndTime) const {
    return false;
}

bool UELReplayBase::IsPlayReplay() const {
    return false;
}

float UELReplayBase::GetTotalRecordTime() const {
    return 0.0f;
}

void UELReplayBase::GetReplayParam(FPoseSnapshot& PlayerPose, FPoseSnapshot& PlayerNextPose, FTransform& PlayerTransform, FTransform& PlayerNextTransform, UParticleSystem*& Particle, FTransform& ParticleTransform, int32& DamageLv, bool& Critical, float& InterpolateValue) {
}

FELHighlightReplayParam UELReplayBase::GetHighlightReplayParam() const {
    return FELHighlightReplayParam{};
}

float UELReplayBase::GetDamageTime() const {
    return 0.0f;
}

void UELReplayBase::ConvertReplayIndex_N(int32& Index, float& Rate, const float Sec) const {
}

UELReplayBase::UELReplayBase() {
}

