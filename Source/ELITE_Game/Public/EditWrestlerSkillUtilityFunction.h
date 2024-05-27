#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EAbilityScoreType.h"
#include "ELWrestlerProfile_Skill.h"
#include "WrestlingSkillParam.h"
#include "EditWrestlerSkillUtilityFunction.generated.h"

UCLASS(Blueprintable)
class ELITE_GAME_API UEditWrestlerSkillUtilityFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UEditWrestlerSkillUtilityFunction();

    UFUNCTION(BlueprintCallable)
    static void SetPassiveSkill(UPARAM(Ref) FWrestlingSkillParam& Param, const int32 Type, const bool Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetActionSkill(UPARAM(Ref) FWrestlingSkillParam& Param, const int32 Type, const bool Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetAbilityScore(UPARAM(Ref) FWrestlingSkillParam& Param, const EAbilityScoreType Type, const int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void MakeWrestlerProfileSkillFromWrestlingSkillParam(FELWrestlerProfile_Skill& WrestlerProfile_Skill, const FWrestlingSkillParam& WrestlingSkillParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetPassiveSkill(const FWrestlingSkillParam& Param, const int32 Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetActivePassiveSkills(const FWrestlingSkillParam& Param, TSet<int32>& List);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetActiveActionSkills(const FWrestlingSkillParam& Param, TSet<int32>& List);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetActionSkill(const FWrestlingSkillParam& Param, const int32 Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAbilityScore(const FWrestlingSkillParam& Param, const EAbilityScoreType Type);
    
};

