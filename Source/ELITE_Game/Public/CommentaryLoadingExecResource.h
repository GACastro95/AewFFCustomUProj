#pragma once
#include "CoreMinimal.h"
#include "EWrestlerID_N.h"
#include "CommentaryLoadingExecResource.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FCommentaryLoadingExecResource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWrestlerID_N WrestlerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> NameTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> BackGoundTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EvenNumberFlag;
    
    ELITE_GAME_API FCommentaryLoadingExecResource();
};

