#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELMovesWhipAttackPart.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FELMovesWhipAttackPart : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Grapple;
    
    FELMovesWhipAttackPart();
};

