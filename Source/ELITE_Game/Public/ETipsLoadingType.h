#pragma once
#include "CoreMinimal.h"
#include "ETipsLoadingType.generated.h"

UENUM(BlueprintType)
enum class ETipsLoadingType : uint8 {
    Tips,
    DLC,
    UserTip,
    CommunityWrestler,
    TitleDLC,
};

