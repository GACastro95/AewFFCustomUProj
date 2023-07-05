#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELMovesStick.h"
#include "ELMovesRunningCounter.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FELMovesRunningCounter : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesStick Punch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesStick Kick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesStick Grapple;
    
    FELMovesRunningCounter();
};

