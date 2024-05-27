#include "ELSSGimmickInteractable.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

AELSSGimmickInteractable::AELSSGimmickInteractable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->OperateStateClass = NULL;
    this->RootComp = (USceneComponent*)RootComponent;
    this->InteractCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("InteractCollision"));
    this->DotIconBaseLocationOffsetZ = 100.00f;
    this->InteractCollision->SetupAttachment(RootComponent);
}

void AELSSGimmickInteractable::OnEndOverlapInteract(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex) {
}

void AELSSGimmickInteractable::OnBeginOverlapInteract(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


