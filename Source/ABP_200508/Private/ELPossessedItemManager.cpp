#include "ELPossessedItemManager.h"

UELPossessedItemManager::UELPossessedItemManager() {
}

void UELPossessedItemManager::SetupPossessedItemDataTable(TSoftObjectPtr<UDataTable> _itemDT, UObject* _pWorldContextObject) {
}

void UELPossessedItemManager::GetPossessedItemSaveDataFromIdList(TArray<int32> _targetItemIdList, TArray<FPossessedItemSaveData>& ResultList) {
}

void UELPossessedItemManager::GetPossessedItemSaveDataFromID(int32 _targetItemId, FPossessedItemSaveData& Result) {
}

void UELPossessedItemManager::GetPossessedItemInfoFromIdList(TArray<int32> _targetItemIdList, TArray<FPossessedItemParam>& ItemParamList, TArray<FPossessedItemSaveData>& ItemSaveDataList) {
}

void UELPossessedItemManager::GetPossessedItemInfoFromID(int32 _targetItemId, FPossessedItemParam& ItemParam, FPossessedItemSaveData& ItemSaveData) {
}

void UELPossessedItemManager::GetItemParamFromItemType(TArray<FPossessedItemParam>& _outResultList, EPossessedItemType _targetType) {
}

void UELPossessedItemManager::GetItemParamFromID(TArray<FPossessedItemParam>& _outResultList, TArray<int32> _targetIdList) {
}

void UELPossessedItemManager::GetExtendItemParamFromTarget(TArray<FPossessedItemParam>& _outResultList, EPossessedItemExtendTarget _targetType) {
}

void UELPossessedItemManager::GetConsumeItemParamFromTarget(FPossessedItemParam& _outResultList, EPossessedItemConsumeTarget _targetType) {
}

void UELPossessedItemManager::GetAllItemSaveData(TArray<FPossessedItemSaveData>& _outResultList) {
}

void UELPossessedItemManager::GetAllItemParam(TArray<FPossessedItemParam>& _outResultList) {
}

void UELPossessedItemManager::AddItemQuantity(TArray<FAddPossessItemQuantity> _addItem, FUpdateItemQuantityCompleteDelegate OnResultDelegate) {
}


