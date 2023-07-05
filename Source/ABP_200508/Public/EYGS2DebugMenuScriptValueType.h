#pragma once
#include "CoreMinimal.h"
#include "EYGS2DebugMenuScriptValueType.generated.h"

UENUM(BlueprintType)
enum class EYGS2DebugMenuScriptValueType : uint8 {
    CurrentAEWGold,
    TotalAEWGold,
    Platform,
    TransactionID,
    Gold,
    ItemKind,
    ItemID,
    ItemNum,
    SearchOffset,
    SearchNum,
};

