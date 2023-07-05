#pragma once
#include "CoreMinimal.h"
#include "ERecoilAttackType.generated.h"

UENUM(BlueprintType)
enum class ERecoilAttackType : uint8 {
    None,
    Corner,
    Rope,
};

