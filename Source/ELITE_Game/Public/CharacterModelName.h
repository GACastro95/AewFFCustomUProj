#pragma once
#include "CoreMinimal.h"
#include "TableRowName.h"
#include "CharacterModelName.generated.h"

USTRUCT(BlueprintType)
struct ELITE_GAME_API FCharacterModelName : public FTableRowName {
    GENERATED_BODY()
public:
    FCharacterModelName();
};

