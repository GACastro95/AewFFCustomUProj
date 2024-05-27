#include "ELSSWidgetHUD_SSSkillGetNotice.h"

UELSSWidgetHUD_SSSkillGetNotice::UELSSWidgetHUD_SSSkillGetNotice() {
    this->PlayInAnim = NULL;
    this->PlayOutAnim = NULL;
    this->LayoutWidget = NULL;
    this->AnnounceWidget = NULL;
    this->NoticeWidget = NULL;
    this->ShowElapsed = 0.00f;
    this->IsShow = false;
    this->IsPlayingPlayOut = false;
    this->WINDOWSHOWMAXTIME = 2.00f;
}

void UELSSWidgetHUD_SSSkillGetNotice::Update(float InDeltaTime) {
}


void UELSSWidgetHUD_SSSkillGetNotice::Reset() {
}

void UELSSWidgetHUD_SSSkillGetNotice::PlayInBeatTopTeamNotice() {
}

void UELSSWidgetHUD_SSSkillGetNotice::PlayIn(const FString& InSkillCategory, int32 HeatSkillId) {
}



