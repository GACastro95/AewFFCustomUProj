#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ELCutsceneIKParameter.generated.h"

USTRUCT(BlueprintType)
struct FELCutsceneIKParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendRate;
    
    ELITE_GAME_API FELCutsceneIKParameter();
};

