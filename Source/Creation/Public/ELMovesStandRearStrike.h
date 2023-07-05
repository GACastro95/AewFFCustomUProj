#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELMovesStandRearStrikePart.h"
#include "ELMovesStandRearStrike.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FELMovesStandRearStrike : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesStandRearStrikePart Punch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesStandRearStrikePart Kick;
    
    FELMovesStandRearStrike();
};

