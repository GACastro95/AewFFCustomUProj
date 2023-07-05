#pragma once
#include "CoreMinimal.h"
#include "ESSResultGradeABC.generated.h"

UENUM(BlueprintType)
enum class ESSResultGradeABC : uint8 {
    A_High,
    A_Mid,
    A_Low,
    B_High,
    B_Mid,
    B_Low,
    C_High,
    C_Mid,
    C_Low,
    Max,
    Default = 0x8,
};

