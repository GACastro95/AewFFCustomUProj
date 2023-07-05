#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELMovesRingSideToRing.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FELMovesRingSideToRing : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Front;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rear;
    
    FELMovesRingSideToRing();
};

