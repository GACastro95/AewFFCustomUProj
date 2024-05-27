#include "ELCareerStateManager.h"

AELCareerStateManager::AELCareerStateManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_ELGameInstance = NULL;
    this->m_pEventComponent = NULL;
    this->TShirtDataTable = NULL;
    this->SpecialRewardDataTable = NULL;
    this->GotAEWCashDataTable = NULL;
    this->CareerResultDataTable = NULL;
}






bool AELCareerStateManager::IsSchedule_Ending() const {
    return false;
}

bool AELCareerStateManager::GetCareerResultData(const int32 _Score, FCareerResultData& _Data) {
    return false;
}

void AELCareerStateManager::CheckState_Cancel() {
}

void AELCareerStateManager::CheckState(int32 _WidgetOperationResult) {
}

void AELCareerStateManager::CheckMatchOperationFromWidget(UELMenuWidgetBase* pWidget) {
}


