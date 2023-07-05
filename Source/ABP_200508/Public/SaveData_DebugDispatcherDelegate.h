#pragma once
#include "CoreMinimal.h"
#include "ESaveDataDebugEvent.h"
#include "SaveData_DebugDispatcherDelegate.generated.h"

class USaveData_DebugBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSaveData_DebugDispatcher, ESaveDataDebugEvent, SaveDataDebugEvent, USaveData_DebugBase*, SaveData_DebugBase);

