#include "ELShopGeneralWidgetBase.h"

UELShopGeneralWidgetBase::UELShopGeneralWidgetBase() {
}

void UELShopGeneralWidgetBase::UpdateParameter(EShopDisplayCategory _targetCategory) {
}

void UELShopGeneralWidgetBase::SetNormalDisplayCursorIndex(int32 _Index) {
}

void UELShopGeneralWidgetBase::SetDisplayListNum(int32 _num) {
}

void UELShopGeneralWidgetBase::SetCurrentListScrollDirectionType(EShopGeneralListScrollDirectionType _type) {
}

void UELShopGeneralWidgetBase::PurchasedPostProcess() {
}







bool UELShopGeneralWidgetBase::IsPurchasedItem(int32 _Index) {
    return false;
}

bool UELShopGeneralWidgetBase::IsMovedCursorLeft() const {
    return false;
}

bool UELShopGeneralWidgetBase::IsItemSaleState() {
    return false;
}

void UELShopGeneralWidgetBase::InitializeParameter(TArray<FShopDisplayParam> _targetShopDisplayParamList) {
}

int32 UELShopGeneralWidgetBase::GetNormalDisplayCursorIndex() const {
    return 0;
}

int32 UELShopGeneralWidgetBase::GetDisplayItemNum() const {
    return 0;
}

FShopGeneralItemDisplayData UELShopGeneralWidgetBase::GetDisplayDataFromIndex(int32 _Index) {
    return FShopGeneralItemDisplayData{};
}

EShopGeneralListScrollDirectionType UELShopGeneralWidgetBase::GetCurrentListScrollDirectionType() const {
    return EShopGeneralListScrollDirectionType::None;
}

FShopGeneralItemManageData UELShopGeneralWidgetBase::GetCurrentItemManageData() {
    return FShopGeneralItemManageData{};
}

void UELShopGeneralWidgetBase::CheckValidNormalDisplayCursorIndex() {
}

void UELShopGeneralWidgetBase::ChangeListViewType(bool IsTextType) {
}


