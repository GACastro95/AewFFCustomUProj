#pragma once
#include "CoreMinimal.h"
#include "EELNetRole.generated.h"

UENUM(BlueprintType)
enum class EELNetRole : uint8 {
    ROLE_None,
    ROLE_Authority,
    ROLE_TempAuthority,
    ROLE_AuthorityMask = 15,
    ROLE_ELMode,
    ROLE_DisabledRPC = 32,
    ROLE_ModeMask = 240,
};

