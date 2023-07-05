#pragma once
#include "CoreMinimal.h"
#include "EOSExternalAccountIds.h"
#include "ExternalAccountIdMap.generated.h"

USTRUCT(BlueprintType)
struct FExternalAccountIdMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FEOSExternalAccountIds> ProductUserIdToAccountIds;
    
    YEOSSDK_API FExternalAccountIdMap();
};

