#include "ELEntranceNameplateCommentUtilityFunction.h"

UELEntranceNameplateCommentUtilityFunction::UELEntranceNameplateCommentUtilityFunction() {
}

bool UELEntranceNameplateCommentUtilityFunction::GetValueForReplaceParameter(EELEntranceNameplateCommentValueType ValueType, EWrestlerID_N WrestlerID, FGuid UID, EWrestlerID_N ManagerID, FGuid ManagerUID, EELBelt Belt, EBodyWeightType WeightType, EELTeamID TeamId, const FELMoves_Finisher& Finisher, int32& Value) {
    return false;
}

USaveDataObject_PlayerData* UELEntranceNameplateCommentUtilityFunction::GetCachedPlayerDataObject() {
    return NULL;
}

FString UELEntranceNameplateCommentUtilityFunction::ConvertReplaceParameterToString(EELEntranceNameplateCommentValueType ValueType, const FString& WrestlerName, const FString& ManagerName, const FELMoves_Finisher& Finisher, int32 Value) {
    return TEXT("");
}

bool UELEntranceNameplateCommentUtilityFunction::CompareWrestlerParameter(const USaveDataObject_PlayerData* PlayerData, EELEntranceNameplateCommentConditionType ConditionType, EELEntranceNameplateCommentCompareType CompareType, EWrestlerID_N WrestlerID, FGuid UID, const FWrestlingSkillParam& WrestlingSkillParam, int32 Value, bool& Success) {
    return false;
}

bool UELEntranceNameplateCommentUtilityFunction::CompareTeamParameter(const USaveDataObject_PlayerData* PlayerData, EELEntranceNameplateCommentConditionType ConditionType, EELEntranceNameplateCommentCompareType CompareType, EELTeamID TeamId, int32 Value, bool& Success) {
    return false;
}


