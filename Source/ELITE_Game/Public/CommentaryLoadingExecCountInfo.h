#pragma once
#include "CoreMinimal.h"
#include "CommentaryLoadingExecCountBase.h"
#include "EWrestlerID_N.h"
#include "CommentaryLoadingExecCountInfo.generated.h"

USTRUCT(BlueprintType)
struct FCommentaryLoadingExecCountInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWrestlerID_N WrestlerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCommentaryLoadingExecCountBase> DisplayedCountList;
    
    ELITE_GAME_API FCommentaryLoadingExecCountInfo();
};

