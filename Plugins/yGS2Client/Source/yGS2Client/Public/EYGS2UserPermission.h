#pragma once
#include "CoreMinimal.h"
#include "EYGS2UserPermission.generated.h"

UENUM(BlueprintType)
enum class EYGS2UserPermission : uint8 {
    None,
    Test,
    Development,
    Development_SS = 0x4,
};

