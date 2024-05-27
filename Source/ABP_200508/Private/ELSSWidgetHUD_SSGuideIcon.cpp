#include "ELSSWidgetHUD_SSGuideIcon.h"

UELSSWidgetHUD_SSGuideIcon::UELSSWidgetHUD_SSGuideIcon() {
    this->IconImage = NULL;
    this->TextWidget = NULL;
    this->TargetActor = NULL;
    this->PlayerController = NULL;
    this->Validratio = 0.05f;
    this->DoneFirstVisible = false;
    this->IconType = 0;
    this->ParentContainer = NULL;
    this->GuideIconType = ESSGuideIconType::None;
}

void UELSSWidgetHUD_SSGuideIcon::UpdatePosAndVisible(float InDeltaTime) {
}


void UELSSWidgetHUD_SSGuideIcon::Update(float InDeltaTime) {
}

void UELSSWidgetHUD_SSGuideIcon::ShowOff() {
}

void UELSSWidgetHUD_SSGuideIcon::SetVisibleText(bool inIsVisible) {
}

void UELSSWidgetHUD_SSGuideIcon::SetTargetActorandTexture(AActor* inTargetActor, ESSGuideIconType InIconType) {
}

void UELSSWidgetHUD_SSGuideIcon::SetParentContainer(UELSSWidgetHUD_SSGuideIconContainer* inContainer) {
}


void UELSSWidgetHUD_SSGuideIcon::SetArrowDir(int32 InDirIndex) {
}



int32 UELSSWidgetHUD_SSGuideIcon::GetValidScreenPos(FVector2D& InCanvasPos, float inScale, FVector2D& InMaxWindowSize, FVector2D& InMinWindowSize) {
    return 0;
}

AActor* UELSSWidgetHUD_SSGuideIcon::GetTargetActor() {
    return NULL;
}

ESSGuideIconType UELSSWidgetHUD_SSGuideIcon::GetGuideIconType() {
    return ESSGuideIconType::Blackdiamond;
}



