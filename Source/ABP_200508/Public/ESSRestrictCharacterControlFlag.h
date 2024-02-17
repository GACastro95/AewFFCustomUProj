#pragma once
#include "CoreMinimal.h"
#include "ESSRestrictCharacterControlFlag.generated.h"

UENUM(BlueprintType)
enum class ESSRestrictCharacterControlFlag : uint8 {
    None,
    NotAllow,
    FinishedMatch,
    OpeningPauseMenu,
    Dialog,
    NetworkError,
    DetectedCheat,
    FgfRoundChange,
};

