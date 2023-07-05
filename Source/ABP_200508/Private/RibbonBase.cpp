#include "RibbonBase.h"
#include "Components/SkeletalMeshComponent.h"

void ARibbonBase::StartPhysicsSimulation() {
}

ARibbonBase::ARibbonBase() {
    this->MeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->DefaultPhysics = NULL;
    this->SimulatedPhysics = NULL;
}

