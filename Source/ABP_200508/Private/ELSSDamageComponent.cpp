#include "ELSSDamageComponent.h"

UELSSDamageComponent::UELSSDamageComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SyncHitHeightDiff = 75.00f;
}

void UELSSDamageComponent::SetBlowVector(const FVector& inVec) {
}

FVector UELSSDamageComponent::GetBlowVector() const {
    return FVector{};
}


