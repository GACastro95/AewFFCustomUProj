#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELMovesSpringboard_Corner_InRing.h"
#include "ELMovesSpringboard_Corner_OutRing.h"
#include "ELMovesSpringboard_Corner.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FELMovesSpringboard_Corner : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesSpringboard_Corner_InRing Opponents_InRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesSpringboard_Corner_OutRing Opponent_OutRing;
    
    FELMovesSpringboard_Corner();
};

