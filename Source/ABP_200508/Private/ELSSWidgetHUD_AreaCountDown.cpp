#include "ELSSWidgetHUD_AreaCountDown.h"

void UELSSWidgetHUD_AreaCountDown::PlayOut() {
}

void UELSSWidgetHUD_AreaCountDown::PlayIn() {
}


FString UELSSWidgetHUD_AreaCountDown::GetAnnounceText(ESSAreaCountDownTextType InTextType) {
    return TEXT("");
}

void UELSSWidgetHUD_AreaCountDown::ApplyCountText(bool InIsMinute) {
}


void UELSSWidgetHUD_AreaCountDown::ApplyAreaCountDown(bool inIsVisible, float InSecond, ESSAreaCountDownTextType InTextType) {
}

UELSSWidgetHUD_AreaCountDown::UELSSWidgetHUD_AreaCountDown() {
    this->CountMinute_10Material = NULL;
    this->CountMinute_01Material = NULL;
    this->CountSecond_10Material = NULL;
    this->CountSecond_01Material = NULL;
    this->PlayInAnim = NULL;
    this->PlayOutAnim = NULL;
    this->Minutes = 0.00f;
    this->Seconds = 0.00f;
    this->IsShowAreaCountDown = false;
}

