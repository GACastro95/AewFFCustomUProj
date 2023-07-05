#include "EmptyActor.h"
#include "Components/SceneComponent.h"

AEmptyActor::AEmptyActor() {
    this->SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
}

