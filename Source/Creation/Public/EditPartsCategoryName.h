#pragma once
#include "CoreMinimal.h"
#include "TableRowName.h"
#include "EditPartsCategoryName.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FEditPartsCategoryName : public FTableRowName {
    GENERATED_BODY()
public:
    FEditPartsCategoryName();
};
FORCEINLINE uint32 GetTypeHash(const FEditPartsCategoryName) { return 0; }

