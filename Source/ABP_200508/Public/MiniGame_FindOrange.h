#pragma once
#include "CoreMinimal.h"
#include "MiniGame_FindOrange.generated.h"

USTRUCT(BlueprintType)
struct FMiniGame_FindOrange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDebugDispCorrect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDebugCheckTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DebugCheckTextureIndex;
    
    ABP_200508_API FMiniGame_FindOrange();
};

