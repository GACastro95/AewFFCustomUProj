#include "ELPlayerStageCollisionActor.h"
#include "Components/CapsuleComponent.h"

AELPlayerStageCollisionActor::AELPlayerStageCollisionActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCapsule"));
    this->Capsule = (UCapsuleComponent*)RootComponent;
}


