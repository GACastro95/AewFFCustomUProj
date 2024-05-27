#include "ELSSWidgetHUD_MiniMapInfo.h"

UELSSWidgetHUD_MiniMapInfo::UELSSWidgetHUD_MiniMapInfo() {
    this->KOMaterial_10 = NULL;
    this->KOMaterial_01 = NULL;
    this->AliveMaterial_10 = NULL;
    this->AliveMaterial_01 = NULL;
    this->ShrinkTimeMinMaterial_10 = NULL;
    this->ShrinkTimeMinMaterial_01 = NULL;
    this->ShrinkTimeSecMaterial_10 = NULL;
    this->ShrinkTimeSecMaterial_01 = NULL;
    this->ShrinkTimeWidget = NULL;
    this->KO10Widget = NULL;
    this->Alive10Widget = NULL;
    this->Minutes = 0;
    this->Seconds = 0;
    this->IsShowShrinkTime = false;
}

void UELSSWidgetHUD_MiniMapInfo::SetAreaShrinkTime(float InSecond) {
}

void UELSSWidgetHUD_MiniMapInfo::ApplyKOCount(int32 InKOCount) {
}

void UELSSWidgetHUD_MiniMapInfo::ApplyAreaShrinkTime(float InSecond) {
}

void UELSSWidgetHUD_MiniMapInfo::ApplyAliveCount(int32 InAliveCount) {
}


