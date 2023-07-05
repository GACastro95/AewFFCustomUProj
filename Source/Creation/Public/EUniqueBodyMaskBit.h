#pragma once
#include "CoreMinimal.h"
#include "EUniqueBodyMaskBit.generated.h"

UENUM(BlueprintType)
enum class EUniqueBodyMaskBit : uint8 {
    Head_Face,
    Head_Back,
    Head_Top,
    Head_Eyelashes,
    Head_Caruncle,
    Head_Mouth,
    Head_Neck,
    Head_Clavicle,
    UpperBody_Chest,
    UpperBody_Back,
    UpperBody_Abdomen,
    UpperBody_LowerBack,
    UpperBody_LowerAbdomen,
    UpperBody_Waist,
    LowerBody_Hips,
};

