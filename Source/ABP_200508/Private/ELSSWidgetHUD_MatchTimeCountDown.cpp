#include "ELSSWidgetHUD_MatchTimeCountDown.h"


void UELSSWidgetHUD_MatchTimeCountDown::ApplyMatchTimeCountDown(float InSecond) {
}

void UELSSWidgetHUD_MatchTimeCountDown::ApplyCountText(bool InIsMinute) {
}

UELSSWidgetHUD_MatchTimeCountDown::UELSSWidgetHUD_MatchTimeCountDown() {
    this->CountMinute_01Material = NULL;
    this->CountSecond_10Material = NULL;
    this->CountSecond_01Material = NULL;
    this->Minutes = 0.00f;
    this->Seconds = 0.00f;
}

