#pragma once
#include "CoreMinimal.h"
#include "CommentaryLoadingExecCountInfo_Ref.generated.h"

USTRUCT(BlueprintType)
struct FCommentaryLoadingExecCountInfo_Ref {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> DisplayedCountMap;
    
    ELITE_GAME_API FCommentaryLoadingExecCountInfo_Ref();
};

