#pragma once
#include "CoreMinimal.h"
#include "TipsLoadingExecCountBase.generated.h"

USTRUCT(BlueprintType)
struct FTipsLoadingExecCountBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UniqueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExecCount;
    
    ELITE_GAME_API FTipsLoadingExecCountBase();
};

