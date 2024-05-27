#pragma once
#include "CoreMinimal.h"
#include "EMovesTag_FunctionIndex.generated.h"

UENUM(BlueprintType)
enum class EMovesTag_FunctionIndex : uint8 {
    FC_Pincombo,
    FC_DirectionalThrow,
    FC_DelayedGrapple,
    FC_Whip,
    FC_Atk_Ringout,
    FC_Def_Ringout,
    FC_Submission,
    FC_Blood,
    FC_Injury,
    FC_WeightDetection,
    FC_Etc,
};

