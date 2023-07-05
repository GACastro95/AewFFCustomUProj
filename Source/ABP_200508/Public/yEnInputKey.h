#pragma once
#include "CoreMinimal.h"
#include "yEnInputKey.generated.h"

UENUM()
enum class yEnInputKey : uint32 {
    None,
    FaceButtonUp,
    FaceButtonLeft,
    FaceButtonDown = 0x4,
    FaceButtonRight = 0x8,
    DPadUp = 0x10,
    DPadLeft = 0x20,
    DPadDown = 0x40,
    DPadRight = 0x80,
    BumperL = 0x100,
    TriggerL = 0x200,
    BumperR = 0x400,
    TriggerR = 0x800,
    Start = 0x1000,
    Select = 0x2000,
    AnalogL = 0x4000,
    AnalogR = 0x8000,
    LStickUp = 0x10000,
    LStickLeft = 0x20000,
    LStickDown = 0x40000,
    LStickRight = 0x80000,
    RStickUp = 0x100000,
    RStickLeft = 0x200000,
    RStickDown = 0x400000,
    RStickRight = 0x800000,
    MouseButtonR = 0x1000000,
    RotationBrotherLeft = 0x2000000,
    RotationBrotherRight = 0x4000000,
    CreateSessionKey = 0x8000000,
};

