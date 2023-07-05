#pragma once
#include "CoreMinimal.h"
#include "EELDebugMenuSimpleUIType.generated.h"

UENUM(BlueprintType)
enum class EELDebugMenuSimpleUIType : uint8 {
    Text,
    TextWrapped,
    TextBox,
    TextBoxForInt,
    TextBoxForFloat,
    CheckBox,
    ComboBox,
    SliderBarForInt,
    SliderBarForFloat,
    SliderBarForAngle,
    Button,
    Spacer,
};

