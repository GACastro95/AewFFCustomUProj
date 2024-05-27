#include "SaveDataObject_CareerModeSystem.h"

USaveDataObject_CareerModeSystem::USaveDataObject_CareerModeSystem() {
}

void USaveDataObject_CareerModeSystem::SetSnapshotParams(const TArray<FCareerSnapshotParam>& Params) {
}

void USaveDataObject_CareerModeSystem::SetSnapshotParam(int32 Index, const FCareerSnapshotParam& Param) {
}

bool USaveDataObject_CareerModeSystem::SetSaveDataToCareerGameParam(UELCareerGameParam* _careerGameParam) {
    return false;
}

bool USaveDataObject_CareerModeSystem::SetCareerGameParamToSaveData(UELCareerGameParam* _careerGameParam) {
    return false;
}

bool USaveDataObject_CareerModeSystem::GetSnapshotParams(TArray<FCareerSnapshotParam>& OutParams) const {
    return false;
}

bool USaveDataObject_CareerModeSystem::GetSnapshotParam(int32 Index, FCareerSnapshotParam& OutParam) const {
    return false;
}


