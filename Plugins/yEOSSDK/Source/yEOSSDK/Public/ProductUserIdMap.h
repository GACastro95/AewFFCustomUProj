#pragma once
#include "CoreMinimal.h"
#include "ProductUserIdMap.generated.h"

USTRUCT(BlueprintType)
struct FProductUserIdMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> AccountIdToProductUserId;
    
    YEOSSDK_API FProductUserIdMap();
};

