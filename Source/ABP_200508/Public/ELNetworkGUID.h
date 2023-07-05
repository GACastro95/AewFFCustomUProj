#pragma once
#include "CoreMinimal.h"
#include "ELNetworkGUID.generated.h"

USTRUCT(BlueprintType)
struct FELNetworkGUID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    ABP_200508_API FELNetworkGUID();
};
FORCEINLINE uint32 GetTypeHash(const FELNetworkGUID) { return 0; }

