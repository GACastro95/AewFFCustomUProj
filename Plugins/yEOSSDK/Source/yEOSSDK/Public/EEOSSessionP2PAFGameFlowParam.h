#pragma once
#include "CoreMinimal.h"
#include "EEOSSessionP2PAFGameFlowParam.generated.h"

UENUM(BlueprintType)
enum class EEOSSessionP2PAFGameFlowParam : uint8 {
    None,
    StepHistoryMax = 0x10,
};

