#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LobbyChatLogData.h"
#include "LobbyPartyChatPlayerData.h"
#include "LobbyPartyChatLog.generated.h"

USTRUCT(BlueprintType)
struct FLobbyPartyChatLog {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime LastReadTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FLobbyPartyChatPlayerData> PlayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLobbyChatLogData> ChatLog;
    
    ABP_200508_API FLobbyPartyChatLog();
};

