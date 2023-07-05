#pragma once
#include "CoreMinimal.h"
#include "EELDebugMatchType.h"
#include "StMatchTypeData.h"
#include "StDebugMatchType.generated.h"

USTRUCT(BlueprintType)
struct FStDebugMatchType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EELDebugMatchType EDebugMatchRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStMatchTypeData EMatchType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ComNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerNum;
    
    ELITE_GAME_API FStDebugMatchType();
};

