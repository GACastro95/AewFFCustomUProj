#pragma once
#include "CoreMinimal.h"
#include "ESaveDataProcResult.h"
#include "ESaveDataAccessorEvent.h"
#include "SaveData_AccessorDispatcherDelegate.generated.h"

class USaveData_AccessorBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSaveData_AccessorDispatcher, ESaveDataAccessorEvent, SaveDataAccessorEvent, USaveData_AccessorBase*, SaveDataAccessor, ESaveDataProcResult, Result);

