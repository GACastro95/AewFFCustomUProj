#include "ELCareerHUBMenuItem.h"

UELCareerHUBMenuItem::UELCareerHUBMenuItem() {
    this->NumHorizontalItems = 1;
    this->NumVerticalItems = 1;
    this->CurrentMode = ECareerHUBMenuItemMode::None;
    this->Operation = ECareerHUBMenuItemOperation::Default;
    this->TShirtData = NULL;
    this->m_bOpenDirLeft = false;
}

void UELCareerHUBMenuItem::SetCanMoveCursor(bool bFlag) {
}

void UELCareerHUBMenuItem::PurchaseItem(const FCareerItemData& ItemData) {
}

void UELCareerHUBMenuItem::OpenMenuLR(bool _bOpenDirLeft) {
}


void UELCareerHUBMenuItem::OnHoverdCursor(int32 InCursorIndex) {
}




bool UELCareerHUBMenuItem::IsMenuTop() {
    return false;
}

ECareerItemPurchaseState UELCareerHUBMenuItem::GetPurchaseItemState(const FCareerItemData& ItemData) const {
    return ECareerItemPurchaseState::None;
}

bool UELCareerHUBMenuItem::GetPurchasableTShirt(int32& UniqueID) {
    return false;
}

int32 UELCareerHUBMenuItem::GetItemPrice(const FCareerItemData& ItemData) const {
    return 0;
}


ECareerItemEffect UELCareerHUBMenuItem::CheckMomentumEffect(const FCareerItemData& ItemData) const {
    return ECareerItemEffect::None;
}

bool UELCareerHUBMenuItem::CanPurchaseItem(const FCareerItemData& ItemData) const {
    return false;
}


