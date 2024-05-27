#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ESSHeatSkillCategory.h"
#include "ELSSSaveDataUtility.generated.h"

class UObject;

UCLASS(Blueprintable)
class ABP_200508_API UELSSSaveDataUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELSSSaveDataUtility();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetUsingLoadoutPresetFlag(const UObject* WorldContextObject, int32 inPresetIndex, bool InFlag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SetupSSModeSaveData(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetLoadoutPresetName(const UObject* WorldContextObject, int32 inPresetIndex, const FString& inPresetName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetLoadoutPresetIndex(const UObject* WorldContextObject, int32 InIndex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetLoadoutPresetHeatSkillTreeEquipFlag(const UObject* WorldContextObject, int32 inPresetIndex, ESSHeatSkillCategory inCategory, int32 inSkillTreeIndex, bool inEquip);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetLoadoutPresetFinisherId(const UObject* WorldContextObject, int32 inPresetIndex, int32 inFinisherId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetLoadoutPresetAbility(const UObject* WorldContextObject, int32 inPresetIndex, int32 inAbilitySlot, int32 inAbilityId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetDefaultLoadoutPresetNameAll(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetDefaultLoadoutPresetName(const UObject* WorldContextObject, int32 inPresetIndex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SaveRequestSSModeSaveData(const UObject* WorldContextObject, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ResetSSModeSaveData(const UObject* WorldContextObject, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsFinishedSetupSSModeSaveData(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void InitializeLoadoutSettings(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetUsingLoadoutPresetFlag(const UObject* WorldContextObject, int32 inPresetIndex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetLoadoutPresetNum(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetLoadoutPresetNameMaxLength(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FString GetLoadoutPresetName(const UObject* WorldContextObject, int32 inPresetIndex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetLoadoutPresetIndex(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetLoadoutPresetHeatSkillTreeEquipFlag(const UObject* WorldContextObject, int32 inPresetIndex, ESSHeatSkillCategory inCategory, int32 inSkillTreeIndex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetLoadoutPresetFinisherId(const UObject* WorldContextObject, int32 inPresetIndex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetLoadoutPresetAbility(const UObject* WorldContextObject, int32 inPresetIndex, int32 inAbilitySlot);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CopySSModeSaveDataToGameData(const UObject* WorldContextObject, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CopyGameDataToSSModeSaveData(const UObject* WorldContextObject, uint8 _saveDataAccessFlag);
    
};

