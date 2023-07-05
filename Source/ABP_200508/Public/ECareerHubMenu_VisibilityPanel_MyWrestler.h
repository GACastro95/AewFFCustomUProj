#pragma once
#include "CoreMinimal.h"
#include "ECareerHubMenu_VisibilityPanel_MyWrestler.generated.h"

UENUM(BlueprintType)
enum class ECareerHubMenu_VisibilityPanel_MyWrestler : uint8 {
    CommandPanel,
    WrestlerStats,
    CareerRecord,
    ECareerHubMenu_VisibilityPanel_MAX UMETA(Hidden),
};

