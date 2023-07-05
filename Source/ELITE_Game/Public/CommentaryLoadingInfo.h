#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CommentaryLoadingWrestlerResourceInfo.h"
#include "EWrestlerID_N.h"
#include "CommentaryLoadingInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FCommentaryLoadingInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWrestlerID_N WrestlerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> NameTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCommentaryLoadingWrestlerResourceInfo> ResourceList;
    
    ELITE_GAME_API FCommentaryLoadingInfo();
};

