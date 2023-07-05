#pragma once
#include "CoreMinimal.h"
#include "EELGlobalStat.generated.h"

UENUM(BlueprintType)
enum class EELGlobalStat : uint8 {
    Pinfall_Win,
    Pinfall_Lose,
    Submission_Win,
    Submission_Lose,
    DQ_Win,
    DQ_Lose,
    CountOut_Win,
    CountOut_Lose,
    Ladder_Win,
    Ladder_Lose,
    Pinfall_Break,
    Taunt,
    Run_Distance,
    Finisher,
    Championship,
    AIMatch,
    Create_PlayTime,
    Career_PlayTime,
    Career_Clear,
    Spent_AEWCash,
    Earned_AEWCash,
    Spent_AEWGold,
    Earned_AEWGold,
    BattlePass_Complete,
    AchievedChallenge,
    Table_Broken,
    Pushpin,
    Weapon_Attached,
    Explosion,
    Explosion_CountDown,
    TagTeam_Touch,
    Create_Wrestler_Male,
    Create_Wrestler_Female,
    Create_Arena,
    Create_Team,
};

