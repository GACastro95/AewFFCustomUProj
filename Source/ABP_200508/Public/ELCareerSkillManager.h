#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CareerActionSkillData.h"
#include "CareerParameterSkillArray.h"
#include "CareerParameterSkillData.h"
#include "CareerPassiveSkillData.h"
#include "ECareerSkillState.h"
#include "ELCareerSkillManager.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class ABP_200508_API AELCareerSkillManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCareerParameterSkillData> m_CareerParameterSkillTableBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCareerParameterSkillArray m_ParameterSkillState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCareerActionSkillData> m_CareerActionSkillTableBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_ActionSkillState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCareerPassiveSkillData> m_CareerPassiveSkillTableBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_PassiveSkillState;
    
public:
    AELCareerSkillManager();
    UFUNCTION(BlueprintCallable)
    bool UnlockSkill(int32 _SelectIndex, int32 _LevelIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetSkillCategory(int32 _Category);
    
    UFUNCTION(BlueprintCallable)
    void SaveWrestlerParam();
    
    UFUNCTION(BlueprintCallable)
    void LoadSkillManagerParam();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUnlockCost(int32 _Index, int32 _LevelIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSkillUsed(int32 _Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSkillThumbnail(int32 _Index, TSoftObjectPtr<UTexture2D>& _outTexture);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECareerSkillState GetSkillState(int32 _SelectIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSkillSort(int32 _Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSkillNo(int32 _Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSkillNameStringID(int32 _Index, int32 _LevelIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSkillImage(int32 _Index, TSoftObjectPtr<UTexture2D>& _outTexture);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSkillCategory();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetPassiveSkillStateList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCareerParameterSkillArray GetParameterSkillStateArrayList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetParameterSkillLevel(int32 _Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetDescriptionStringID(int32 _Index, int32 _LevelIndex);
    
    UFUNCTION(BlueprintCallable)
    TArray<FCareerPassiveSkillData> GetCareerPassiveSkillTableBase();
    
    UFUNCTION(BlueprintCallable)
    TArray<FCareerParameterSkillData> GetCareerParameterSkillTableBase();
    
    UFUNCTION(BlueprintCallable)
    TArray<FCareerActionSkillData> GetCareerActionSkillTableBase();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetActionSkillStateList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckOpenParameterSkill(int32 _SelectIndex);
    
    UFUNCTION(BlueprintCallable)
    void AddCareerPassiveSkillData(FCareerPassiveSkillData _Data);
    
    UFUNCTION(BlueprintCallable)
    void AddCareerParameterSkillData(FCareerParameterSkillData _Data);
    
    UFUNCTION(BlueprintCallable)
    void AddCareerActionSkillData(FCareerActionSkillData _Data);
    
};

