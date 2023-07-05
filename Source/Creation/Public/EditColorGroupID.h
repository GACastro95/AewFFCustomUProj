#pragma once
#include "CoreMinimal.h"
#include "PickableItemID.h"
#include "EditColorGroupID.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FEditColorGroupID : public FPickableItemID {
    GENERATED_BODY()
public:
    FEditColorGroupID();
};
FORCEINLINE uint32 GetTypeHash(const FEditColorGroupID) { return 0; }

