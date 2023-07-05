#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InputCoreTypes.h"
#include "ELControllableInterface.generated.h"

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class ELITE_GAME_API UELControllableInterface : public UInterface {
    GENERATED_BODY()
};

class ELITE_GAME_API IELControllableInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void EventInput_TriggerR_Released() PURE_VIRTUAL(EventInput_TriggerR_Released,);
    
    UFUNCTION(BlueprintCallable)
    virtual void EventInput_TriggerR_Pressed() PURE_VIRTUAL(EventInput_TriggerR_Pressed,);
    
    UFUNCTION(BlueprintCallable)
    virtual void EventInput_TriggerL_Released() PURE_VIRTUAL(EventInput_TriggerL_Released,);
    
    UFUNCTION(BlueprintCallable)
    virtual void EventInput_TriggerL_Pressed() PURE_VIRTUAL(EventInput_TriggerL_Pressed,);
    
    UFUNCTION(BlueprintCallable)
    virtual void EventInput_Start_Released() PURE_VIRTUAL(EventInput_Start_Released,);
    
    UFUNCTION(BlueprintCallable)
    virtual void EventInput_Start_Pressed() PURE_VIRTUAL(EventInput_Start_Pressed,);
    
    UFUNCTION(BlueprintCallable)
    virtual void EventInput_SpaceKey_Released() PURE_VIRTUAL(EventInput_SpaceKey_Released,);
    
    UFUNCTION(BlueprintCallable)
    virtual void EventInput_SpaceKey_Pressed() PURE_VIRTUAL(EventInput_SpaceKey_Pressed,);
    
    UFUNCTION(BlueprintCallable)
    virtual void EventInput_Select_Released() PURE_VIRTUAL(EventInput_Select_Released,);
    
    UFUNCTION(BlueprintCallable)
    virtual void EventInput_Select_Pressed() PURE_VIRTUAL(EventInput_Select_Pressed,);
    
    UFUNCTION(BlueprintCallable)
    virtual void EventInput_MouseWheelClick_Released() PURE_VIRTUAL(EventInput_MouseWheelClick_Released,);
    
    UFUNCTION(BlueprintCallable)
    virtual void EventInput_MouseWheelClick_Pressed() PURE_VIRTUAL(EventInput_MouseWheelClick_Pressed,);
    
    UFUNCTION(BlueprintCallable)
    virtual void EventInput_MouseWheel_Released() PURE_VIRTUAL(EventInput_MouseWheel_Released,);
    
    UFUNCTION(BlueprintCallable)
    virtual void EventInput_MouseWheel_Pressed() PURE_VIRTUAL(EventInput_MouseWheel_Pressed,);
    
    UFUNCTION(BlueprintCallable)
    virtual void EventInput_MouseButtonR_Released() PURE_VIRTUAL(EventInput_MouseButtonR_Released,);
    
    UFUNCTION(BlueprintCallable)
    virtual void EventInput_MouseButtonR_Pressed() PURE_VIRTUAL(EventInput_MouseButtonR_Pressed,);
    
    UFUNCTION(BlueprintCallable)
    virtual void EventInput_MouseButtonL_Released() PURE_VIRTUAL(EventInput_MouseButtonL_Released,);
    
    UFUNCTION(BlueprintCallable)
    virtual void EventInput_MouseButtonL_Pressed() PURE_VIRTUAL(EventInput_MouseButtonL_Pressed,);
    
    UFUNCTION(BlueprintCallable)
    virtual void EventInput_LShiftKey_Released() PURE_VIRTUAL(EventInput_LShiftKey_Released,);
    
    UFUNCTION(BlueprintCallable)
    virtual void EventInput_LShiftKey_Pressed() PURE_VIRTUAL(EventInput_LShiftKey_Pressed,);
    
    UFUNCTION(BlueprintCallable)
    virtual void EventInput_FaceButtonUp_Released() PURE_VIRTUAL(EventInput_FaceButtonUp_Released,);
    
    UFUNCTION(BlueprintCallable)
    virtual void EventInput_FaceButtonUp_Pressed() PURE_VIRTUAL(EventInput_FaceButtonUp_Pressed,);
    
    UFUNCTION(BlueprintCallable)
    virtual void EventInput_FaceButtonRight_Released() PURE_VIRTUAL(EventInput_FaceButtonRight_Released,);
    
    UFUNCTION(BlueprintCallable)
    virtual void EventInput_FaceButtonRight_Pressed() PURE_VIRTUAL(EventInput_FaceButtonRight_Pressed,);
    
    UFUNCTION(BlueprintCallable)
    virtual void EventInput_FaceButtonLeft_Released() PURE_VIRTUAL(EventInput_FaceButtonLeft_Released,);
    
    UFUNCTION(BlueprintCallable)
    virtual void EventInput_FaceButtonLeft_Pressed() PURE_VIRTUAL(EventInput_FaceButtonLeft_Pressed,);
    
    UFUNCTION(BlueprintCallable)
    virtual void EventInput_FaceButtonDown_Released() PURE_VIRTUAL(EventInput_FaceButtonDown_Released,);
    
    UFUNCTION(BlueprintCallable)
    virtual void EventInput_FaceButtonDown_Pressed() PURE_VIRTUAL(EventInput_FaceButtonDown_Pressed,);
    
    UFUNCTION(BlueprintCallable)
    virtual void EventInput_DPadUp_Released() PURE_VIRTUAL(EventInput_DPadUp_Released,);
    
    UFUNCTION(BlueprintCallable)
    virtual void EventInput_DPadUp_Pressed() PURE_VIRTUAL(EventInput_DPadUp_Pressed,);
    
    UFUNCTION(BlueprintCallable)
    virtual void EventInput_DPadRight_Released() PURE_VIRTUAL(EventInput_DPadRight_Released,);
    
    UFUNCTION(BlueprintCallable)
    virtual void EventInput_DPadRight_Pressed() PURE_VIRTUAL(EventInput_DPadRight_Pressed,);
    
    UFUNCTION(BlueprintCallable)
    virtual void EventInput_DPadLeft_Released() PURE_VIRTUAL(EventInput_DPadLeft_Released,);
    
    UFUNCTION(BlueprintCallable)
    virtual void EventInput_DPadLeft_Pressed() PURE_VIRTUAL(EventInput_DPadLeft_Pressed,);
    
    UFUNCTION(BlueprintCallable)
    virtual void EventInput_DPadDown_Released() PURE_VIRTUAL(EventInput_DPadDown_Released,);
    
    UFUNCTION(BlueprintCallable)
    virtual void EventInput_DPadDown_Pressed() PURE_VIRTUAL(EventInput_DPadDown_Pressed,);
    
    UFUNCTION(BlueprintCallable)
    virtual void EventInput_ChatAction_Released() PURE_VIRTUAL(EventInput_ChatAction_Released,);
    
    UFUNCTION(BlueprintCallable)
    virtual void EventInput_ChatAction_Pressed() PURE_VIRTUAL(EventInput_ChatAction_Pressed,);
    
    UFUNCTION(BlueprintCallable)
    virtual void EventInput_BumperR_Released() PURE_VIRTUAL(EventInput_BumperR_Released,);
    
    UFUNCTION(BlueprintCallable)
    virtual void EventInput_BumperR_Pressed() PURE_VIRTUAL(EventInput_BumperR_Pressed,);
    
    UFUNCTION(BlueprintCallable)
    virtual void EventInput_BumperL_Released() PURE_VIRTUAL(EventInput_BumperL_Released,);
    
    UFUNCTION(BlueprintCallable)
    virtual void EventInput_BumperL_Pressed() PURE_VIRTUAL(EventInput_BumperL_Pressed,);
    
    UFUNCTION(BlueprintCallable)
    virtual void EventInput_AnyKey(FKey _key) PURE_VIRTUAL(EventInput_AnyKey,);
    
    UFUNCTION(BlueprintCallable)
    virtual void EventInput_AnalogRTrigger(float _fAmount) PURE_VIRTUAL(EventInput_AnalogRTrigger,);
    
    UFUNCTION(BlueprintCallable)
    virtual void EventInput_AnalogRDirectionY(float _fAmount) PURE_VIRTUAL(EventInput_AnalogRDirectionY,);
    
    UFUNCTION(BlueprintCallable)
    virtual void EventInput_AnalogRDirectionX(float _fAmount) PURE_VIRTUAL(EventInput_AnalogRDirectionX,);
    
    UFUNCTION(BlueprintCallable)
    virtual void EventInput_AnalogR_Released() PURE_VIRTUAL(EventInput_AnalogR_Released,);
    
    UFUNCTION(BlueprintCallable)
    virtual void EventInput_AnalogR_Pressed() PURE_VIRTUAL(EventInput_AnalogR_Pressed,);
    
    UFUNCTION(BlueprintCallable)
    virtual void EventInput_AnalogLTrigger(float _fAmount) PURE_VIRTUAL(EventInput_AnalogLTrigger,);
    
    UFUNCTION(BlueprintCallable)
    virtual void EventInput_AnalogLDirectionY(float _fAmount) PURE_VIRTUAL(EventInput_AnalogLDirectionY,);
    
    UFUNCTION(BlueprintCallable)
    virtual void EventInput_AnalogLDirectionX(float _fAmount) PURE_VIRTUAL(EventInput_AnalogLDirectionX,);
    
    UFUNCTION(BlueprintCallable)
    virtual void EventInput_AnalogL_Released() PURE_VIRTUAL(EventInput_AnalogL_Released,);
    
    UFUNCTION(BlueprintCallable)
    virtual void EventInput_AnalogL_Pressed() PURE_VIRTUAL(EventInput_AnalogL_Pressed,);
    
};

