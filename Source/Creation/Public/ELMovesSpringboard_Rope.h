#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELMovesSpringboard_Rope_InRing.h"
#include "ELMovesSpringboard_Rope_OutRing.h"
#include "ELMovesSpringboard_Rope.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FELMovesSpringboard_Rope : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesSpringboard_Rope_InRing Opponents_InRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesSpringboard_Rope_OutRing Opponent_OutRing;
    
    FELMovesSpringboard_Rope();
};

