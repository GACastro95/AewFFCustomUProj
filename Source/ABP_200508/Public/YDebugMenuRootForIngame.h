#pragma once
#include "CoreMinimal.h"
#include "ELDebugMenuRootBase.h"
#include "ELDebugMenuShortcutKeySettings.h"
#include "YDebugMenuParamForIngame.h"
#include "YDebugMenuRootForIngame.generated.h"

class UELDebugMenuManager;
class UYDebugMenuRootForIngame;

UCLASS(Blueprintable)
class ABP_200508_API UYDebugMenuRootForIngame : public UELDebugMenuRootBase {
    GENERATED_BODY()
public:
    UYDebugMenuRootForIngame();

    UFUNCTION(BlueprintCallable)
    bool CreateMenu(const FYDebugMenuParamForIngame& _stParam);
    
    UFUNCTION(BlueprintCallable)
    static bool CreateAndRegistForIngameDebugMenu(UYDebugMenuRootForIngame*& _pcInst, const FString& _strRegistKey, UELDebugMenuManager* _pcELDebugMenuMaanger, const TArray<FELDebugMenuShortcutKeySettings>& _cShortcuts);
    
};

