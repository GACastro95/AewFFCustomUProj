#include "ELSSWidgetHUD_SSLog.h"

UELSSWidgetHUD_SSLog::UELSSWidgetHUD_SSLog() {
    this->PlayInAnim = NULL;
    this->PlayOutAnim = NULL;
    this->LogIconImage = NULL;
    this->LayoutWidget = NULL;
    this->HorizonalBox = NULL;
    this->LogTextLen = 5;
}

void UELSSWidgetHUD_SSLog::SetTextAndColorByList(const TArray<FSSLogTextParam>& inTextParam, UTexture2D* InIcon) {
}



void UELSSWidgetHUD_SSLog::ResetAnimationState() {
}

void UELSSWidgetHUD_SSLog::Reset() {
}

void UELSSWidgetHUD_SSLog::PlayInOutAnimation(bool InPlayIn) {
}

bool UELSSWidgetHUD_SSLog::IsShow() {
    return false;
}


