#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELMovesWinEmote.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FELMovesWinEmote : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Up;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Right;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Down;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Left;
    
    FELMovesWinEmote();
};

