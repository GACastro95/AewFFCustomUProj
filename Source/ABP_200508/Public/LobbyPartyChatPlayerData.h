#pragma once
#include "CoreMinimal.h"
#include "EPlatformType.h"
#include "LobbyPartyChatPlayerData.generated.h"

USTRUCT(BlueprintType)
struct FLobbyPartyChatPlayerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Icons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlatformType Platform;
    
    ABP_200508_API FLobbyPartyChatPlayerData();
};

