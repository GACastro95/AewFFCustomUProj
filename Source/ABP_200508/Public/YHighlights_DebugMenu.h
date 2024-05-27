#pragma once
#include "CoreMinimal.h"
#include "ELDebugMenuRootBase.h"
#include "YHighlights_DebugMenu.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UYHighlights_DebugMenu : public UELDebugMenuRootBase {
    GENERATED_BODY()
public:
    UYHighlights_DebugMenu();

    UFUNCTION(BlueprintCallable)
    void SetStartCaptureVideo(bool _bHilights);
    
    UFUNCTION(BlueprintCallable)
    bool IsStartCaptureVideo();
    
};

