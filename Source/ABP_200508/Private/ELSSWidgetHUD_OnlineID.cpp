#include "ELSSWidgetHUD_OnlineID.h"

UELSSWidgetHUD_OnlineID::UELSSWidgetHUD_OnlineID() {
    this->TextWidget = NULL;
    this->MedalWidget = NULL;
    this->MatchIconWidget = NULL;
    this->TargetActor = NULL;
    this->PlayerController = NULL;
    this->Validratio = 0.05f;
    this->DoneFirstVisible = false;
}

void UELSSWidgetHUD_OnlineID::UpdatePosAndVisible() {
}


void UELSSWidgetHUD_OnlineID::Update(float InDeltaTime) {
}

void UELSSWidgetHUD_OnlineID::ShowOff() {
}

void UELSSWidgetHUD_OnlineID::SetVisibleText(bool inIsVisible) {
}

void UELSSWidgetHUD_OnlineID::SetTargetActorandOnlineID(AActor* inTargetActor, const FString& InOnlineID, bool InHasCarrot, ESSMatchIconType InIconType) {
}



void UELSSWidgetHUD_OnlineID::SetCarrotMedal(bool InHasCarrot) {
}


bool UELSSWidgetHUD_OnlineID::IsValidScreenPos(FVector2D InCanvasPos, float inScale) {
    return false;
}


AActor* UELSSWidgetHUD_OnlineID::GetTargetActor() {
    return NULL;
}


