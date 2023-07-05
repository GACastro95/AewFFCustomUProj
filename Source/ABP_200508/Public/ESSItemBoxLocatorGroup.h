#pragma once
#include "CoreMinimal.h"
#include "ESSItemBoxLocatorGroup.generated.h"

UENUM(BlueprintType)
enum class ESSItemBoxLocatorGroup : uint8 {
    None,
    All,
    CenterArena,
    Stand,
    Backyard,
    Room,
    RarityCommon,
    RarityUnCommon,
    RarityRare,
    RarityEpic,
    RarityLegend,
    Carrot,
};

