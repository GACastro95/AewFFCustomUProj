#pragma once
#include "CoreMinimal.h"
#include "EResultTallyState.generated.h"

UENUM(BlueprintType)
enum class EResultTallyState : uint8 {
    EResultTally_None,
    EResultTally_Get,
    EResultTally_Success,
    EResultTally_Failed,
    EResultTally_Skip,
    EResultTally_NotLogin,
};

