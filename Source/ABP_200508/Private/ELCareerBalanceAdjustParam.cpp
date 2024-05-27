#include "ELCareerBalanceAdjustParam.h"

AELCareerBalanceAdjustParam::AELCareerBalanceAdjustParam(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AELCareerBalanceAdjustParam::SetDataTable_WorkOut_Reward_SuccessRate(UDataTable* pDataTable) {
}

void AELCareerBalanceAdjustParam::SetDataTable_WorkOut_Reward_SkillPoint(UDataTable* pDataTable) {
}

void AELCareerBalanceAdjustParam::SetDataTable_WorkOut_Reward_Energy(UDataTable* pDataTable) {
}

void AELCareerBalanceAdjustParam::SetDataTable_Reward_WinBonus_SkillPoint(UDataTable* pDataTable) {
}

void AELCareerBalanceAdjustParam::SetDataTable_Reward_WinBonus_CareerMoney(UDataTable* pDataTable) {
}

void AELCareerBalanceAdjustParam::SetDataTable_Reward_ScoreBonus_SkillPoint(UDataTable* pDataTable) {
}

void AELCareerBalanceAdjustParam::SetDataTable_Reward_ScoreBonus_CareerMoney(UDataTable* pDataTable) {
}

void AELCareerBalanceAdjustParam::SetDataTable_Reward_Motivation(UDataTable* pDataTable) {
}

void AELCareerBalanceAdjustParam::SetDataTable_Reward_Hospital(UDataTable* pDataTable) {
}

void AELCareerBalanceAdjustParam::SetDataTable_Reward_Energy(UDataTable* pDataTable) {
}

void AELCareerBalanceAdjustParam::SetDataTable_Reward_Dining(UDataTable* pDataTable) {
}

void AELCareerBalanceAdjustParam::SetDataTable_Records_ScenarioPercent(UDataTable* pDataTable) {
}

void AELCareerBalanceAdjustParam::SetDataTable_Records_BestScoreStar(UDataTable* pDataTable) {
}

int32 AELCareerBalanceAdjustParam::GetValue_WorkOut_Reward_ChangeSkillPoint(ECareerPostCommandEventType _CommandType) {
    return 0;
}

int32 AELCareerBalanceAdjustParam::GetValue_WorkOut_Reward_ChangeEnagy(ECareerPostCommandEventType _CommandType) {
    return 0;
}

int32 AELCareerBalanceAdjustParam::GetValue_Records_ScoreStar_StarValue(int32 _ScoreValue) {
    return 0;
}

bool AELCareerBalanceAdjustParam::GetValue_Records_ScoreStar_HalfStarBool(int32 _ScoreValue) {
    return false;
}

float AELCareerBalanceAdjustParam::GetValue_Records_Scenario_PercentValue(ECareerScenarioMatchTiming _ScenarioPart) {
    return 0.0f;
}

int32 AELCareerBalanceAdjustParam::GetValue_Dining_Reward_EnagyHealValue(ECareerPostCommandEventType _CommandType) {
    return 0;
}

ECareerDiningType AELCareerBalanceAdjustParam::GetType_Dining_Reward_DiningType(ECareerPostCommandEventType _CommandType) {
    return ECareerDiningType::None;
}

int32 AELCareerBalanceAdjustParam::GetRate_WorkOut_Reward_SuccessRate(ECareerPostCommandEventType _CommandType) {
    return 0;
}

int32 AELCareerBalanceAdjustParam::GetRate_Hospital_Reward_SuccessRate(ECareerPostCommandEventType _CommandType) {
    return 0;
}

int32 AELCareerBalanceAdjustParam::GetRate_Hospital_Reward_NeedCareerMoney(ECareerPostCommandEventType _CommandType) {
    return 0;
}

int32 AELCareerBalanceAdjustParam::GetRate_Hospital_Reward_EnagyHealPercent(ECareerPostCommandEventType _CommandType) {
    return 0;
}

FName AELCareerBalanceAdjustParam::GetKey_Dining_Reward_Description(ECareerPostCommandEventType _CommandType) {
    return NAME_None;
}


