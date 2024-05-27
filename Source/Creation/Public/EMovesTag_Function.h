#pragma once
#include "CoreMinimal.h"
#include "EMovesTag_Function.generated.h"

UENUM()
enum class EMovesTag_Function {
    FC_Pincombo = 1,
    FC_DirectionalThrow,
    FC_DelayedGrapple = 4,
    FC_Whip = 8,
    FC_Atk_Ringout = 16,
    FC_Def_Ringout = 32,
    FC_Submission = 64,
    FC_Blood = 128,
    FC_Injury = 256,
    FC_WeightDetection = 512,
    FC_Etc = 1024,
};

