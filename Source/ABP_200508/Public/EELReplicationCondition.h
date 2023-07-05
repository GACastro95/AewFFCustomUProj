#pragma once
#include "CoreMinimal.h"
#include "EELReplicationCondition.generated.h"

UENUM(BlueprintType)
enum class EELReplicationCondition : uint8 {
    None,
    Always,
    Changed,
};

