#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EKeyMappingType.h"
#include "KeyMapSettingData.h"
#include "KeyConfigDeviceWidgetInterface.generated.h"

UINTERFACE(Blueprintable)
class UKeyConfigDeviceWidgetInterface : public UInterface {
    GENERATED_BODY()
};

class IKeyConfigDeviceWidgetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UnSelectCursor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSelectCursor(EKeyMappingType _inKeyMapType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Initialize();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeKeyMapLayout(const TArray<FKeyMapSettingData>& _inKeyMapSettingData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeBaseGameMode(bool Valid);
    
};

