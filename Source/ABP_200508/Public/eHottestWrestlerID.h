#pragma once
#include "CoreMinimal.h"
#include "eHottestWrestlerID.generated.h"

UENUM(BlueprintType)
enum class eHottestWrestlerID : uint8 {
    eHottestWrestlerID_1ST,
    eHottestWrestlerID_2ND,
    eHottestWrestlerID_3RD,
    eHottestWrestlerID_Num,
    eHottestWrestlerID_MAX UMETA(Hidden),
};

