#pragma once
#include "CoreMinimal.h"
#include "EOSExternalAccountId.h"
#include "EOSExternalAccountIds.generated.h"

USTRUCT(BlueprintType)
struct FEOSExternalAccountIds {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEOSExternalAccountId> ExternalAccountIds;
    
    YEOSSDK_API FEOSExternalAccountIds();
};

