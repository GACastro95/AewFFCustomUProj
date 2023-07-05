#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EMovesAttribute.h"
#include "EMovesCategory.h"
#include "EMovesState.h"
#include "MovesMovesCategory.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FMovesMovesCategory : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovesCategory MovesCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EMovesState> TagetMovesState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EMovesState> MyMovesState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovesAttribute MovesAttribute;
    
    FMovesMovesCategory();
};

