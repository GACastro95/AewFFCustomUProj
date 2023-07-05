#include "ELSSGimmickInteractable.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

void AELSSGimmickInteractable::OnEndOverlapInteract(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex) {
}

void AELSSGimmickInteractable::OnBeginOverlapInteract(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

AELSSGimmickInteractable::AELSSGimmickInteractable() {
    this->OperateStateClass = NULL;
    this->RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->InteractCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("InteractCollision"));
    this->DotIconBaseLocationOffsetZ = 100.00f;
}

