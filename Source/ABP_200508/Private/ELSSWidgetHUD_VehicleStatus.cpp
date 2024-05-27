#include "ELSSWidgetHUD_VehicleStatus.h"

UELSSWidgetHUD_VehicleStatus::UELSSWidgetHUD_VehicleStatus() {
    this->GaugeMaterial = NULL;
    this->GaugeDiffMaterial = NULL;
    this->VehicleIconImage = NULL;
    this->LayoutWidget = NULL;
    this->DurableMaxValue = 0;
    this->IdealDurableValue = 0;
    this->VehicleDurability = 0.00f;
    this->Duration = 0.00f;
    this->Elapsed = 0.00f;
    this->IsCompleteDuration = false;
    this->IsShowGauge = false;
}

void UELSSWidgetHUD_VehicleStatus::Update(float InDeltaTime) {
}

void UELSSWidgetHUD_VehicleStatus::ShowOff() {
}


void UELSSWidgetHUD_VehicleStatus::ApplyVehicleGauge(float InDurableRatio) {
}

void UELSSWidgetHUD_VehicleStatus::ApplyVehicleDurability(int32 InVehicleDurability, int32 InMaxDurability, bool InGaugeTransition, ESSVehicleType InVehicleType) {
}


