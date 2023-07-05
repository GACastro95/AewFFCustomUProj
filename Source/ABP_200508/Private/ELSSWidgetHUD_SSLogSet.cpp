#include "ELSSWidgetHUD_SSLogSet.h"

void UELSSWidgetHUD_SSLogSet::UpdateLogShowState(float InDeltaTime) {
}

void UELSSWidgetHUD_SSLogSet::UpdateLogArrayPos() {
}

void UELSSWidgetHUD_SSLogSet::ResetAllLogs() {
}

bool UELSSWidgetHUD_SSLogSet::IsEmpty() {
    return false;
}

UTexture2D* UELSSWidgetHUD_SSLogSet::GetLogIcon(ESSLogIconType InIconType) {
    return NULL;
}

void UELSSWidgetHUD_SSLogSet::DeleteLogTextMessage() {
}

void UELSSWidgetHUD_SSLogSet::AddMultiColorLogMessage(const TArray<FSSLogTextParam>& inTextParam, ESSLogIconType InIconType) {
}

UELSSWidgetHUD_SSLogSet::UELSSWidgetHUD_SSLogSet() {
    this->LogMessageShowTimeElapsed = 0.00f;
    this->MAXLOGSHOWTIME = 4.00f;
    this->LogSetVerticalBox = NULL;
}

