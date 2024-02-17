#include "ELSSWidgetHUD_WrestlerStatus.h"

void UELSSWidgetHUD_WrestlerStatus::UpdateWrestlerHp(float InDeltaTime) {
}

void UELSSWidgetHUD_WrestlerStatus::UpdateShield(float InDeltaTime) {
}

void UELSSWidgetHUD_WrestlerStatus::UpdateDownHp(float InDeltaTime) {
}

void UELSSWidgetHUD_WrestlerStatus::Update(float InDeltaTime) {
}

void UELSSWidgetHUD_WrestlerStatus::SwitchHpType(bool InIsDownHpShow) {
}





void UELSSWidgetHUD_WrestlerStatus::SetOtherWrestlerFlag(bool InIsOtherWrstler) {
}







void UELSSWidgetHUD_WrestlerStatus::ApplyWrestlerHpGauge(float InWrestlerHpRatio) {
}

void UELSSWidgetHUD_WrestlerStatus::ApplyWrestlerHp(int32 InWrestlerHp, int32 inMaxHP, bool InGaugeTransition) {
}

void UELSSWidgetHUD_WrestlerStatus::ApplyWrestlerDownHpGauge(float InWrestlerDownHpRatio) {
}

void UELSSWidgetHUD_WrestlerStatus::ApplyShieldGauge(float InShieldDurableValueRatio) {
}

void UELSSWidgetHUD_WrestlerStatus::ApplyShieldDurableValue(int32 InShieldDurableValue, int32 InMaxShieldDurableValue, bool InGaugeTransition) {
}

void UELSSWidgetHUD_WrestlerStatus::ApplyMatchIcon(bool inIsVisible, ESSMatchIconType InIconType) {
}

void UELSSWidgetHUD_WrestlerStatus::ApplyDownHp(int32 InWrestlerDownHp, int32 InMaxWrestlerDownHp, bool InGaugeTransition) {
}

void UELSSWidgetHUD_WrestlerStatus::ApplyCarrotMedal(bool inIsVisible) {
}

UELSSWidgetHUD_WrestlerStatus::UELSSWidgetHUD_WrestlerStatus() {
    this->ShieldGaugeMaterial = NULL;
    this->ShieldGaugeDiffMaterial = NULL;
    this->HpGaugeMaterial = NULL;
    this->HpGaugeDiffMaterial = NULL;
    this->KOGaugeMaterial = NULL;
    this->FGFBallMaterial = NULL;
    this->MedalGetAnim = NULL;
    this->MedalReleaseAnim = NULL;
    this->BlackDiaIconGetAnim = NULL;
    this->BlackDiaIconReleaseAnim = NULL;
    this->FGFBallIconGetAnim = NULL;
    this->FGFBallIconReleaseAnim = NULL;
    this->HpGaugeImage = NULL;
    this->DownHpGaugeImage = NULL;
    this->ShieldWidget = NULL;
    this->FGFBallWidget = NULL;
    this->ShieldDurableMaxValue = 0;
    this->HpMaxValue = 0;
    this->DownHpMaxValue = 0;
    this->IdealShieldDurableValue = 0;
    this->IdealHp = 0;
    this->IdealDownHp = 0;
    this->ShieldDurableValue = 0.00f;
    this->WrestlerHp = 0.00f;
    this->WrestlerDownHp = 0.00f;
    this->ShieldDurableValueDuration = 0.00f;
    this->HpDuration = 0.00f;
    this->DownHpDuration = 0.00f;
    this->ShieldDurableElapsed = 0.00f;
    this->HpElapsed = 0.00f;
    this->DownHpElapsed = 0.00f;
    this->IsCompleteShieldDuration = false;
    this->IsCompleteHpDuration = false;
    this->IsCompleteDownHpDuration = false;
    this->IsShowDownHp = false;
    this->IsShowShieldGauge = false;
    this->IsOtherWrestler = false;
}

