#pragma once
#include "CoreMinimal.h"
#include "ELControllableInterface.h"
#include "GameFramework/Actor.h"
#include "InputCoreTypes.h"
#include "ECareerCityMoveVehicleType.h"
#include "OnFinishedVehicleMove_ResultIntegerDelegate.h"
#include "ELCareerVehicleActor.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API AELCareerVehicleActor : public AActor, public IELControllableInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFinishedVehicleMove_ResultInteger OnFinishedVehicleMove;
    
public:
    AELCareerVehicleActor();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateBottomHelp(bool bFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MeshVisibleBP(ECareerCityMoveVehicleType eVehicleType);
    
    
    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    void EventInput_TriggerR_Released() override PURE_VIRTUAL(EventInput_TriggerR_Released,);
    
    UFUNCTION(BlueprintCallable)
    void EventInput_TriggerR_Pressed() override PURE_VIRTUAL(EventInput_TriggerR_Pressed,);
    
    UFUNCTION(BlueprintCallable)
    void EventInput_TriggerL_Released() override PURE_VIRTUAL(EventInput_TriggerL_Released,);
    
    UFUNCTION(BlueprintCallable)
    void EventInput_TriggerL_Pressed() override PURE_VIRTUAL(EventInput_TriggerL_Pressed,);
    
    UFUNCTION(BlueprintCallable)
    void EventInput_Start_Released() override PURE_VIRTUAL(EventInput_Start_Released,);
    
    UFUNCTION(BlueprintCallable)
    void EventInput_Start_Pressed() override PURE_VIRTUAL(EventInput_Start_Pressed,);
    
    UFUNCTION(BlueprintCallable)
    void EventInput_SpaceKey_Released() override PURE_VIRTUAL(EventInput_SpaceKey_Released,);
    
    UFUNCTION(BlueprintCallable)
    void EventInput_SpaceKey_Pressed() override PURE_VIRTUAL(EventInput_SpaceKey_Pressed,);
    
    UFUNCTION(BlueprintCallable)
    void EventInput_Select_Released() override PURE_VIRTUAL(EventInput_Select_Released,);
    
    UFUNCTION(BlueprintCallable)
    void EventInput_Select_Pressed() override PURE_VIRTUAL(EventInput_Select_Pressed,);
    
    UFUNCTION(BlueprintCallable)
    void EventInput_MouseWheelClick_Released() override PURE_VIRTUAL(EventInput_MouseWheelClick_Released,);
    
    UFUNCTION(BlueprintCallable)
    void EventInput_MouseWheelClick_Pressed() override PURE_VIRTUAL(EventInput_MouseWheelClick_Pressed,);
    
    UFUNCTION(BlueprintCallable)
    void EventInput_MouseWheel_Released() override PURE_VIRTUAL(EventInput_MouseWheel_Released,);
    
    UFUNCTION(BlueprintCallable)
    void EventInput_MouseWheel_Pressed() override PURE_VIRTUAL(EventInput_MouseWheel_Pressed,);
    
    UFUNCTION(BlueprintCallable)
    void EventInput_MouseButtonR_Released() override PURE_VIRTUAL(EventInput_MouseButtonR_Released,);
    
    UFUNCTION(BlueprintCallable)
    void EventInput_MouseButtonR_Pressed() override PURE_VIRTUAL(EventInput_MouseButtonR_Pressed,);
    
    UFUNCTION(BlueprintCallable)
    void EventInput_MouseButtonL_Released() override PURE_VIRTUAL(EventInput_MouseButtonL_Released,);
    
    UFUNCTION(BlueprintCallable)
    void EventInput_MouseButtonL_Pressed() override PURE_VIRTUAL(EventInput_MouseButtonL_Pressed,);
    
    UFUNCTION(BlueprintCallable)
    void EventInput_LShiftKey_Released() override PURE_VIRTUAL(EventInput_LShiftKey_Released,);
    
    UFUNCTION(BlueprintCallable)
    void EventInput_LShiftKey_Pressed() override PURE_VIRTUAL(EventInput_LShiftKey_Pressed,);
    
    UFUNCTION(BlueprintCallable)
    void EventInput_FaceButtonUp_Released() override PURE_VIRTUAL(EventInput_FaceButtonUp_Released,);
    
    UFUNCTION(BlueprintCallable)
    void EventInput_FaceButtonUp_Pressed() override PURE_VIRTUAL(EventInput_FaceButtonUp_Pressed,);
    
    UFUNCTION(BlueprintCallable)
    void EventInput_FaceButtonRight_Released() override PURE_VIRTUAL(EventInput_FaceButtonRight_Released,);
    
    UFUNCTION(BlueprintCallable)
    void EventInput_FaceButtonRight_Pressed() override PURE_VIRTUAL(EventInput_FaceButtonRight_Pressed,);
    
    UFUNCTION(BlueprintCallable)
    void EventInput_FaceButtonLeft_Released() override PURE_VIRTUAL(EventInput_FaceButtonLeft_Released,);
    
    UFUNCTION(BlueprintCallable)
    void EventInput_FaceButtonLeft_Pressed() override PURE_VIRTUAL(EventInput_FaceButtonLeft_Pressed,);
    
    UFUNCTION(BlueprintCallable)
    void EventInput_FaceButtonDown_Released() override PURE_VIRTUAL(EventInput_FaceButtonDown_Released,);
    
    UFUNCTION(BlueprintCallable)
    void EventInput_FaceButtonDown_Pressed() override PURE_VIRTUAL(EventInput_FaceButtonDown_Pressed,);
    
    UFUNCTION(BlueprintCallable)
    void EventInput_DPadUp_Released() override PURE_VIRTUAL(EventInput_DPadUp_Released,);
    
    UFUNCTION(BlueprintCallable)
    void EventInput_DPadUp_Pressed() override PURE_VIRTUAL(EventInput_DPadUp_Pressed,);
    
    UFUNCTION(BlueprintCallable)
    void EventInput_DPadRight_Released() override PURE_VIRTUAL(EventInput_DPadRight_Released,);
    
    UFUNCTION(BlueprintCallable)
    void EventInput_DPadRight_Pressed() override PURE_VIRTUAL(EventInput_DPadRight_Pressed,);
    
    UFUNCTION(BlueprintCallable)
    void EventInput_DPadLeft_Released() override PURE_VIRTUAL(EventInput_DPadLeft_Released,);
    
    UFUNCTION(BlueprintCallable)
    void EventInput_DPadLeft_Pressed() override PURE_VIRTUAL(EventInput_DPadLeft_Pressed,);
    
    UFUNCTION(BlueprintCallable)
    void EventInput_DPadDown_Released() override PURE_VIRTUAL(EventInput_DPadDown_Released,);
    
    UFUNCTION(BlueprintCallable)
    void EventInput_DPadDown_Pressed() override PURE_VIRTUAL(EventInput_DPadDown_Pressed,);
    
    UFUNCTION(BlueprintCallable)
    void EventInput_ChatAction_Released() override PURE_VIRTUAL(EventInput_ChatAction_Released,);
    
    UFUNCTION(BlueprintCallable)
    void EventInput_ChatAction_Pressed() override PURE_VIRTUAL(EventInput_ChatAction_Pressed,);
    
    UFUNCTION(BlueprintCallable)
    void EventInput_BumperR_Released() override PURE_VIRTUAL(EventInput_BumperR_Released,);
    
    UFUNCTION(BlueprintCallable)
    void EventInput_BumperR_Pressed() override PURE_VIRTUAL(EventInput_BumperR_Pressed,);
    
    UFUNCTION(BlueprintCallable)
    void EventInput_BumperL_Released() override PURE_VIRTUAL(EventInput_BumperL_Released,);
    
    UFUNCTION(BlueprintCallable)
    void EventInput_BumperL_Pressed() override PURE_VIRTUAL(EventInput_BumperL_Pressed,);
    
    UFUNCTION(BlueprintCallable)
    void EventInput_AnyKey(FKey _key) override PURE_VIRTUAL(EventInput_AnyKey,);
    
    UFUNCTION(BlueprintCallable)
    void EventInput_AnalogRTrigger(float _fAmount) override PURE_VIRTUAL(EventInput_AnalogRTrigger,);
    
    UFUNCTION(BlueprintCallable)
    void EventInput_AnalogRDirectionY(float _fAmount) override PURE_VIRTUAL(EventInput_AnalogRDirectionY,);
    
    UFUNCTION(BlueprintCallable)
    void EventInput_AnalogRDirectionX(float _fAmount) override PURE_VIRTUAL(EventInput_AnalogRDirectionX,);
    
    UFUNCTION(BlueprintCallable)
    void EventInput_AnalogR_Released() override PURE_VIRTUAL(EventInput_AnalogR_Released,);
    
    UFUNCTION(BlueprintCallable)
    void EventInput_AnalogR_Pressed() override PURE_VIRTUAL(EventInput_AnalogR_Pressed,);
    
    UFUNCTION(BlueprintCallable)
    void EventInput_AnalogLTrigger(float _fAmount) override PURE_VIRTUAL(EventInput_AnalogLTrigger,);
    
    UFUNCTION(BlueprintCallable)
    void EventInput_AnalogLDirectionY(float _fAmount) override PURE_VIRTUAL(EventInput_AnalogLDirectionY,);
    
    UFUNCTION(BlueprintCallable)
    void EventInput_AnalogLDirectionX(float _fAmount) override PURE_VIRTUAL(EventInput_AnalogLDirectionX,);
    
    UFUNCTION(BlueprintCallable)
    void EventInput_AnalogL_Released() override PURE_VIRTUAL(EventInput_AnalogL_Released,);
    
    UFUNCTION(BlueprintCallable)
    void EventInput_AnalogL_Pressed() override PURE_VIRTUAL(EventInput_AnalogL_Pressed,);
    
};

