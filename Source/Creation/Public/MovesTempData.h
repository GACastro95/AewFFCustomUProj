#pragma once
#include "CoreMinimal.h"
#include "ELMoves.h"
#include "ELMoves_Finisher.h"
#include "MovesTempData.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FMovesTempData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMoves MOVES;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMoves_Finisher Finisher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMoves_Finisher Signature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMoves_Finisher Finisher02;
    
    FMovesTempData();
};

