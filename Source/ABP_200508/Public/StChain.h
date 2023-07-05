#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "StChainMove.h"
#include "StChain.generated.h"

USTRUCT(BlueprintType)
struct FStChain : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStChainMove Push;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStChainMove Pull;
    
    ABP_200508_API FStChain();
};

