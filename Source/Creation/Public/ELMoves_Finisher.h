#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELMoves_Finisher_Part.h"
#include "ELMoves_Finisher.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FELMoves_Finisher : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FELMoves_Finisher_Part> FinishersTypes;
    
    FELMoves_Finisher();
};

