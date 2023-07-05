#pragma once
#include "CoreMinimal.h"
#include "EELBelt.h"
#include "ELCareerWidgetBase.h"
#include "ELCareerRecordsWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELCareerRecordsWidgetBase : public UELCareerWidgetBase {
    GENERATED_BODY()
public:
    UELCareerRecordsWidgetBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPressedMoveTab(bool _isLeft);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPressedMoveOtherList(int32 _addX, int32 _addY);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBeltDispThumbnail(EELBelt eBelt);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EELBelt GetBeltHighestRank();
    
};

