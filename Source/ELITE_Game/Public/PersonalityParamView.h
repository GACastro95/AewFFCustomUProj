#pragma once
#include "CoreMinimal.h"
#include "EPersonalityBitParamType.h"
#include "EPersonalityType.h"
#include "PersonalityParamView.generated.h"

USTRUCT(BlueprintType)
struct ELITE_GAME_API FPersonalityParamView {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPersonalityType PersonalityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<EPersonalityBitParamType> BitParam;
    
    FPersonalityParamView();
};

