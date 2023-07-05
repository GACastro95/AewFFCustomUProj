#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELMovesBarricadeSpringboardPart.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FELMovesBarricadeSpringboardPart : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Punch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Kick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Grapple;
    
    FELMovesBarricadeSpringboardPart();
};

