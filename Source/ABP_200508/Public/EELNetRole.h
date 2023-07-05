#pragma once
#include "CoreMinimal.h"
#include "EELNetRole.generated.h"

UENUM(BlueprintType)
enum class EELNetRole : uint8 {
    ROLE_None,
    ROLE_Authority,
    ROLE_TempAuthority,
    ROLE_AuthorityMask = 0xF,
    ROLE_ELMode,
    ROLE_DisabledRPC = 0x20,
    ROLE_ModeMask = 0xF0,
    ROLE_MAX UMETA(Hidden),
};

