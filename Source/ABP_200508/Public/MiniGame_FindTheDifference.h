#pragma once
#include "CoreMinimal.h"
#include "MiniGame_FindTheDifference.generated.h"

USTRUCT(BlueprintType)
struct FMiniGame_FindTheDifference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDebugDispCorrect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDebugCheckTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DebugCheckTextureIndex;
    
    ABP_200508_API FMiniGame_FindTheDifference();
};

