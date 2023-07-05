#include "ELSSOutGameDatabase.h"

bool AELSSOutGameDatabase::GetWrestlerTypeParam(ESSWrestlerType inWrestlerType, FSSWrestlerTypeParam& OutRow) {
    return false;
}

bool AELSSOutGameDatabase::GetWrestlerParam(EWrestlerID_N inWrestlerId, FSSWrestlerParam& OutRow) {
    return false;
}

void AELSSOutGameDatabase::GetSortedAbilityParamArray(ESSAbilitySortType inSortType, TArray<FSSAbilityParam>& outAbilityParam) {
}

bool AELSSOutGameDatabase::GetMoveParamById(int32 MoveId, FSSMoveParam& OutRow) {
    return false;
}

int32 AELSSOutGameDatabase::GetMenuFinisherParamCount() const {
    return 0;
}

bool AELSSOutGameDatabase::GetMenuFinisherParamByIndex(int32 Index, FSSMenuFinisherParam& OutRow) const {
    return false;
}

bool AELSSOutGameDatabase::GetMenuFinisherParamById(int32 inFinisherId, FSSMenuFinisherParam& OutRow) const {
    return false;
}

bool AELSSOutGameDatabase::GetMenuFinisherParamArray(TArray<FSSMenuFinisherParam>& outArray) {
    return false;
}

bool AELSSOutGameDatabase::GetHeatSkillParam(int32 ID, FSSHeatSkillParam& OutRow) {
    return false;
}

int32 AELSSOutGameDatabase::GetHeatSkillIdFromTree(ESSHeatSkillCategory inCategory, int32 inRow, int32 inColumn) const {
    return 0;
}

void AELSSOutGameDatabase::GetHeatSkillIdAndLevelFromTree(ESSHeatSkillCategory inCategory, int32 inRow, int32 inColumn, int32& outHeatSkillId, int32& outConditionHeatLevel) const {
}

UTexture2D* AELSSOutGameDatabase::GetHeatSkillIconTexture(int32 inHeatSkillId) const {
    return NULL;
}

bool AELSSOutGameDatabase::GetAbilityParam(int32 ID, FSSAbilityParam& OutRow) {
    return false;
}

AELSSOutGameDatabase::AELSSOutGameDatabase() {
    this->WrestlerParamTable = NULL;
    this->WrestlerTypeParamTable = NULL;
    this->AbilityParamTable = NULL;
    this->HeatSkillParamTable = NULL;
    this->HeatSkillTreeParamTable = NULL;
    this->HeatSkillIconTable = NULL;
    this->MoveParamTable = NULL;
    this->MenuFinisherParamTable = NULL;
}

