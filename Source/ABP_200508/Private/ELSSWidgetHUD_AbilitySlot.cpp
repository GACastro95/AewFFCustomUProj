#include "ELSSWidgetHUD_AbilitySlot.h"

void UELSSWidgetHUD_AbilitySlot::SetStateSlotButtonVisible(bool inIsVisible) {
}


void UELSSWidgetHUD_AbilitySlot::SetGaugeParam(float InRatio) {
}

void UELSSWidgetHUD_AbilitySlot::SetCoolTimeText(int32 InValue) {
}

void UELSSWidgetHUD_AbilitySlot::SetButtonVisible(bool inIsVisible) {
}

void UELSSWidgetHUD_AbilitySlot::SetAbilityVisible(bool inIsVisible) {
}

void UELSSWidgetHUD_AbilitySlot::SetAbility(const FSSAbilityParam& inAbilityParam) {
}

void UELSSWidgetHUD_AbilitySlot::Reset() {
}

void UELSSWidgetHUD_AbilitySlot::OnFinishedPlayStandByEffect() {
}

void UELSSWidgetHUD_AbilitySlot::InitDefaultState() {
}


void UELSSWidgetHUD_AbilitySlot::ApplyWatchGameMode() {
}

void UELSSWidgetHUD_AbilitySlot::ApplyEffectiveGauge(float inRemainTime, float inDurationTime) {
}

void UELSSWidgetHUD_AbilitySlot::ApplyCoolTimeGauge(float inRemainTime, float inDurationTime) {
}

UELSSWidgetHUD_AbilitySlot::UELSSWidgetHUD_AbilitySlot() {
    this->AbilityGaugeMaterial = NULL;
    this->AbilityCoolTimeMaterial_001 = NULL;
    this->AbilityCoolTimeMaterial_010 = NULL;
    this->AbilityCoolTimeMaterial_100 = NULL;
    this->ButtonHoldAnim = NULL;
    this->ButtonDefaultAnim = NULL;
    this->AbilityStandbyEffectAnim = NULL;
    this->AbilityStandbyAnim = NULL;
    this->AbilityActiveAnim = NULL;
    this->AbilityCoolTimeAnim = NULL;
    this->AbilityIconImage = NULL;
    this->EffectWidget = NULL;
    this->LayoutWidget = NULL;
    this->ButtonFontWidget = NULL;
    this->CoolTimeFont_001Widget = NULL;
    this->CoolTimeFont_010Widget = NULL;
    this->CoolTimeFont_100Widget = NULL;
    this->CoolTimeFontWidget = NULL;
    this->CoolTimeValue = -1;
    this->IsButtonVisible = false;
    this->IsButtonDefaultState = false;
    this->IsAbilityUsingTime = false;
    this->IsAbilityCoolTime = false;
    this->IsWatchGameMode = false;
}

