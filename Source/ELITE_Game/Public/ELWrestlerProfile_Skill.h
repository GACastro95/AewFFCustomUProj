#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELWrestlerSkill_Action.h"
#include "ELWrestlerSkill_Parameter.h"
#include "ELWrestlerSkill_Passive.h"
#include "ELWrestlerProfile_Skill.generated.h"

USTRUCT(BlueprintType)
struct FELWrestlerProfile_Skill : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELWrestlerSkill_Parameter WrestlerSkillParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELWrestlerSkill_Passive WrestlerSkillPassive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELWrestlerSkill_Action WrestlerSkillAction;
    
    ELITE_GAME_API FELWrestlerProfile_Skill();
};

