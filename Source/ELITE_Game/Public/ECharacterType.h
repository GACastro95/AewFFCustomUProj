#pragma once
#include "CoreMinimal.h"
#include "ECharacterType.generated.h"

UENUM(BlueprintType)
enum class ECharacterType : uint8 {
    Invalid,
    Roster,
    EditWrestler,
    Npc,
};

