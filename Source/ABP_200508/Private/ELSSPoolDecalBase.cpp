#include "ELSSPoolDecalBase.h"
#include "Components/DecalComponent.h"

void AELSSPoolDecalBase::PlayAttached_Implementation(FVector DecalSize, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, float LifeSpan) {
}

UDecalComponent* AELSSPoolDecalBase::PlayAtLocation_Implementation(FVector DecalSize, FVector Location, FRotator Rotation, float LifeSpan) {
    return NULL;
}

UDecalComponent* AELSSPoolDecalBase::GetDecalComponent() const {
    return NULL;
}

AELSSPoolDecalBase::AELSSPoolDecalBase() {
    this->DecalComponent = CreateDefaultSubobject<UDecalComponent>(TEXT("DecalComponent"));
    this->RemainTime = 0.00f;
    this->IsDisplay = false;
}

