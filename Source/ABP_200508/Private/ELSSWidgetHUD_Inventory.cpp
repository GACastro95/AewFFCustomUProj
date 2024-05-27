#include "ELSSWidgetHUD_Inventory.h"

UELSSWidgetHUD_Inventory::UELSSWidgetHUD_Inventory() {
    this->PlayInWeaponNameAnim = NULL;
    this->SelectSlotIndex = 0;
    this->IsFGFballState = false;
}


void UELSSWidgetHUD_Inventory::SetVisibleOperationButton(bool inIsVisible) {
}

void UELSSWidgetHUD_Inventory::SetSlotKeyConfig(EKeyMappingType InKeyMapType, bool InIsLeft) {
}

void UELSSWidgetHUD_Inventory::SetInventoryPosition(int32 InIndex) {
}

void UELSSWidgetHUD_Inventory::SetInventoryLimit(bool InFlag) {
}

void UELSSWidgetHUD_Inventory::SetInventoryIconValue(int32 InIndex, int32 inDurability) {
}

void UELSSWidgetHUD_Inventory::PlayInWeaponName() {
}

FString UELSSWidgetHUD_Inventory::GetItemName(int32 InItemId, ESSPickupType InPickuptype) {
    return TEXT("");
}

void UELSSWidgetHUD_Inventory::DeleteInventoryIcon(int32 InIndex) {
}

void UELSSWidgetHUD_Inventory::ApplyWatchGameMode() {
}

void UELSSWidgetHUD_Inventory::ApplyInventoryIcon(int32 InIndex, ESSPickupType InPickuptype, int32 InPickupID, int32 inDurability) {
}

void UELSSWidgetHUD_Inventory::ApplyFGFBallState(bool IsInDefault, int32 InBallLevel) {
}

void UELSSWidgetHUD_Inventory::ApplyBareIconGuideState() {
}


