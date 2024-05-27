#include "ELSSPoolDecalBase.h"
#include "Components/DecalComponent.h"
#include "Components/SceneComponent.h"

AELSSPoolDecalBase::AELSSPoolDecalBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->DecalComponent = CreateDefaultSubobject<UDecalComponent>(TEXT("DecalComponent"));
    this->RemainTime = 0.00f;
    this->IsDisplay = false;
    this->DecalComponent->SetupAttachment(RootComponent);
}

void AELSSPoolDecalBase::PlayAttached_Implementation(FVector DecalSize, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, EAttachLocation::Type LocationType, float LifeSpan) {
}

UDecalComponent* AELSSPoolDecalBase::PlayAtLocation_Implementation(FVector DecalSize, FVector Location, FRotator Rotation, float LifeSpan) {
    return NULL;
}

UDecalComponent* AELSSPoolDecalBase::GetDecalComponent() const {
    return NULL;
}


