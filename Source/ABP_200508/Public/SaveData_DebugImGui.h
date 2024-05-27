#pragma once
#include "CoreMinimal.h"
#include "EELEOSEventResult.h"
#include "EELEOSEventType.h"
#include "SaveData_DebugBase.h"
#include "SaveData_DebugImGui.generated.h"

class USaveData_AccessorBase;

UCLASS(Blueprintable)
class ABP_200508_API USaveData_DebugImGui : public USaveData_DebugBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USaveData_AccessorBase*> m_cAccessors;
    
    USaveData_DebugImGui();

private:
    UFUNCTION(BlueprintCallable)
    void OnEOSEventDispatcher(EELEOSEventType EventType, EELEOSEventResult EventResult);
    
};

