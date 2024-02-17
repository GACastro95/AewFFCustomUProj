#pragma once
#include "CoreMinimal.h"
#include "SSRULE_Warning.generated.h"

UENUM(BlueprintType)
enum class SSRULE_Warning : uint8 {
    ERASE,
    PARTY_OVER,
    CLOSE_MATCH,
    GUEST,
};

