#pragma once
#include "CoreMinimal.h"
#include "SSActivityMatchResultPlayer.generated.h"

USTRUCT(BlueprintType)
struct FSSActivityMatchResultPlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ExternalAccountId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsNpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rank;
    
    ABP_200508_API FSSActivityMatchResultPlayer();
};

