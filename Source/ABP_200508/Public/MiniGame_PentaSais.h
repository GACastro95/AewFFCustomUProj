#pragma once
#include "CoreMinimal.h"
#include "MiniGame_PentaSais.generated.h"

USTRUCT(BlueprintType)
struct FMiniGame_PentaSais {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDebugDispCorrect;
    
    ABP_200508_API FMiniGame_PentaSais();
};

