#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "StSyncMontageObj.h"
#include "StChainMove.generated.h"

USTRUCT(BlueprintType)
struct FStChainMove : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStSyncMontageObj Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStSyncMontageObj Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStSyncMontageObj End;
    
    ABP_200508_API FStChainMove();
};

