#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "EYDebugMenuShortcutKeyCheckType.h"
#include "DebugMenuShortcutKeySettings.generated.h"

USTRUCT(BlueprintType)
struct FDebugMenuShortcutKeySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYDebugMenuShortcutKeyCheckType CheckType;
    
    YDEBUG_API FDebugMenuShortcutKeySettings();
};

