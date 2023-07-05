#pragma once
#include "CoreMinimal.h"
#include "EnCamEditMenuState.generated.h"

UENUM(BlueprintType)
enum class EnCamEditMenuState : uint8 {
    SettingList,
    ItemList,
    TemporarySave,
    Purchase,
};

