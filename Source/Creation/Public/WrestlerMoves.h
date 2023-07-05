#pragma once
#include "CoreMinimal.h"
#include "ELMoves.h"
#include "ELMoves_Finisher.h"
#include "WrestlerMoves.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FWrestlerMoves {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMoves NormalMoves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMoves_Finisher ExciteMoves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMoves_Finisher SpecialMoves;
    
    FWrestlerMoves();
};

