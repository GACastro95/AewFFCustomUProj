#pragma once
#include "CoreMinimal.h"
#include "EMatchMakeExecuteType.generated.h"

UENUM(BlueprintType)
enum class EMatchMakeExecuteType : uint8 {
    eMatchMakeExecuteType_Step,
    eMatchMakeExecuteType_End,
};

