#include "ELEditItemListDataAssetBase.h"

void UELEditItemListDataAssetBase::LoadDataTable(const TSoftObjectPtr<UDataTable>& Source, UDataTable*& DataTable) {
}

void UELEditItemListDataAssetBase::ImportEditItems_Implementation(const UDataTable* DataTable) {
}

void UELEditItemListDataAssetBase::ImportDataTable() {
}

UDataTable* UELEditItemListDataAssetBase::GetEditItemDataTable() {
    return NULL;
}

UELEditItemListDataAssetBase::UELEditItemListDataAssetBase() {
    this->EditItemListTable = NULL;
}

