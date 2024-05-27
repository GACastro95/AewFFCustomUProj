#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ELUserWidget.generated.h"

class UUMGSequencePlayer;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class ELITE_GAME_API UELUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UELUserWidget();

    UFUNCTION(BlueprintCallable)
    UUMGSequencePlayer* SkipLastFrameAnimation(UWidgetAnimation* InAnimation);
    
};

