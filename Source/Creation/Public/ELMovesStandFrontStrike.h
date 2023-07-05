#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELMovesStandFrontStrikePart.h"
#include "ELMovesStandFrontStrike.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FELMovesStandFrontStrike : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesStandFrontStrikePart Punch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesStandFrontStrikePart Kick;
    
    FELMovesStandFrontStrike();
};

