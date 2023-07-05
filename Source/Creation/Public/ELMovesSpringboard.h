#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELMovesSpringboard_Apron.h"
#include "ELMovesSpringboard_Corner.h"
#include "ELMovesSpringboard_Rope.h"
#include "ELMovesSpringboard.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FELMovesSpringboard : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesSpringboard_Rope RopeSpringboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesSpringboard_Corner CornerSpringboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesSpringboard_Apron ApronSpringboard;
    
    FELMovesSpringboard();
};

