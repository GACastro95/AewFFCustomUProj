#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELMovesBarricadeSpringboardPart.h"
#include "ELMovesBarricadeSpringboard.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FELMovesBarricadeSpringboard : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesBarricadeSpringboardPart Stand_Front;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesBarricadeSpringboardPart Down_FaceUp;
    
    FELMovesBarricadeSpringboard();
};

