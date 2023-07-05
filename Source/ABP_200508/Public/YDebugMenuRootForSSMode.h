#pragma once
#include "CoreMinimal.h"
#include "ELDebugMenuShortcutKeySettings.h"
#include "ELSSInGameDebugMenuRootBase.h"
#include "YDebugMenuParamForSSMode.h"
#include "YDebugMenuRootForSSMode.generated.h"

class UELDebugMenuManager;
class UYDebugMenuRootForSSMode;

UCLASS(Blueprintable)
class ABP_200508_API UYDebugMenuRootForSSMode : public UELSSInGameDebugMenuRootBase {
    GENERATED_BODY()
public:
    UYDebugMenuRootForSSMode();
    UFUNCTION(BlueprintCallable)
    bool CreateMenu(const FYDebugMenuParamForSSMode& _stParam);
    
    UFUNCTION(BlueprintCallable)
    static bool CreateAndRegistForSSModeDebugMenu(UYDebugMenuRootForSSMode*& _pcInst, const FString& _strRegistKey, UELDebugMenuManager* _pcELDebugMenuMaanger, const TArray<FELDebugMenuShortcutKeySettings>& _cShortcuts, const TArray<FELDebugMenuShortcutKeySettings>& _cCloseShortcuts);
    
};

