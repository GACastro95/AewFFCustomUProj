#pragma once
#include "CoreMinimal.h"
#include "TableRowName.h"
#include "BaseBodyTypeName.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FBaseBodyTypeName : public FTableRowName {
    GENERATED_BODY()
public:
    FBaseBodyTypeName();
};

