#pragma once
#include "CoreMinimal.h"
#include "CommentaryLoadingWrestlerResourceInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FCommentaryLoadingWrestlerResourceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> BackGoundTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText WrestlerComment;
    
    ELITE_GAME_API FCommentaryLoadingWrestlerResourceInfo();
};

