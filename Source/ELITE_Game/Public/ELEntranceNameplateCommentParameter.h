#pragma once
#include "CoreMinimal.h"
#include "ELEntranceNameplateCommentParameter.generated.h"

USTRUCT(BlueprintType)
struct ELITE_GAME_API FELEntranceNameplateCommentParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CommentID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Argument;
    
    FELEntranceNameplateCommentParameter();
};

