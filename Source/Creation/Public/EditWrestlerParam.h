#pragma once
#include "CoreMinimal.h"
#include "PersonalityParam.h"
#include "WrestlingSkillParam.h"
#include "EditPersonParam.h"
#include "NamedPresetParam.h"
#include "EditWrestlerParam.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FEditWrestlerParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEditPersonParam EditPerson;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPersonalityParam Personality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWrestlingSkillParam Skills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNamedPresetParam> Presets;
    
    FEditWrestlerParam();
};

