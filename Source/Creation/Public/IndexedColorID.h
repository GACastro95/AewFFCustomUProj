#pragma once
#include "CoreMinimal.h"
#include "PickableItemID.h"
#include "IndexedColorID.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FIndexedColorID : public FPickableItemID {
    GENERATED_BODY()
public:
    FIndexedColorID();
};

