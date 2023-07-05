#pragma once
#include "CoreMinimal.h"
#include "CommentaryLoadingExecCountInfo.h"
#include "CommentaryLoadingSaveData.generated.h"

USTRUCT(BlueprintType)
struct FCommentaryLoadingSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCommentaryLoadingExecCountInfo> WrestlerContentExecCountInfoList;
    
    ELITE_GAME_API FCommentaryLoadingSaveData();
};

