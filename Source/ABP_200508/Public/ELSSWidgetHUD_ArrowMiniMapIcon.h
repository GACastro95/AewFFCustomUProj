#pragma once
#include "CoreMinimal.h"
#include "ELSSWidgetBase.h"
#include "ELSSWidgetHUD_ArrowMiniMapIcon.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSWidgetHUD_ArrowMiniMapIcon : public UELSSWidgetBase {
    GENERATED_BODY()
public:
    UELSSWidgetHUD_ArrowMiniMapIcon();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetArrowIconTexture(int32 InPlayerIndex, int32 InIconType);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Init();
    
};

