#include "YDebugMenuRootForIngame.h"

UYDebugMenuRootForIngame::UYDebugMenuRootForIngame() {
}

bool UYDebugMenuRootForIngame::CreateMenu(const FYDebugMenuParamForIngame& _stParam) {
    return false;
}

bool UYDebugMenuRootForIngame::CreateAndRegistForIngameDebugMenu(UYDebugMenuRootForIngame*& _pcInst, const FString& _strRegistKey, UELDebugMenuManager* _pcELDebugMenuMaanger, const TArray<FELDebugMenuShortcutKeySettings>& _cShortcuts) {
    return false;
}


