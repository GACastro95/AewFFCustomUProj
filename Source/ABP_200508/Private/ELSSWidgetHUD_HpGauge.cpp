#include "ELSSWidgetHUD_HpGauge.h"

void UELSSWidgetHUD_HpGauge::UpdateWrestlerHp(float InDeltaTime) {
}

void UELSSWidgetHUD_HpGauge::UpdateShow(float inDistance, float InDeltaTime) {
}

float UELSSWidgetHUD_HpGauge::UpdatePos() {
    return 0.0f;
}


void UELSSWidgetHUD_HpGauge::UpdateDownHp(float InDeltaTime) {
}

void UELSSWidgetHUD_HpGauge::Update(float InDeltaTime) {
}

void UELSSWidgetHUD_HpGauge::ShowOff() {
}

void UELSSWidgetHUD_HpGauge::SetVisibleGauge(bool inIsVisible) {
}

void UELSSWidgetHUD_HpGauge::SetTargetActor(AActor* inTargetActor) {
}

void UELSSWidgetHUD_HpGauge::SetDurationType(ESSCharacterHpType InHpType) {
}


AActor* UELSSWidgetHUD_HpGauge::GetTargetActor() {
    return NULL;
}

FVector2D UELSSWidgetHUD_HpGauge::GetScale(float inDistance) {
    return FVector2D{};
}

void UELSSWidgetHUD_HpGauge::ApplyWrestlerHpGauge(float InWrestlerHpRatio) {
}

void UELSSWidgetHUD_HpGauge::ApplyWrestlerHp(int32 InNowWrestlerHp, int32 InWrestlerHp, int32 inMaxHP) {
}

void UELSSWidgetHUD_HpGauge::ApplyWrestlerDownHpGauge(float InWrestlerDownHpRatio) {
}

void UELSSWidgetHUD_HpGauge::ApplyDownHp(int32 InNowWrestlerDownHp, int32 InWrestlerDownHp, int32 InMaxWrestlerDownHp) {
}

UELSSWidgetHUD_HpGauge::UELSSWidgetHUD_HpGauge() {
    this->HpGaugeMaterial = NULL;
    this->HpGaugeDiffMaterial = NULL;
    this->KOGaugeMaterial = NULL;
    this->GaugeWidget = NULL;
    this->KOGaugeWidget = NULL;
    this->HPGaugeWidget = NULL;
    this->TargetActor = NULL;
    this->PlayerController = NULL;
    this->HpMaxValue = 0;
    this->DownHpMaxValue = 0;
    this->IdealHp = 0;
    this->IdealDownHp = 0;
    this->WrestlerHp = 0.00f;
    this->WrestlerDownHp = 0.00f;
    this->HpDuration = 0.00f;
    this->DownHpDuration = 0.00f;
    this->HpElapsed = 0.00f;
    this->DownHpElapsed = 0.00f;
    this->IsCompleteHpDuration = false;
    this->IsCompleteDownHpDuration = false;
    this->BarShowElapsed = 0.00f;
    this->IsShowDownHp = false;
    this->IsGaugeVisible = false;
    this->MaxDistance = 1300.00f;
    this->MinDistance = 300.00f;
    this->MAXSCALE = 1.00f;
    this->MINSCALE = 0.50f;
}

