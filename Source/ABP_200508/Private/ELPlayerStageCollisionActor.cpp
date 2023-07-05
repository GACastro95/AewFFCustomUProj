#include "ELPlayerStageCollisionActor.h"
#include "Components/CapsuleComponent.h"

AELPlayerStageCollisionActor::AELPlayerStageCollisionActor() {
    this->Capsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCapsule"));
}

