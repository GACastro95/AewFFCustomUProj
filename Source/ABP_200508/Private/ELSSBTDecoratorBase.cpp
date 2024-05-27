#include "ELSSBTDecoratorBase.h"

UELSSBTDecoratorBase::UELSSBTDecoratorBase() {
    this->AIOwner = NULL;
    this->ActorOwner = NULL;
    this->bShowPropertyDetails = true;
    this->bCheckConditionOnlyBlackBoardChanges = false;
    this->bIsObservingBB = false;
    this->SSAIController = NULL;
    this->SSPlayer = NULL;
}

bool UELSSBTDecoratorBase::SSPlayerShouldUnlockDefenseTeamTreasureBox(const UObject* WorldContextObject, float inDist, AELSSItemBox*& outBox) const {
    return false;
}

bool UELSSBTDecoratorBase::SSPlayerShouldPass(const UObject* WorldContextObject, AELSSPlayerState*& outTarget) const {
    return false;
}

bool UELSSBTDecoratorBase::SSPlayerShouldGuardMember(const UObject* WorldContextObject, float inDistance, AELSSPlayerState*& outTarget) const {
    return false;
}

bool UELSSBTDecoratorBase::SSPlayerShouldGoGetFgfBall(const UObject* WorldContextObject, AELSSWeaponFgfBall*& outTarget) const {
    return false;
}

bool UELSSBTDecoratorBase::SSPlayerShouldAttackDefenseTarget(const UObject* WorldContextObject, float inDist, AELSSPlayerState*& outTarget) const {
    return false;
}

bool UELSSBTDecoratorBase::SSPlayerShouldAimForFgfGoal(const UObject* WorldContextObject, float inDistanceToGoal, AELSSGimmickFgfGoal*& outTarget) const {
    return false;
}

bool UELSSBTDecoratorBase::SSPlayerIsInFixedArea_PassReceiver(const UObject* WorldContextObject, FVector& outPos) const {
    return false;
}

bool UELSSBTDecoratorBase::SSPlayerIsInFixedArea_Partisan(const UObject* WorldContextObject, FVector& outPos) const {
    return false;
}

bool UELSSBTDecoratorBase::SSPlayerIsInBetweenDefenseTargetAndGoal(const UObject* WorldContextObject, FVector& outPos) const {
    return false;
}

bool UELSSBTDecoratorBase::SSPlayerIsInBetweenDefenseTargetAndBallHolder(const UObject* WorldContextObject, FVector& outPos) const {
    return false;
}

bool UELSSBTDecoratorBase::SSPlayerIsFgfOffense() const {
    return false;
}

bool UELSSBTDecoratorBase::SSPlayerHasFgfBall() const {
    return false;
}

bool UELSSBTDecoratorBase::SSDefenseTargetIsNearToFgfBall(const UObject* WorldContextObject, float inDist, AELSSPlayerState*& outTarget) const {
    return false;
}

bool UELSSBTDecoratorBase::SSDefenseTargetIsDead(const UObject* WorldContextObject) {
    return false;
}

bool UELSSBTDecoratorBase::SSDefenseTargetHasFgfBall() const {
    return false;
}

void UELSSBTDecoratorBase::SetBlackboardValue_SSPlayerState(const FBlackboardKeySelector& Key, AELSSPlayerState* inPlayerState) {
}

void UELSSBTDecoratorBase::SetBlackboardValue_Actor(const FBlackboardKeySelector& Key, AActor* InActor) {
}













bool UELSSBTDecoratorBase::IsSSFgfBallFree() const {
    return false;
}

bool UELSSBTDecoratorBase::IsDecoratorObserverActive() const {
    return false;
}

bool UELSSBTDecoratorBase::IsDecoratorExecutionActive() const {
    return false;
}

AELSSTeamState* UELSSBTDecoratorBase::GetSSTeamState() const {
    return NULL;
}

AELSSPlayerState* UELSSBTDecoratorBase::GetSSPlayerState() const {
    return NULL;
}

ESSAI_FgfOffenseRole UELSSBTDecoratorBase::GetSSFgfOffenseRole() const {
    return ESSAI_FgfOffenseRole::None;
}

AELSSItemBox* UELSSBTDecoratorBase::GetSSDefenseTeamTreasureBox(const UObject* WorldContextObject) const {
    return NULL;
}

AELSSPlayer* UELSSBTDecoratorBase::GetSSDefenseTargetPlayer() const {
    return NULL;
}

AELSSPlayerState* UELSSBTDecoratorBase::GetSSDefenseTarget() const {
    return NULL;
}

AELSSPlayerState* UELSSBTDecoratorBase::GetSSBallHoldPlayer() const {
    return NULL;
}

bool UELSSBTDecoratorBase::GetNearlyFgfGoal(const UObject* WorldContextObject, AELSSGimmickFgfGoal*& outGoal) const {
    return false;
}

bool UELSSBTDecoratorBase::ExistSSTeamTreasureBoxOpening() const {
    return false;
}


