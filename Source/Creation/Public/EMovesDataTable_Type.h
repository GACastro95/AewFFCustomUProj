#pragma once
#include "CoreMinimal.h"
#include "EMovesDataTable_Type.generated.h"

UENUM(BlueprintType)
enum class EMovesDataTable_Type : uint8 {
    DT_ChainMoves,
    DT_StandAttack,
    DT_RunningAttack,
    DT_Diving,
    DT_DownAttack,
    DT_StandTaunt,
    DT_TwoPlatoons,
    DT_WhipAttack,
};

