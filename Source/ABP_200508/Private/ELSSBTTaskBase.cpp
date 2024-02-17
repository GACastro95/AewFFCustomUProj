#include "ELSSBTTaskBase.h"

bool UELSSBTTaskBase::SSPlayerShoot(const UObject* WorldContextObject) {
    return false;
}

bool UELSSBTTaskBase::SSPlayerPass(const UObject* WorldContextObject) {
    return false;
}

bool UELSSBTTaskBase::SSPlayerIsNearlyIdle() const {
    return false;
}

bool UELSSBTTaskBase::SSPlayerIsFgfOffense() const {
    return false;
}

void UELSSBTTaskBase::SetFinishOnMessageWithId(FName MessageName, int32 RequestID) {
}

void UELSSBTTaskBase::SetFinishOnMessage(FName MessageName) {
}

void UELSSBTTaskBase::SetBlackboardValue_SSPlayerState(const FBlackboardKeySelector& Key, AELSSPlayerState* inPlayerState) {
}

void UELSSBTTaskBase::SetBlackboardValue_Actor(const FBlackboardKeySelector& Key, AActor* InActor) {
}







bool UELSSBTTaskBase::IsTaskExecuting() const {
    return false;
}

bool UELSSBTTaskBase::IsTaskAborting() const {
    return false;
}

AELSSTeamState* UELSSBTTaskBase::GetSSTeamState() const {
    return NULL;
}

AELSSPlayerState* UELSSBTTaskBase::GetSSPlayerState() const {
    return NULL;
}

ESSAI_FgfOffenseRole UELSSBTTaskBase::GetSSFgfOffenseRole() const {
    return ESSAI_FgfOffenseRole::None;
}

AELSSPlayerState* UELSSBTTaskBase::GetSSDefenseTarget() const {
    return NULL;
}

FVector UELSSBTTaskBase::GetPosSSPlayerApproachFgfGoal() {
    return FVector{};
}

AELSSGimmickFgfGoal* UELSSBTTaskBase::GetBlackboardValue_FgfGoal(const FBlackboardKeySelector& Key) {
    return NULL;
}

AELSSWeaponFgfBall* UELSSBTTaskBase::GetBlackboardValue_FgfBall(const FBlackboardKeySelector& Key) {
    return NULL;
}

void UELSSBTTaskBase::FinishExecute(bool bSuccess) {
}

void UELSSBTTaskBase::FinishAbort() {
}

UELSSBTTaskBase::UELSSBTTaskBase() {
    this->AIOwner = NULL;
    this->ActorOwner = NULL;
    this->bShowPropertyDetails = true;
    this->SSAIController = NULL;
    this->SSPlayer = NULL;
}

