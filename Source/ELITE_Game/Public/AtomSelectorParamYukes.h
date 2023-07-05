#pragma once
#include "CoreMinimal.h"
#include "AtomSelectorParamYukes.generated.h"

USTRUCT(BlueprintType)
struct FAtomSelectorParamYukes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Selector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Label;
    
    ELITE_GAME_API FAtomSelectorParamYukes();
};

