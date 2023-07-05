#pragma once
#include "CoreMinimal.h"
#include "WrestlingSkillParam.h"
#include "PersonParam.h"
#include "PresetParam.h"
#include "WrestlerSetupParam.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FWrestlerSetupParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPersonParam Person;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPresetParam Preset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWrestlingSkillParam Skill;
    
    FWrestlerSetupParam();
};

