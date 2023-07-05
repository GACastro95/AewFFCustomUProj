#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELMovesRiseUpAttack.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FELMovesRiseUpAttack : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Punch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Kick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Grapple;
    
    FELMovesRiseUpAttack();
};

