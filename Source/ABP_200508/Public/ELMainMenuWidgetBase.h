#pragma once
#include "CoreMinimal.h"
#include "EKeyMappingType.h"
#include "ELMenuWidgetBase.h"
#include "HoldTimerDelegateDelegate.h"
#include "OnEndDelegateDelegate.h"
#include "ELMainMenuWidgetBase.generated.h"

class AELGameCommonPlayerControllerBase;
class APlayerController;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELMainMenuWidgetBase : public UELMenuWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHoldTimerDelegate OnStartHoldTimer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHoldTimerDelegate OnEndHoldTimer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEndDelegate OnEndDelegate;
    
public:
    UELMainMenuWidgetBase();
protected:
    UFUNCTION(BlueprintCallable)
    void SetEnableHoldOkPerController(int32 ControllerId, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableHoldOkAllController(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableHoldOk(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetBlockInputController(int32 ControllerId, bool bBlock);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartNative();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputUp(AELGameCommonPlayerControllerBase* Controller, bool IsRepeat);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputTabRight(AELGameCommonPlayerControllerBase* Controller, bool IsRepeat);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputTabLeft(AELGameCommonPlayerControllerBase* Controller, bool IsRepeat);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputStickRDirectionY(AELGameCommonPlayerControllerBase* Controller, float Amount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputStickRDirectionX(AELGameCommonPlayerControllerBase* Controller, float Amount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputStickR(AELGameCommonPlayerControllerBase* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputStickL(AELGameCommonPlayerControllerBase* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputStart(AELGameCommonPlayerControllerBase* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputSmallTabRight(AELGameCommonPlayerControllerBase* Controller, bool IsRepeat);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputSmallTabLeft(AELGameCommonPlayerControllerBase* Controller, bool IsRepeat);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputSelect(AELGameCommonPlayerControllerBase* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputRStickUp(AELGameCommonPlayerControllerBase* Controller, bool IsRepeat);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputRStickRight(AELGameCommonPlayerControllerBase* Controller, bool IsRepeat);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputRStickLeft(AELGameCommonPlayerControllerBase* Controller, bool IsRepeat);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputRStickDown(AELGameCommonPlayerControllerBase* Controller, bool IsRepeat);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputRight(AELGameCommonPlayerControllerBase* Controller, bool IsRepeat);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputOpenSwitchProfile(AELGameCommonPlayerControllerBase* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputOpenStatus(AELGameCommonPlayerControllerBase* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputOpenSettings(AELGameCommonPlayerControllerBase* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputOpenFriendList(AELGameCommonPlayerControllerBase* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputOpenChat(AELGameCommonPlayerControllerBase* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputOKWithSetDecidePadID(int32 DecideControllerID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputOK(AELGameCommonPlayerControllerBase* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputLeft(AELGameCommonPlayerControllerBase* Controller, bool IsRepeat);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputFaceButtonUp_Released(AELGameCommonPlayerControllerBase* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputFaceButtonUp(AELGameCommonPlayerControllerBase* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputFaceButtonRight_Released(AELGameCommonPlayerControllerBase* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputFaceButtonRight(AELGameCommonPlayerControllerBase* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputFaceButtonLeft_Released(AELGameCommonPlayerControllerBase* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputFaceButtonLeft(AELGameCommonPlayerControllerBase* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputFaceButtonDown_Released(AELGameCommonPlayerControllerBase* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputFaceButtonDown(AELGameCommonPlayerControllerBase* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputDown(AELGameCommonPlayerControllerBase* Controller, bool IsRepeat);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputDecision(AELGameCommonPlayerControllerBase* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputChangeOption(AELGameCommonPlayerControllerBase* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputCancel(AELGameCommonPlayerControllerBase* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputAny(AELGameCommonPlayerControllerBase* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputAnalogRTrigger(AELGameCommonPlayerControllerBase* Controller, float Amount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputAnalogLTrigger(AELGameCommonPlayerControllerBase* Controller, float Amount);
    
    UFUNCTION(BlueprintCallable)
    void OnEndNative();
    
    UFUNCTION(BlueprintCallable)
    void MouseStartHoldOk();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLastInputKeyByKeyboardMouse(APlayerController* _playerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableHoldOkPerController(int32 ControllerId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableHoldOk();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBlockInputController(int32 ControllerId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOkHoldTime();
    
    UFUNCTION(BlueprintCallable)
    void GetLastInputKeyboardKeyInfo(int32 _controllerId, bool& _findKey, EKeyMappingType& _Result);
    
    UFUNCTION(BlueprintCallable)
    void GetLastInputGamepadKeyInfo(int32 _controllerId, bool& _findKey, EKeyMappingType& _Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHoldOkControllerId();
    
    UFUNCTION(BlueprintCallable)
    void CancelHoldOk();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CalcListCursorUp(int32 Current, int32 Size, bool IsRepeat, int32& Next, bool& bMoved);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CalcListCursorDown(int32 Current, int32 Size, bool IsRepeat, int32& Next, bool& bMoved);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CalcListCursor(int32 Current, int32 ChangeNum, int32 Size, bool IsRepeat, int32& Next, bool& bMoved);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CalcGridCursorUp(int32 Current, int32 Size, int32 Width, bool IsRepeat, int32& Next, bool& bMoved);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CalcGridCursorRight(int32 Current, int32 Size, int32 Width, bool IsRepeat, int32& Next, bool& bMoved);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CalcGridCursorLeft(int32 Current, int32 Size, int32 Width, bool IsRepeat, int32& Next, bool& bMoved);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CalcGridCursorDown(int32 Current, int32 Size, int32 Width, bool IsRepeat, int32& Next, bool& bMoved);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CalcGridCursor(int32 Current, int32 ChangeXNum, int32 ChangeYNum, int32 Size, int32 Width, bool IsRepeat, int32& Next, bool& bMoved);
    
};

