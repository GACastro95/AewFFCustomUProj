#include "ELSSFgfUtility.h"

bool UELSSFgfUtility::IsSyncedSSFgfMatchInfo(const UObject* WorldContextObject) {
    return false;
}

bool UELSSFgfUtility::IsSSFgfLocalPlayerTeamOffense(const UObject* WorldContextObject) {
    return false;
}

bool UELSSFgfUtility::IsSSFgfLocalPlayerTeamDefense(const UObject* WorldContextObject) {
    return false;
}

bool UELSSFgfUtility::IsSSFgfBallFree(const UObject* WorldContextObject) {
    return false;
}

int32 UELSSFgfUtility::GetSSFgfTigerTeamId(const UObject* WorldContextObject) {
    return 0;
}

AELSSTeamState* UELSSFgfUtility::GetSSFgfTeamState(const UObject* WorldContextObject, bool isOffense) {
    return NULL;
}

int32 UELSSFgfUtility::GetSSFgfSecondTeamId(const UObject* WorldContextObject) {
    return 0;
}

bool UELSSFgfUtility::GetSSFgfMatchInfo(const UObject* WorldContextObject, FSSFgfMatchInfo& OutParam) {
    return false;
}

AELSSFgfManager* UELSSFgfUtility::GetSSFgfManager(const UObject* WorldContextObject) {
    return NULL;
}

TArray<AELSSGimmickFgfGoal*> UELSSFgfUtility::GetSSFgfGoals(const UObject* WorldContextObject) {
    return TArray<AELSSGimmickFgfGoal*>();
}

int32 UELSSFgfUtility::GetSSFgfFirstTeamId(const UObject* WorldContextObject) {
    return 0;
}

int32 UELSSFgfUtility::GetSSFgfDragonTeamId(const UObject* WorldContextObject) {
    return 0;
}

AELSSWeaponFgfBall* UELSSFgfUtility::GetSSFgfBall(const UObject* WorldContextObject) {
    return NULL;
}

TArray<AELSSItemBox*> UELSSFgfUtility::GetSSDefenseTeamTreasureBoxes(const UObject* WorldContextObject) {
    return TArray<AELSSItemBox*>();
}

bool UELSSFgfUtility::GetNearLocatorPos(const UObject* WorldContextObject, FVector InPos, FVector& outPos) {
    return false;
}

bool UELSSFgfUtility::CheckSSFgfMatchInfo(const UObject* WorldContextObject, bool& outIamTiger, bool& outIamPlayFirst) {
    return false;
}

UELSSFgfUtility::UELSSFgfUtility() {
}

