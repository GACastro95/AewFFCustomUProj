#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELMovesStick4Dir.h"
#include "ELMovesFrontChainStrong.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FELMovesFrontChainStrong : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesStick4Dir Punch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesStick4Dir Kick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesStick4Dir Grapple;
    
    FELMovesFrontChainStrong();
};

