#include "ELSSGimmickReviveArea.h"
#include "Components/SphereComponent.h"


void AELSSGimmickReviveArea::OnAreaEndOverlap(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex) {
}

void AELSSGimmickReviveArea::OnAreaBeginOverlap(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

AELSSGimmickReviveArea::AELSSGimmickReviveArea() {
    this->AreaCollision = CreateDefaultSubobject<USphereComponent>(TEXT("AreaCollision"));
    this->RecoveryKoHPCycle = 3.00f;
    this->RecoveryKoHPRate = 10.00f;
    this->ReviveHpRecoverPercent = 30.00f;
    this->isAnyOverlap = false;
}

