#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EFinisher_Type.h"
#include "ELMoves_Finisher_MatchingTable.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FELMoves_Finisher_MatchingTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFinisher_Type Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> MovesSlot;
    
    FELMoves_Finisher_MatchingTable();
};

