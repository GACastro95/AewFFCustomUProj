#include "ELSSDamageComponent.h"

void UELSSDamageComponent::SetBlowVector(const FVector& inVec) {
}

FVector UELSSDamageComponent::GetBlowVector() const {
    return FVector{};
}

UELSSDamageComponent::UELSSDamageComponent() {
    this->SyncHitHeightDiff = 75.00f;
}

