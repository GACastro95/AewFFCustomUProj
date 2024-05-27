#include "ELWrestlerSkillListWidgetBase.h"

UELWrestlerSkillListWidgetBase::UELWrestlerSkillListWidgetBase() : UUserWidget(FObjectInitializer::Get()) {
}

void UELWrestlerSkillListWidgetBase::SetupSkillData() {
}

void UELWrestlerSkillListWidgetBase::GetPassiveSkill_ItemParam(const UObject* WorldContextObject, const FELWrestlerSkill_Passive& InActionSkill, const int32& inSkillIndex, bool& SkillUsed, int32& SortIndex, ECareerSkillState& SkillState, int32& SkillNo, int32& SkillCost, FText& SkillName, FText& SkillDetail, TSoftObjectPtr<UTexture2D>& SkillThumbnail, TSoftObjectPtr<UTexture2D>& SkillImage) {
}

void UELWrestlerSkillListWidgetBase::GetParameterSkill_ItemParam(const UObject* WorldContextObject, const FELWrestlerSkill_Parameter& InPrameterSkill, const int32& inSkillIndex, bool& SkillUsed, int32& SortIndex, int32& SkillLevel, int32& MaxSkillLevel, ECareerSkillLevelState& SkillLevelState, TArray<int32>& SkillCostList, TArray<FText>& SkillNameList, TArray<FText>& SkillDetailList, TSoftObjectPtr<UTexture2D>& SkillImage, bool& SkillLocked) {
}

FText UELWrestlerSkillListWidgetBase::GetCareerSkillTextFromLocalizeKey(const FName LocalizeKey) {
    return FText::GetEmpty();
}

FText UELWrestlerSkillListWidgetBase::GetCareerSkillText(const FName InDataTableKey) {
    return FText::GetEmpty();
}

FText UELWrestlerSkillListWidgetBase::GetCareerMenuText(const FName InDataTableKey) {
    return FText::GetEmpty();
}

void UELWrestlerSkillListWidgetBase::GetActionSkill_ItemParam(const UObject* WorldContextObject, const FELWrestlerSkill_Action& InActionSkill, const int32& inSkillIndex, bool& SkillUsed, int32& SortIndex, ECareerSkillState& SkillState, int32& SkillNo, int32& SkillCost, FText& SkillName, FText& SkillDetail, TSoftObjectPtr<UTexture2D>& SkillThumbnail, TSoftObjectPtr<UTexture2D>& SkillImage) {
}


