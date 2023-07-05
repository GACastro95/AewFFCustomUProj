#pragma once
#include "CoreMinimal.h"
#include "ERingAnnounceTable.generated.h"

UENUM(BlueprintType)
enum class ERingAnnounceTable : uint8 {
    BASE_TABLE,
    WRESTLERNAME_TABLE,
    TEAMNAME_TABLE,
    CUSTOMNAME_TABLE,
};

