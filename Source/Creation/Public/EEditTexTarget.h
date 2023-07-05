#pragma once
#include "CoreMinimal.h"
#include "EEditTexTarget.generated.h"

UENUM(BlueprintType)
enum class EEditTexTarget : uint8 {
    Skin,
    Body,
    BodyHair,
    BodyScar,
    BodyPaint,
    BodyTattoo,
    Face,
    Eye_L,
    Eye_R,
    EyeBrow,
    Scalp,
    FacialHair,
    FacialScar,
    FacePaint,
    FacialTattoo,
    Hair,
    TShirt,
    Num,
    ExtraParts_01 = 0x64,
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

