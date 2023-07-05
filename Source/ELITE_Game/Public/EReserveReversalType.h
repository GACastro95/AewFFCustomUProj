#pragma once
#include "CoreMinimal.h"
#include "EReserveReversalType.generated.h"

UENUM(BlueprintType)
enum class EReserveReversalType : uint8 {
    None,
    Strike,
    Grapple,
    Special,
    RS_Up,
    RS_Down,
    RS_Left,
    RS_Right,
    Kick,
    Strike_RandomChoiceFailed,
    Grapple_RandomChoiceFailed,
};

