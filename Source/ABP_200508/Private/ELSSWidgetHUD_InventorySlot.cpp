#include "ELSSWidgetHUD_InventorySlot.h"




void UELSSWidgetHUD_InventorySlot::SetThumbnail(int32 InPickupID, ESSPickupType InPickuptype, bool InIsSelected) {
}

void UELSSWidgetHUD_InventorySlot::SetSelectState(bool InIsSelected) {
}



void UELSSWidgetHUD_InventorySlot::SetGuideVisible(bool inIsVisible) {
}

void UELSSWidgetHUD_InventorySlot::SetEmpty() {
}

void UELSSWidgetHUD_InventorySlot::SetDurabilityVisible(bool inIsVisible) {
}

void UELSSWidgetHUD_InventorySlot::SetDurabilityValue(int32 inDurability) {
}


bool UELSSWidgetHUD_InventorySlot::IsEmpty() {
    return false;
}


UTexture2D* UELSSWidgetHUD_InventorySlot::GetTexture(int32 InID, ESSPickupType InPickuptype) {
    return NULL;
}

ESSPickupType UELSSWidgetHUD_InventorySlot::GetPickupType() {
    return ESSPickupType::None;
}

int32 UELSSWidgetHUD_InventorySlot::GetItemId() {
    return 0;
}

bool UELSSWidgetHUD_InventorySlot::GetIsSelected() {
    return false;
}

int32 UELSSWidgetHUD_InventorySlot::GetDurability() {
    return 0;
}

void UELSSWidgetHUD_InventorySlot::CheckDonePlayAnimations() {
}

void UELSSWidgetHUD_InventorySlot::ApplyWatchGameMode() {
}

UELSSWidgetHUD_InventorySlot::UELSSWidgetHUD_InventorySlot() {
    this->StateActiveAnim = NULL;
    this->StateInActiveAnim = NULL;
    this->EmptyAnim = NULL;
    this->DurabilityWidget = NULL;
    this->GuideButtonWidget = NULL;
    this->ItemThumbnailTexImage = NULL;
    this->ItemThumbnailShadowImage = NULL;
    this->RarityTexImage = NULL;
    this->RarityTexAddImage = NULL;
    this->UnlockableItemRarityDataTable = NULL;
    this->ItemId = 0;
    this->DurabilityValue = 0;
    this->PickupType = ESSPickupType::None;
    this->IsEmptyFlag = false;
    this->IsSelected = false;
    this->IsWatchGameMode = false;
}

