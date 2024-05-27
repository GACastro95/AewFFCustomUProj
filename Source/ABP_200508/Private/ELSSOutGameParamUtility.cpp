#include "ELSSOutGameParamUtility.h"

UELSSOutGameParamUtility::UELSSOutGameParamUtility() {
}

bool UELSSOutGameParamUtility::GetWrestlerTypeParam(const UObject* WorldContextObject, ESSWrestlerType inWrestlerType, FSSWrestlerTypeParam& OutRow) {
    return false;
}

bool UELSSOutGameParamUtility::GetWrestlerParam(const UObject* WorldContextObject, EWrestlerID_N inWrestlerId, FSSWrestlerParam& OutRow) {
    return false;
}

bool UELSSOutGameParamUtility::GetSSOutGameMoveParamById(const UObject* WorldContextObject, int32 MoveId, FSSMoveParam& OutRow) {
    return false;
}

int32 UELSSOutGameParamUtility::GetSSOutGameMenuFinisherParamCount(const UObject* WorldContextObject) {
    return 0;
}

bool UELSSOutGameParamUtility::GetSSOutGameMenuFinisherParamByIndex(const UObject* WorldContextObject, int32 Index, FSSMenuFinisherParam& OutRow) {
    return false;
}

bool UELSSOutGameParamUtility::GetSSOutGameMenuFinisherParamById(const UObject* WorldContextObject, int32 inFinisherId, FSSMenuFinisherParam& OutRow) {
    return false;
}

bool UELSSOutGameParamUtility::GetSSOutGameMenuFinisherParamArray(const UObject* WorldContextObject, TArray<FSSMenuFinisherParam>& outArray) {
    return false;
}

bool UELSSOutGameParamUtility::GetSSOutGameHeatSkillParam(const UObject* WorldContextObject, int32 inHeatSkillId, FSSHeatSkillParam& OutRow) {
    return false;
}

int32 UELSSOutGameParamUtility::GetSSOutGameHeatSkillIdFromTree(const UObject* WorldContextObject, ESSHeatSkillCategory inCategory, int32 inRow, int32 inColumn) {
    return 0;
}

UTexture2D* UELSSOutGameParamUtility::GetSSOutGameHeatSkillIconTexture(const UObject* WorldContextObject, int32 inHeatSkillId) {
    return NULL;
}

AELSSOutGameDatabase* UELSSOutGameParamUtility::GetSSOutGameDatabase(const UObject* WorldContextObject) {
    return NULL;
}

bool UELSSOutGameParamUtility::GetSSOutGameAbilityParam(const UObject* WorldContextObject, int32 ID, FSSAbilityParam& OutRow) {
    return false;
}

void UELSSOutGameParamUtility::GetHeatSkillIdAndLevelFromTree(const UObject* WorldContextObject, ESSHeatSkillCategory inCategory, int32 inRow, int32 inColumn, int32& outHeatSkillId, int32& outConditionHeatLevel) {
}


