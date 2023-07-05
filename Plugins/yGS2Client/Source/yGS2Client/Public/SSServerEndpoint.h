#pragma once
#include "CoreMinimal.h"
#include "SSServerEndpoint.generated.h"

USTRUCT(BlueprintType)
struct YGS2CLIENT_API FSSServerEndpoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString IP;
    
    FSSServerEndpoint();
};

