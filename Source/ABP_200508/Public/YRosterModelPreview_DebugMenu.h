#pragma once
#include "CoreMinimal.h"
#include "ELDebugMenuRootBase.h"
#include "YRosterModelPreview_DebugMenu.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UYRosterModelPreview_DebugMenu : public UELDebugMenuRootBase {
    GENERATED_BODY()
public:
    UYRosterModelPreview_DebugMenu();

    UFUNCTION(BlueprintCallable)
    void SetStartRosterModelPreviewLevel(bool _bStart);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStartRosterModelPreviewLevel() const;
    
};

