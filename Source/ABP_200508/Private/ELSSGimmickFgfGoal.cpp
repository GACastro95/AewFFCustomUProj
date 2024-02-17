#include "ELSSGimmickFgfGoal.h"
#include "Components/BoxComponent.h"


void AELSSGimmickFgfGoal::OnDetectGoal_Implementation(AELSSPlayer* inPlayer, AELSSWeaponFgfBall* inBall) {
}

void AELSSGimmickFgfGoal::EndOverlap(AActor* InActor) {
}

void AELSSGimmickFgfGoal::BeginOverlap(AActor* InActor) {
}

AELSSGimmickFgfGoal::AELSSGimmickFgfGoal() {
    this->AreaCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("GoalAreaCollision"));
    this->FgfGoalGroup = 0;
    this->bAlly = false;
}

