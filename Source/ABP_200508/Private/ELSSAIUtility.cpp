#include "ELSSAIUtility.h"

void UELSSAIUtility::UpdateFgfAI(const UObject* WorldContextObject) {
}

void UELSSAIUtility::StopSSBehaviourTree(const UObject* WorldContextObject) {
}

void UELSSAIUtility::StartSSBehaviourTree(const UObject* WorldContextObject) {
}

bool UELSSAIUtility::ShouldEndFgfBallRun(AELSSPlayerState* myPlayer) {
    return false;
}

void UELSSAIUtility::SetupFgfOffenseRole(const AELSSTeamState* offenseTeam) {
}

void UELSSAIUtility::SetupFgfDefenseTarget(const AELSSTeamState* offenseTeam, const AELSSTeamState* defenseTeam) {
}

void UELSSAIUtility::SetupFgfAI(const UObject* WorldContextObject) {
}

bool UELSSAIUtility::IsInOffenseFixedArea_PassReceiver(AELSSPlayerState* Player, AELSSPlayerState* ballHolder, AELSSGimmickFgfGoal* Goal, FVector& outPos) {
    return false;
}

bool UELSSAIUtility::IsInOffenseFixedArea_Partisan(AELSSPlayerState* Player, AELSSPlayerState* ballHolder, FVector& outPos) {
    return false;
}

bool UELSSAIUtility::IsInBetweenSSPlayers(AELSSPlayerState* A, AELSSPlayerState* B, AELSSPlayerState* C, FVector& outPos) {
    return false;
}

bool UELSSAIUtility::IsInBetweenAandB(AActor* A, AActor* B, AActor* C, FVector& outPos) {
    return false;
}

AELSSGimmickFgfGoal* UELSSAIUtility::GetSSNearFgfGoal(const UObject* WorldContextObject, FVector Pos) {
    return NULL;
}

int32 UELSSAIUtility::GetProbabilityIndexByWeighting(const UObject* WorldContextObject, const TArray<float>& probDatas) {
    return 0;
}

AELSSPlayer* UELSSAIUtility::GetPassTarget(const UObject* WorldContextObject, AELSSPlayerState* myPlayer) {
    return NULL;
}

float UELSSAIUtility::GetObstaclePlayerToFgfGoal(AELSSPlayerState* myPlayer, AELSSPlayerState* checkPlayer) {
    return 0.0f;
}

FVector UELSSAIUtility::GetFgfObstructedMoveIdealLocation(AELSSPlayer* selfPlayer) {
    return FVector{};
}

bool UELSSAIUtility::FindSSPlayerNearToPosInTeam(FVector InPos, AELSSTeamState* inTeam, AELSSPlayerState*& outPlayer, float& outDist) {
    return false;
}

bool UELSSAIUtility::FindPlayerToPass(AELSSPlayerState* myPlayer, AELSSTeamState* offenseTeam, AELSSTeamState* defenseTeam, AELSSPlayerState*& outTarget) {
    return false;
}

bool UELSSAIUtility::FindPlayerToGuard(AELSSTeamState* offenseTeam, AELSSTeamState* defenseTeam, float inDist, AELSSPlayerState*& outTarget) {
    return false;
}

bool UELSSAIUtility::FindFgfGoalToShoot(AELSSPlayerState* inPlayer, TArray<AELSSGimmickFgfGoal*> inGoals, AELSSGimmickFgfGoal*& outGoals, float& outDist) {
    return false;
}

bool UELSSAIUtility::FindFgfGoalToGo(AELSSPlayerState* inPlayer, TArray<AELSSGimmickFgfGoal*> inGoals, AELSSGimmickFgfGoal*& outGoals, float& outDist) {
    return false;
}

UELSSAIUtility::UELSSAIUtility() {
}

