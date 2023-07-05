#include "ELCareerAutoPlayManager.h"

void UELCareerAutoPlayManager::SetDataTable_Scenario_Setting(UDataTable* pDataTable) {
}

void UELCareerAutoPlayManager::SetDataTable_Scenario_Detail(ECareerScenario Index, UDataTable* pDataTable) {
}


ECareerAutoPlay_MatchResult UELCareerAutoPlayManager::GetScenarioDetailWinInfo() {
    return ECareerAutoPlay_MatchResult::Random;
}

int32 UELCareerAutoPlayManager::GetScenarioDetailChoiceNo(const FString& TitleKey) {
    return 0;
}

ECareerDebug_AutoPlayType UELCareerAutoPlayManager::GetAutoPlayType() const {
    return ECareerDebug_AutoPlayType::None;
}

UELCareerAutoPlayManager::UELCareerAutoPlayManager() {
    this->m_DataTable_AutoPlay_Scenario_Setting = NULL;
    this->m_DataTable_AutoPlay_Scenario_Detail[0] = NULL;
    this->m_DataTable_AutoPlay_Scenario_Detail[1] = NULL;
    this->m_DataTable_AutoPlay_Scenario_Detail[2] = NULL;
    this->m_DataTable_AutoPlay_Scenario_Detail[3] = NULL;
    this->m_DataTable_AutoPlay_Scenario_Detail[4] = NULL;
}

