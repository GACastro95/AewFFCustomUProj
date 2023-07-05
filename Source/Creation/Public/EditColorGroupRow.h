#pragma once
#include "CoreMinimal.h"
#include "PickableItemIDTableRow.h"
#include "EditColorGroupRow.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FEditColorGroupRow : public FPickableItemIDTableRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    FEditColorGroupRow();
};

