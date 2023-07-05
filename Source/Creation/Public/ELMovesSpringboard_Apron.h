#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELMovesSpringboard_Apron_InRing.h"
#include "ELMovesSpringboard_Apron_OutRing.h"
#include "ELMovesSpringboard_Apron.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FELMovesSpringboard_Apron : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesSpringboard_Apron_InRing Opponents_InRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesSpringboard_Apron_OutRing Opponent_OutRing;
    
    FELMovesSpringboard_Apron();
};

