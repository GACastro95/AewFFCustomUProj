#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "StPinchMovesParameter.h"
#include "StPinchMovesReach.h"
#include "StPinchMovesSync.h"
#include "StPinchMoves.generated.h"

USTRUCT(BlueprintType)
struct FStPinchMoves : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStPinchMovesReach Reach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStPinchMovesSync Sync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStPinchMovesParameter Parameter;
    
    ABP_200508_API FStPinchMoves();
};

