#include "ELSSMapAreaVolume.h"

AELSSMapAreaVolume::AELSSMapAreaVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UseCameraCorrect = false;
}

void AELSSMapAreaVolume::OnEndOverlap(AActor* inOtherActor) {
}

void AELSSMapAreaVolume::OnBeginOverlap(AActor* inOtherActor) {
}


