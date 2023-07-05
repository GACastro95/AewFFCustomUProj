#include "ELMatchResultUpdaterBase.h"

void AELMatchResultUpdaterBase::Update_Native() {
}

void AELMatchResultUpdaterBase::Update_GlobalStat() {
}

void AELMatchResultUpdaterBase::SetupCommonParameters_Native(int32 InHostPadNo, int32 InWinTeamNo, bool InIsOnline, bool InIsTagRule, bool InIsExhibition) {
}

void AELMatchResultUpdaterBase::PushUnlockAchievement(EELAchievementList AchievementType, int32 AddCount) {
}

void AELMatchResultUpdaterBase::OnShowMatchResultMenuEvent_Native() {
}

bool AELMatchResultUpdaterBase::IsCompetitor(const FELWrestlerSelectParamForNative& Wrestler) const {
    return false;
}

bool AELMatchResultUpdaterBase::GetStarEvaluation(float MatchTotalScore, FELMatchScore_StarData& OutStarData) const {
    return false;
}

void AELMatchResultUpdaterBase::Check_AchievementStatus() {
}


AELMatchResultUpdaterBase::AELMatchResultUpdaterBase() {
    this->StarData = NULL;
    this->IsCareer = false;
    this->Is1on1Match = false;
    this->CompetitorCount = 0;
    this->WinTeamNo = 0;
    this->IsOnline = false;
    this->IsTagRule = false;
    this->HostPadNo = -1;
    this->HostTeamNo = -1;
}

