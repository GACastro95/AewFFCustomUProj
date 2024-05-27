#include "ELSSGimmickFgfGoal.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

AELSSGimmickFgfGoal::AELSSGimmickFgfGoal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->AreaCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("GoalAreaCollision"));
    this->FgfGoalGroup = 0;
    this->bAlly = false;
    this->AreaCollision->SetupAttachment(RootComponent);
}


void AELSSGimmickFgfGoal::OnDetectGoal_Implementation(AELSSPlayer* inPlayer, AELSSWeaponFgfBall* inBall) {
}

void AELSSGimmickFgfGoal::EndOverlap(AActor* InActor) {
}

void AELSSGimmickFgfGoal::BeginOverlap(AActor* InActor) {
}


