#pragma once
#include "CoreMinimal.h"
#include "ELWrestlerSkill_Action.h"
#include "ELWrestlerSkill_Parameter.h"
#include "ELWrestlerSkill_Passive.h"
#include "Blueprint/UserWidget.h"
#include "CareerActionSkillData.h"
#include "CareerParameterSkillData.h"
#include "CareerPassiveSkillData.h"
#include "CareerText.h"
#include "ECareerSkillLevelState.h"
#include "ECareerSkillState.h"
#include "ELWrestlerSkillListWidgetBase.generated.h"

class AELCareerSkillManager;
class UObject;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELWrestlerSkillListWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCareerActionSkillData> m_ActionSkillTableBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCareerPassiveSkillData> m_PassiveSkillTableBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCareerParameterSkillData> m_ParameterSkillTableBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FCareerText> m_MenuTextTableMapBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FCareerText> m_SkillTextTableMapBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FText> m_SkillLocalizeTextTable;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AELCareerSkillManager> m_CareerSkillManagerPtr;
    
public:
    UELWrestlerSkillListWidgetBase();
protected:
    UFUNCTION(BlueprintCallable)
    void SetupSkillData();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void GetPassiveSkill_ItemParam(const UObject* WorldContextObject, const FELWrestlerSkill_Passive& InActionSkill, const int32& inSkillIndex, bool& SkillUsed, int32& SortIndex, ECareerSkillState& SkillState, int32& SkillNo, int32& SkillCost, FText& SkillName, FText& SkillDetail, TSoftObjectPtr<UTexture2D>& SkillThumbnail, TSoftObjectPtr<UTexture2D>& SkillImage);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void GetParameterSkill_ItemParam(const UObject* WorldContextObject, const FELWrestlerSkill_Parameter& InPrameterSkill, const int32& inSkillIndex, bool& SkillUsed, int32& SortIndex, int32& SkillLevel, int32& MaxSkillLevel, ECareerSkillLevelState& SkillLevelState, TArray<int32>& SkillCostList, TArray<FText>& SkillNameList, TArray<FText>& SkillDetailList, TSoftObjectPtr<UTexture2D>& SkillImage, bool& SkillLocked);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCareerSkillTextFromLocalizeKey(const FName LocalizeKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCareerSkillText(const FName InDataTableKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCareerMenuText(const FName InDataTableKey);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void GetActionSkill_ItemParam(const UObject* WorldContextObject, const FELWrestlerSkill_Action& InActionSkill, const int32& inSkillIndex, bool& SkillUsed, int32& SortIndex, ECareerSkillState& SkillState, int32& SkillNo, int32& SkillCost, FText& SkillName, FText& SkillDetail, TSoftObjectPtr<UTexture2D>& SkillThumbnail, TSoftObjectPtr<UTexture2D>& SkillImage);
    
};

