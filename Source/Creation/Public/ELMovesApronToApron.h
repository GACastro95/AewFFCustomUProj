#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELMovesApronToApronPart.h"
#include "ELMovesApronToApron.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FELMovesApronToApron : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesApronToApronPart Apron;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesApronToApronPart MiddleRope;
    
    FELMovesApronToApron();
};

