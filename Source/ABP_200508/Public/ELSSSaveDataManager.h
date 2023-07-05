#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ESSHeatSkillCategory.h"
#include "SSLoadoutSettings.h"
#include "SSPlayerEquipSettings.h"
#include "SSWrestlerSettings.h"
#include "ELSSSaveDataManager.generated.h"

UCLASS(Blueprintable)
class AELSSSaveDataManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSLoadoutSettings LoadoutSettingsDummy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSWrestlerSettings WrestlerSettingsDummy;
    
public:
    AELSSSaveDataManager();
    UFUNCTION(BlueprintCallable)
    void SetLoadoutPresetName(int32 inPresetIndex, const FString& inPresetName);
    
    UFUNCTION(BlueprintCallable)
    void SetLoadoutPresetIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetLoadoutPresetHeatSkillTreeEquipFlag(int32 inPresetIndex, ESSHeatSkillCategory inCategory, int32 inSkillTreeIndex, bool inEquip);
    
    UFUNCTION(BlueprintCallable)
    void SetLoadoutPresetHeatSkillSetting(int32 inPresetIndex, ESSHeatSkillCategory inCategory, int32 inSkillSlotIndex, int32 inSelectedTreeIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetLoadoutPresetHeatSkill(int32 inPresetIndex, ESSHeatSkillCategory inCategory, int32 inSkillIndex, int32 inHeatSkillId);
    
    UFUNCTION(BlueprintCallable)
    void SetLoadoutPresetFinisherId(int32 inPresetIndex, int32 inFinisherId);
    
    UFUNCTION(BlueprintCallable)
    void SetLoadoutPresetAbility(int32 inPresetIndex, int32 inAbilitySlot, int32 inAbilityId);
    
    UFUNCTION(BlueprintCallable)
    void GetSSPlayerEquipSettingsFromSaveData(FSSPlayerEquipSettings& outData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLoadoutPresetNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLoadoutPresetNameMaxLength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetLoadoutPresetName(int32 inPresetIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLoadoutPresetIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLoadoutPresetHeatSkillTreeEquipFlag(int32 inPresetIndex, ESSHeatSkillCategory inCategory, int32 inSkillTreeIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLoadoutPresetHeatSkillSetting(int32 inPresetIndex, ESSHeatSkillCategory inCategory, int32 inSkillSlotIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLoadoutPresetHeatSkill(int32 inPresetIndex, ESSHeatSkillCategory inCategory, int32 inSkillIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLoadoutPresetFinisherId(int32 inPresetIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLoadoutPresetAbility(int32 inPresetIndex, int32 inAbilitySlot) const;
    
    UFUNCTION(BlueprintCallable)
    void ConvertJsonTest();
    
};

