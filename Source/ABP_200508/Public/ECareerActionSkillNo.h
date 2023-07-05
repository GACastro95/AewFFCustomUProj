#pragma once
#include "CoreMinimal.h"
#include "ECareerActionSkillNo.generated.h"

UENUM(BlueprintType)
enum class ECareerActionSkillNo : uint8 {
    None,
    AS_SpringboardOffense,
    AS_TopeOffense,
    AS_GuardrailDiveOffense,
    AS_AntiAirDefense,
    AS_KipUp,
    AS_QuickMount,
    AS_GimmickInfringement,
    AS_GuardBreak,
    AS_GrappleCombos,
    AS_SlothStyle,
    AS_PinDexterity,
    AS_ReboundRecoilAttack,
    AS_CornerRecoilAttack,
    AS_Juggernaut,
    AS_Recuperability,
    AS_AgileBackStep,
    AS_SprintTechnician,
    AS_StrikeCombo,
    AS_StartOfMatchCancel,
    AS_HeelAction,
    AS_RingEscape,
    SkillLimit,
};

