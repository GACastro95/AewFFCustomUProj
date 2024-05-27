#pragma once
#include "CoreMinimal.h"
#include "PersonParam.h"
#include "PresetParam.h"
#include "WrestlingSkillParam.h"
#include "CharacterProfilesBase.h"
#include "CharacterProfilesInterface.h"
#include "WrestlerProfilesInterface.h"
#include "WrestlerProfiles.generated.h"

class UTexture2DDynamic;

UCLASS(Blueprintable)
class UWrestlerProfiles : public UCharacterProfilesBase, public ICharacterProfilesInterface, public IWrestlerProfilesInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPersonParam Person;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPresetParam Preset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWrestlingSkillParam Skill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2DDynamic* HudTex;
    
public:
    UWrestlerProfiles();


    // Fix for true pure virtual functions not being implemented
};

