#include "ELSSGimmickReviveArea.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"

AELSSGimmickReviveArea::AELSSGimmickReviveArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->AreaCollision = CreateDefaultSubobject<USphereComponent>(TEXT("AreaCollision"));
    this->RecoveryKoHPCycle = 3.00f;
    this->RecoveryKoHPRate = 10.00f;
    this->ReviveHpRecoverPercent = 30.00f;
    this->isAnyOverlap = false;
    this->AreaCollision->SetupAttachment(RootComponent);
}


void AELSSGimmickReviveArea::OnAreaEndOverlap(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex) {
}

void AELSSGimmickReviveArea::OnAreaBeginOverlap(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


