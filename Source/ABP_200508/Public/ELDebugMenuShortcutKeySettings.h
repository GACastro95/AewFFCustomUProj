#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "EELDebugMenuShortcutKeyCheckType.h"
#include "ELDebugMenuShortcutKeySettings.generated.h"

USTRUCT(BlueprintType)
struct FELDebugMenuShortcutKeySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EELDebugMenuShortcutKeyCheckType CheckType;
    
    ABP_200508_API FELDebugMenuShortcutKeySettings();
};

