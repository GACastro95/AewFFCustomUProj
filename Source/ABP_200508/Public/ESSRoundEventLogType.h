#pragma once
#include "CoreMinimal.h"
#include "ESSRoundEventLogType.generated.h"

UENUM(BlueprintType)
enum class ESSRoundEventLogType : uint8 {
    None,
    TreasureBoxCommon,
    TreasureBoxUnCommon,
    TreasureBoxRare,
    TreasureBoxEpic,
    TreasureBoxLegendary,
    CarrotTreasureBox,
    Vehicle,
    DefenseTeamTreasureBox,
    MultiLockedTeamTreasureBox,
};

