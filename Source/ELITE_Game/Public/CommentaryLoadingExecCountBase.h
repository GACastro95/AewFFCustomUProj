#pragma once
#include "CoreMinimal.h"
#include "CommentaryLoadingExecCountBase.generated.h"

USTRUCT(BlueprintType)
struct FCommentaryLoadingExecCountBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UniqueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExecCount;
    
    ELITE_GAME_API FCommentaryLoadingExecCountBase();
};

