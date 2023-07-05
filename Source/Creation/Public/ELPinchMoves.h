#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELPinchMoves.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FELPinchMoves : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Down;
    
    FELPinchMoves();
};

