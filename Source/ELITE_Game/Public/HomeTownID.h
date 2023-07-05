#pragma once
#include "CoreMinimal.h"
#include "PickableItemID.h"
#include "HomeTownID.generated.h"

USTRUCT(BlueprintType)
struct ELITE_GAME_API FHomeTownID : public FPickableItemID {
    GENERATED_BODY()
public:
    FHomeTownID();
};

