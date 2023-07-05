#pragma once
#include "CoreMinimal.h"
#include "ECareerOtherMenuState.generated.h"

UENUM(BlueprintType)
enum class ECareerOtherMenuState : uint8 {
    None,
    Start,
    Playing,
    Finish,
    End,
};

