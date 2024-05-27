#include "RibbonBase.h"
#include "Components/SkeletalMeshComponent.h"

ARibbonBase::ARibbonBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->MeshComponent = (USkeletalMeshComponent*)RootComponent;
    this->DefaultPhysics = NULL;
    this->SimulatedPhysics = NULL;
}

void ARibbonBase::StartPhysicsSimulation() {
}


