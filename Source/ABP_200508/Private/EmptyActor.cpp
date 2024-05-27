#include "EmptyActor.h"
#include "Components/SceneComponent.h"

AEmptyActor::AEmptyActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
    this->SceneComponent = (USceneComponent*)RootComponent;
}


