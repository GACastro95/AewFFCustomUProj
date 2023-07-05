#include "ELSSWidgetHUD_HeatMeter.h"

void UELSSWidgetHUD_HeatMeter::Update(float InDeltaTime) {
}


void UELSSWidgetHUD_HeatMeter::OnHeatLevelUp() {
}


void UELSSWidgetHUD_HeatMeter::ApplyHeatMeterGauge(float InRatio) {
}

void UELSSWidgetHUD_HeatMeter::ApplyHeatMeter(int32 inHeatLevel, float InExpRatio, bool InGaugeTransition) {
}


UELSSWidgetHUD_HeatMeter::UELSSWidgetHUD_HeatMeter() {
    this->HeatMeterGaugeMaterial = NULL;
    this->HeatMeterGaugeDiffMaterial = NULL;
    this->HeatMeaterLvUp = NULL;
    this->HeatMeaterAdd = NULL;
    this->HeatLevel = 0;
    this->IdealHeatLevel = 0;
    this->HeatExpRatio = 0.00f;
    this->IdealHeatExpRatio = 0.00f;
    this->Duration = 0.00f;
    this->Elapsed = 0.00f;
    this->IsCompleteDuration = false;
}

