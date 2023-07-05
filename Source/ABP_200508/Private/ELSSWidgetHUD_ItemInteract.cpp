#include "ELSSWidgetHUD_ItemInteract.h"

void UELSSWidgetHUD_ItemInteract::SetKeyConfig(EKeyMappingType InKeyMapType) {
}

void UELSSWidgetHUD_ItemInteract::SetInventoryItem(ESSInteractOperate InInteractOperate, ESSPickupType InPickuptype, int32 InItemId, int32 InItemDurability) {
}

void UELSSWidgetHUD_ItemInteract::SetInteractItem(ESSInteractOperate InInteractOperate, ESSPickupType InPickuptype, int32 InItemId, int32 InItemDurability) {
}

void UELSSWidgetHUD_ItemInteract::ApplyWatchGameMode() {
}

UELSSWidgetHUD_ItemInteract::UELSSWidgetHUD_ItemInteract() {
    this->PickupParts = NULL;
    this->InventoryParts = NULL;
}

