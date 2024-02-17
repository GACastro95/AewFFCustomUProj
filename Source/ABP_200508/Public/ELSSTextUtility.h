#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ESSRuleType.h"
#include "ESSTeamType.h"
#include "ELSSTextUtility.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UELSSTextUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELSSTextUtility();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetSSWeaponName(int32 inDatabaseId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetSSRuleType(ESSRuleType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetSSRuleTitle(int32 inDatabaseId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetSSRuleTeam(ESSTeamType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetSSRuleExplanation(int32 inDatabaseId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetSSMoveName(int32 inDatabaseId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetSSLocalizeText(const FString& stKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetSSItemName(int32 inDatabaseId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetSSHeatSkillName(int32 inDatabaseId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetSSHeatSkillFlavor(int32 inDatabaseId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetSSAbilityName(int32 inDatabaseId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetSSAbilityFlavor(int32 inDatabaseId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetLocalizeText(const FString& stNS, const FString& stKey);
    
};

