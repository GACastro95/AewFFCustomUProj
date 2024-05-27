#include "ELSSSyncMotion.h"

UELSSSyncMotion::UELSSSyncMotion() {
}

void UELSSSyncMotion::UpdateTransform(float DeltaTime) {
}

void UELSSSyncMotion::UpdateSyncOriginTransform(const FVector& InLocation, const FRotator& InRotation, float inInterpSpd, float DeltaTime) {
}

void UELSSSyncMotion::Update(float InDeltaTime) {
}

void UELSSSyncMotion::Stop() {
}

void UELSSSyncMotion::Setup(const TArray<ACharacter*>& characters, ACharacter* syncOwner, const FTransform& InTransform, float InterpolateTime) {
}

void UELSSSyncMotion::SetSyncOriginLocation(const FVector& InLocation) {
}

void UELSSSyncMotion::SetSyncOff(ACharacter* Chara) {
}

void UELSSSyncMotion::OffsetOriginPivot() {
}

bool UELSSSyncMotion::IsSyncActorNow(const ACharacter* Chara) const {
    return false;
}

bool UELSSSyncMotion::IsPlaying() const {
    return false;
}

FTransform UELSSSyncMotion::GetSyncOriginTransform() const {
    return FTransform{};
}

float UELSSSyncMotion::GetAnimScaleZ(ACharacter* Chara) {
    return 0.0f;
}


