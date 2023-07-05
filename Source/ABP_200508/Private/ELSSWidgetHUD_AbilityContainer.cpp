#include "ELSSWidgetHUD_AbilityContainer.h"

void UELSSWidgetHUD_AbilityContainer::SetVisibleGuide(bool inIsVisible) {
}

void UELSSWidgetHUD_AbilityContainer::SetVisibleAbility(bool inIsVisible) {
}


void UELSSWidgetHUD_AbilityContainer::SetHoldButtonVisible(bool inIsVisible) {
}

void UELSSWidgetHUD_AbilityContainer::ResetAllAbilities() {
}


void UELSSWidgetHUD_AbilityContainer::ApplyWatchGameMode() {
}

UELSSWidgetHUD_AbilityContainer::UELSSWidgetHUD_AbilityContainer() {
    this->FontAbilityWidget = NULL;
    this->FontHoldWidget = NULL;
    this->AbilityWidget = NULL;
    this->SlotVisibleNum = 0;
    this->IsWatchGameMode = false;
    this->CanSwichGuideButton = true;
}

