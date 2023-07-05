#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PickableItemIDTableRow.generated.h"

USTRUCT(BlueprintType)
struct FPickableItemIDTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UID;
    
    ELITE_CORE_API FPickableItemIDTableRow();
};

