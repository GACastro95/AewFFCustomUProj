#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELMovesTwoPlatoonsPart.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FELMovesTwoPlatoonsPart : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Lever_Neutral_Grapple;
    
    FELMovesTwoPlatoonsPart();
};

