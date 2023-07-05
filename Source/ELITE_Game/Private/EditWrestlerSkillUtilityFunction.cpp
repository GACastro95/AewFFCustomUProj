#include "EditWrestlerSkillUtilityFunction.h"

void UEditWrestlerSkillUtilityFunction::SetPassiveSkill(FWrestlingSkillParam& Param, const int32 Type, const bool Value) {
}

void UEditWrestlerSkillUtilityFunction::SetActionSkill(FWrestlingSkillParam& Param, const int32 Type, const bool Value) {
}

void UEditWrestlerSkillUtilityFunction::SetAbilityScore(FWrestlingSkillParam& Param, const EAbilityScoreType Type, const int32 Value) {
}

void UEditWrestlerSkillUtilityFunction::MakeWrestlerProfileSkillFromWrestlingSkillParam(FELWrestlerProfile_Skill& WrestlerProfile_Skill, const FWrestlingSkillParam& WrestlingSkillParam) {
}

bool UEditWrestlerSkillUtilityFunction::GetPassiveSkill(const FWrestlingSkillParam& Param, const int32 Type) {
    return false;
}

void UEditWrestlerSkillUtilityFunction::GetActivePassiveSkills(const FWrestlingSkillParam& Param, TSet<int32>& List) {
}

void UEditWrestlerSkillUtilityFunction::GetActiveActionSkills(const FWrestlingSkillParam& Param, TSet<int32>& List) {
}

bool UEditWrestlerSkillUtilityFunction::GetActionSkill(const FWrestlingSkillParam& Param, const int32 Type) {
    return false;
}

int32 UEditWrestlerSkillUtilityFunction::GetAbilityScore(const FWrestlingSkillParam& Param, const EAbilityScoreType Type) {
    return 0;
}

UEditWrestlerSkillUtilityFunction::UEditWrestlerSkillUtilityFunction() {
}

