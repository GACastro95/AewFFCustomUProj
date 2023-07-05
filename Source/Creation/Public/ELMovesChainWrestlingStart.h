#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELMovesStickDir.h"
#include "ELMovesChainWrestlingStart.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FELMovesChainWrestlingStart : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesStickDir Start;
    
    FELMovesChainWrestlingStart();
};

