#pragma once
#include "CoreMinimal.h"
#include "LobbyPlayerIndex.generated.h"

USTRUCT(BlueprintType)
struct FLobbyPlayerIndex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> PlayerIndex;
    
    ABP_200508_API FLobbyPlayerIndex();
};

