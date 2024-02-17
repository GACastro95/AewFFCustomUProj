#include "ELSSWidgetHUD_Interact.h"

void UELSSWidgetHUD_Interact::UpdateOpacityAnimation(float InDeltaTime) {
}

void UELSSWidgetHUD_Interact::Update() {
}

void UELSSWidgetHUD_Interact::SetVisibleToItemInteract(ESSInteractOperate InInteractOperate, ESSInteractExecute InType, int32 InPickupID, int32 InPickupDurability) {
}


void UELSSWidgetHUD_Interact::SetVisibleAllInteract(bool inIsVisible) {
}

void UELSSWidgetHUD_Interact::SetTargetActor(AActor* inTargetActor, const FVector& InOffset) {
}


void UELSSWidgetHUD_Interact::SetInventoryItem(ESSInteractOperate InInteractOperate, ESSInteractExecute InType, int32 InInventoryItemID, int32 InInventoryItemDurability) {
}


void UELSSWidgetHUD_Interact::GetInteractParam(ESSInteractExecute InType, bool& Hold, FSlateColor& Color, FString& Text) {
}


void UELSSWidgetHUD_Interact::ApplyWatchGameMode() {
}


UELSSWidgetHUD_Interact::UELSSWidgetHUD_Interact() {
    this->PlayInAnim = NULL;
    this->PlayOutAnim = NULL;
    this->GeneralInteract = NULL;
    this->TeamTreasureBoxInteract = NULL;
    this->LayoutWidget = NULL;
    this->ItemInteract = NULL;
    this->VehicleGauge = NULL;
    this->TargetActor = NULL;
    this->PlayerController = NULL;
    this->InteractType = ESSInteractExecute::None;
    this->PreInteractType = ESSInteractExecute::None;
    this->OpacityElapsed = 0.00f;
    this->IsOpacityAnimation = false;
    this->FadeoutLengthTime = 0.25f;
}

