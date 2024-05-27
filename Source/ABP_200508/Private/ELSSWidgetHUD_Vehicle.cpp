#include "ELSSWidgetHUD_Vehicle.h"

UELSSWidgetHUD_Vehicle::UELSSWidgetHUD_Vehicle() {
    this->GaugeMaterial = NULL;
    this->GaugeDiffMaterial = NULL;
    this->VehicleIconImage = NULL;
    this->TargetActor = NULL;
    this->PlayerController = NULL;
    this->DurableMaxValue = 0;
    this->IdealDurableValue = 0;
    this->VehicleDurability = 0.00f;
    this->Duration = 0.00f;
    this->Elapsed = 0.00f;
    this->IsCompleteDuration = false;
}

void UELSSWidgetHUD_Vehicle::UpdatePos() {
}

void UELSSWidgetHUD_Vehicle::Update(float InDeltaTime) {
}

void UELSSWidgetHUD_Vehicle::SetTargetActor(AActor* inTargetActor, const FVector& InOffset) {
}


void UELSSWidgetHUD_Vehicle::ApplyVehicleGauge(float InDurableRatio) {
}

void UELSSWidgetHUD_Vehicle::ApplyVehicleDurability(int32 InVehicleDurability, int32 InMaxDurability, bool InGaugeTransition, ESSVehicleType InVehicleType) {
}


