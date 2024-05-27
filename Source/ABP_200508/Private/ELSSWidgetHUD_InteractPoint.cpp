#include "ELSSWidgetHUD_InteractPoint.h"

UELSSWidgetHUD_InteractPoint::UELSSWidgetHUD_InteractPoint() {
    this->TextWidget = NULL;
    this->TargetActor = NULL;
    this->PlayerController = NULL;
    this->MaxDistance = 1300.00f;
}

void UELSSWidgetHUD_InteractPoint::UpdateShow(float inDistance, float InDeltaTime) {
}

float UELSSWidgetHUD_InteractPoint::UpdatePos() {
    return 0.0f;
}


void UELSSWidgetHUD_InteractPoint::Update(float InDeltaTime) {
}

void UELSSWidgetHUD_InteractPoint::ShowOff() {
}

void UELSSWidgetHUD_InteractPoint::SetVisibleText(bool inIsVisible) {
}

void UELSSWidgetHUD_InteractPoint::SetTargetActor(AActor* inTargetActor) {
}


AActor* UELSSWidgetHUD_InteractPoint::GetTargetActor() {
    return NULL;
}


