#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELMovesChainWrestlingLoop.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FELMovesChainWrestlingLoop : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Reversal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Release;
    
    FELMovesChainWrestlingLoop();
};

