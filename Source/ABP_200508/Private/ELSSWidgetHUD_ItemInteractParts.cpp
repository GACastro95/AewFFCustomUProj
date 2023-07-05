#include "ELSSWidgetHUD_ItemInteractParts.h"



void UELSSWidgetHUD_ItemInteractParts::SetItemTexture(ESSInteractOperate InInteractOperate, ESSPickupType InPickuptype, int32 InItemId, int32 InItemDurability, int32 inSlotIndex) {
}



void UELSSWidgetHUD_ItemInteractParts::SetInventoryItem(ESSInteractOperate InInteractOperate, ESSPickupType InPickuptype, int32 InItemId, int32 InItemDurability) {
}

void UELSSWidgetHUD_ItemInteractParts::SetInteractItem(ESSInteractOperate InInteractOperate, ESSPickupType InPickuptype, int32 InItemId, int32 InItemDurability) {
}


void UELSSWidgetHUD_ItemInteractParts::SetBareIcon() {
}



UTexture2D* UELSSWidgetHUD_ItemInteractParts::GetTexture(int32 InID, ESSPickupType InPickuptype) {
    return NULL;
}

ESSRarity UELSSWidgetHUD_ItemInteractParts::GetRarity(int32 InID, ESSPickupType InPickuptype) {
    return ESSRarity::None;
}

FString UELSSWidgetHUD_ItemInteractParts::GetItemName(int32 InID, ESSPickupType InPickuptype) {
    return TEXT("");
}


UELSSWidgetHUD_ItemInteractParts::UELSSWidgetHUD_ItemInteractParts() {
    this->PlayActiveAnim = NULL;
    this->PlayInActiveAnim = NULL;
    this->IconImage = NULL;
    this->ItemDurabilityWidget = NULL;
    this->ArrowWidget = NULL;
    this->CommandWidget = NULL;
    this->UnlockableItemRarityDataTable = NULL;
    this->BareIconTexture = NULL;
    this->PreInventoryInteractOperate = ESSInteractOperate::None;
}

