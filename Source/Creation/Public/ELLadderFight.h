#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELLadderFight.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FELLadderFight : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Grapple_Top2Top;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Grapple_Under2Top;
    
    FELLadderFight();
};

