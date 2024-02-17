#pragma once
#include "CoreMinimal.h"
#include "ELSSWidgetBase.h"
#include "ELSSWidgetHUD_AllyMiniMapIcon.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSWidgetHUD_AllyMiniMapIcon : public UELSSWidgetBase {
    GENERATED_BODY()
public:
    UELSSWidgetHUD_AllyMiniMapIcon();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAllyIconTexture(int32 InPlayerIndex, int32 InIconType);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Init();
    
};

