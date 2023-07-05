#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LobbyChatLogData.h"
#include "LobbyPersonalChatLog.generated.h"

USTRUCT(BlueprintType)
struct FLobbyPersonalChatLog {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime LastReadTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLobbyChatLogData> ChatLog;
    
    ABP_200508_API FLobbyPersonalChatLog();
};

