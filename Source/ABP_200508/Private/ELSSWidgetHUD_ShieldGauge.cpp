#include "ELSSWidgetHUD_ShieldGauge.h"

void UELSSWidgetHUD_ShieldGauge::UpdateShow(float inDistance, float InDeltaTime) {
}

void UELSSWidgetHUD_ShieldGauge::UpdateShield(float InDeltaTime) {
}

float UELSSWidgetHUD_ShieldGauge::UpdatePos() {
    return 0.0f;
}


void UELSSWidgetHUD_ShieldGauge::Update(float InDeltaTime) {
}

void UELSSWidgetHUD_ShieldGauge::ShowOff() {
}

void UELSSWidgetHUD_ShieldGauge::SetVisibleGauge(bool inIsVisible) {
}

void UELSSWidgetHUD_ShieldGauge::SetTargetActor(AActor* inTargetActor) {
}


AActor* UELSSWidgetHUD_ShieldGauge::GetTargetActor() {
    return NULL;
}

FVector2D UELSSWidgetHUD_ShieldGauge::GetScale(float inDistance) {
    return FVector2D{};
}

void UELSSWidgetHUD_ShieldGauge::ApplyShieldGauge(float InShieldDurableValueRatio) {
}

void UELSSWidgetHUD_ShieldGauge::ApplyShieldDurableValue(int32 InNowShieldDurableValue, int32 InShieldDurableValue, int32 InMaxShieldDurableValue) {
}

UELSSWidgetHUD_ShieldGauge::UELSSWidgetHUD_ShieldGauge() {
    this->ShieldGaugeMaterial = NULL;
    this->ShieldGaugeDiffMaterial = NULL;
    this->GaugeWidget = NULL;
    this->TargetActor = NULL;
    this->PlayerController = NULL;
    this->ShieldDurableMaxValue = 0;
    this->IdealShieldDurableValue = 0;
    this->ShieldDurableValue = 0.00f;
    this->ShieldDurableValueDuration = 0.00f;
    this->ShieldDurableElapsed = 0.00f;
    this->IsCompleteShieldDuration = false;
    this->BarShowElapsed = 0.00f;
    this->IsGaugeVisible = false;
    this->MaxDistance = 1300.00f;
    this->MinDistance = 300.00f;
    this->MAXSCALE = 1.00f;
    this->MINSCALE = 0.50f;
}

