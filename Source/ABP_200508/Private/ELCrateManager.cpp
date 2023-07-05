#include "ELCrateManager.h"

void UELCrateManager::UpdateRandomSeed() {
}

void UELCrateManager::UpdateEjectedItemData() {
}

bool UELCrateManager::StartEjectingItems(const int32 _ejectCountNum, TArray<FCrateItemParam>& _resultItemList, FCrateEjectingCompleteDelegate OnResultDelegate) {
    return false;
}

void UELCrateManager::SetupCrateDataTable() {
}

void UELCrateManager::OnUpdatePossessedItem(bool Successed) {
}

void UELCrateManager::OnUnlockableItemPurchased(bool Successed) {
}

int32 UELCrateManager::GetRemainCrateItemNum() {
    return 0;
}

int32 UELCrateManager::GetEjectedItemsRate() {
    return 0;
}

void UELCrateManager::GetAllEjectItemParamList(TArray<FCrateItemStateParam>& _outList) {
}

UELCrateManager::UELCrateManager() {
    this->m_CrateItemDataTable = NULL;
}

