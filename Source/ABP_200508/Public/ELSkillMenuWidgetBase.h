#pragma once
#include "CoreMinimal.h"
#include "ELCareerWidgetBase.h"
#include "ELSkillMenuWidgetBase.generated.h"

class AELCareerSkillManager;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSkillMenuWidgetBase : public UELCareerWidgetBase {
    GENERATED_BODY()
public:
    UELSkillMenuWidgetBase();

    UFUNCTION(BlueprintCallable)
    void SetTabTick(bool _bTick);
    
    UFUNCTION(BlueprintCallable)
    void SetSkillManager(AELCareerSkillManager* _SkillManager);
    
    UFUNCTION(BlueprintCallable)
    void SetSkillCategory(int32 _CategoryPage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTabTick();
    
    UFUNCTION(BlueprintCallable)
    void InitSkillMenuWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELCareerSkillManager* GetSkillManager();
    
    UFUNCTION(BlueprintCallable)
    void AddSkillMenuCanvasPanelTypeWidget(UUserWidget* _widget);
    
    UFUNCTION(BlueprintCallable)
    void AddSkillMenuBorderTabTypeWidget(int32 _Tab, UUserWidget* _widget);
    
};

