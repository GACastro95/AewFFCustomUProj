#pragma once
#include "CoreMinimal.h"
#include "EEditPartsSlot.generated.h"

UENUM(BlueprintType)
enum class EEditPartsSlot : uint8 {
    Unknown,
    Suits,
    Brassiere,
    BasicTops,
    BasicBottoms,
    ExtendTops,
    ExtendBottoms,
    Elbow_L,
    Elbow_R,
    Wrist_L,
    Wrist_R,
    Knee_L,
    Knee_R,
    Shoes,
    Head,
    Hats,
    Hair,
    Beard,
    Glasses,
    FaceMask,
    FaceAccessory,
    BodyAccessory,
    Num,
    ExtraParts_01 = 100,
    ExtraParts_02,
    ExtraParts_03,
    ExtraParts_04,
    ExtraParts_05,
    ExtraParts_06,
    ExtraParts_07,
    ExtraParts_08,
    ExtraParts_09,
    ExtraParts_10,
};

