#include "ELSSWidgetHUD_SSSessionMemberIcon.h"

UELSSWidgetHUD_SSSessionMemberIcon::UELSSWidgetHUD_SSSessionMemberIcon() {
    this->TextWidget = NULL;
    this->TargetActor = NULL;
    this->PlayerController = NULL;
    this->MemberIndex = 0;
    this->Validratio = 0.05f;
    this->DoneFirstVisible = false;
}

void UELSSWidgetHUD_SSSessionMemberIcon::UpdatePosAndVisible(float InDeltaTime) {
}


void UELSSWidgetHUD_SSSessionMemberIcon::Update(float InDeltaTime) {
}

void UELSSWidgetHUD_SSSessionMemberIcon::ShowOff() {
}

void UELSSWidgetHUD_SSSessionMemberIcon::SetVisibleText(bool inIsVisible) {
}

void UELSSWidgetHUD_SSSessionMemberIcon::SetTargetActorandPlayerIndex(AActor* inTargetActor, int32 InPlayerIndex) {
}


void UELSSWidgetHUD_SSSessionMemberIcon::SetArrowDir(int32 InDirIndex) {
}



int32 UELSSWidgetHUD_SSSessionMemberIcon::GetValidScreenPos(FVector2D& InCanvasPos, float inScale, FVector2D& InMaxWindowSize, FVector2D& InMinWindowSize) {
    return 0;
}

AActor* UELSSWidgetHUD_SSSessionMemberIcon::GetTargetActor() {
    return NULL;
}



