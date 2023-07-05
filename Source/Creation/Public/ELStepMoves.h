#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELStepMoves.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FELStepMoves : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Stand;
    
    FELStepMoves();
};

