#include "ELSSWidgetHUD_FGFScoreboard.h"

UELSSWidgetHUD_FGFScoreboard::UELSSWidgetHUD_FGFScoreboard() {
    this->CountMinute_01Material = NULL;
    this->CountSecond_10Material = NULL;
    this->CountSecond_01Material = NULL;
    this->MyTeamGaugeWidget = NULL;
    this->GaugeVisibility = NULL;
    this->Minutes = -1.00f;
    this->Seconds = -1.00f;
    this->Round = -1.00f;
    this->OwnSideScore = -1;
    this->OppositeScore = -1;
    this->BallLevel = -1;
    this->IdealBallLevel = -1;
    this->BallLevelPoint = 0.00f;
    this->BallLevelPointDuration = 0.00f;
    this->BallLevelPointElapsed = 0.00f;
    this->IdealBallLevelPoint = 0.00f;
    this->IsCompleteBallLevelPointDuration = true;
    this->DurationIsOwnSide = true;
}

void UELSSWidgetHUD_FGFScoreboard::UpdateScore(int32 inScore, bool InOwnSide) {
}

void UELSSWidgetHUD_FGFScoreboard::UpdateBallpointGauge(float InDeltaTime) {
}

void UELSSWidgetHUD_FGFScoreboard::StopBallLevelAnimation(int32 InIndex, bool InOwnSide) {
}

void UELSSWidgetHUD_FGFScoreboard::SetVisibleOffenceInfo(bool InOwnSide, bool inIsVisible) {
}

void UELSSWidgetHUD_FGFScoreboard::SetVisibleDefenceBoostText(bool InOwnSide, bool inIsVisible) {
}

void UELSSWidgetHUD_FGFScoreboard::PlayScoreUpdateAnimation(bool InOwnSide) {
}

void UELSSWidgetHUD_FGFScoreboard::ApplyTeamIcon(ESSFGFIconType InIconType, bool InOwnSide) {
}

void UELSSWidgetHUD_FGFScoreboard::ApplyScoreGauge(int32 InOwnScore, int32 InOppositeScore) {
}

void UELSSWidgetHUD_FGFScoreboard::ApplyScore(int32 InOwnScore, int32 InOppositeScore) {
}

void UELSSWidgetHUD_FGFScoreboard::ApplyRoundTime(float InSecond) {
}


void UELSSWidgetHUD_FGFScoreboard::ApplyRound(int32 InRound) {
}

void UELSSWidgetHUD_FGFScoreboard::ApplyCountText(bool InIsMinute) {
}

void UELSSWidgetHUD_FGFScoreboard::ApplyBallLevelGauge(float GaugeRatio, bool InOwnSide) {
}

void UELSSWidgetHUD_FGFScoreboard::ApplyBallLevelAnim(int32 inLevel, bool InOwnSide) {
}

void UELSSWidgetHUD_FGFScoreboard::ApplyBallLevel(int32 inLevel, int32 inBallLevelPoint, int32 InMaxBallLevelPoint, bool InOwnSide) {
}


