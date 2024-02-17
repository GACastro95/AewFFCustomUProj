#pragma once
#include "CoreMinimal.h"
#include "EAtomSoundRendererType.generated.h"

UENUM(BlueprintType)
namespace EAtomSoundRendererType {
    enum Type {
        Any,
        Native,
        Asr,
        Hardware1 = 0x1,
        Hardware2 = 0x10001,
        Hardware3 = 0x20001,
        Hardware4 = 0x30001,
        Spatial = 0x4,
        VibrationHardware = 0x30011,
        RESTRICTED = 0xFE,
        Pad,
    };
}

