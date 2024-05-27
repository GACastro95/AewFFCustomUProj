#include "ELSSStormZone.h"
#include "Net/UnrealNetwork.h"

AELSSStormZone::AELSSStormZone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Radius = 0.00f;
    this->timeSinceStart = 0.00f;
}

void AELSSStormZone::UpdateTransform() {
}

void AELSSStormZone::UpdateCurrentSchedule(int32 phaseLevel) {
}

void AELSSStormZone::SetTimeSinceStart(float Sec) {
}

void AELSSStormZone::OnRep_TimeSinceStart() {
}

void AELSSStormZone::OnRep_CurrentSchedule() {
}

float AELSSStormZone::GetRadius() const {
    return 0.0f;
}

int32 AELSSStormZone::GetLatestSchedulePhase() {
    return 0;
}

bool AELSSStormZone::CheckOutside(const FVector& Location) const {
    return false;
}

FVector AELSSStormZone::CalcDamageAreaSELocation(const FVector& inPlayerLocation) {
    return FVector{};
}

void AELSSStormZone::AddSchedule_Implementation(const FSSStormSchedule& schedule) {
}

void AELSSStormZone::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AELSSStormZone, currentSchedule);
    DOREPLIFETIME(AELSSStormZone, timeSinceStart);
}


