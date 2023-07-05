#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EOSNatP2PSplitQueueTransferConnectionState.generated.h"

USTRUCT(BlueprintType)
struct FEOSNatP2PSplitQueueTransferConnectionState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequestCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime LastRequestDateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime LastResponseDateTime;
    
    YEOSSDK_API FEOSNatP2PSplitQueueTransferConnectionState();
};

