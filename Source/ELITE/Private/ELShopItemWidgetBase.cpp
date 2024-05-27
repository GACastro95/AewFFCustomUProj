#include "ELShopItemWidgetBase.h"

UELShopItemWidgetBase::UELShopItemWidgetBase() : UUserWidget(FObjectInitializer::Get()) {
}

void UELShopItemWidgetBase::GetUniqueID(const FShopGeneralItemManageData& _targetData, int32& OutResult) {
}

void UELShopItemWidgetBase::GetThumnail(const FShopGeneralItemManageData& _targetData, TSoftObjectPtr<UTexture2D>& OutResult) {
}

void UELShopItemWidgetBase::GetRarity(const FShopGeneralItemManageData& _targetData, EUnlockableItemRarityType& OutResult) {
}

void UELShopItemWidgetBase::GetPrice(const FShopGeneralItemManageData& _targetData, int32& OutResult) {
}

void UELShopItemWidgetBase::GetName(const FShopGeneralItemManageData& _targetData, FText& OutResult) {
}

void UELShopItemWidgetBase::GetCurrencyType(const FShopGeneralItemManageData& _targetData, EUnlockableItemCurrencyType& OutResult) {
}


