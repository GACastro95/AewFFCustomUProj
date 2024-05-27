#pragma once
#include "CoreMinimal.h"
#include "ELSSPanelBase.h"
#include "EOutGamePanelEventType.h"
#include "EPlayMovieDelayTimeType.h"
#include "OutGamePanelEventDelegate.h"
#include "SSPrepareMovieStack.h"
#include "ELSSPanelOutGameBase.generated.h"

class AELGameCommonPlayerControllerBase;
class AELSSUIManagerBase;
class AELSSUIManagerOutGame;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSPanelOutGameBase : public UELSSPanelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOutGamePanelEvent onPanelResultEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 panelId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELSSUIManagerOutGame* uiOutGameManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* uiMovieWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSPrepareMovieStack prepareMovieData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isParentInputEnable;
    
public:
    UELSSPanelOutGameBase();

    UFUNCTION(BlueprintCallable)
    void Setup(const int32 ID, AELSSUIManagerBase* uiManager, UUserWidget* commonWidget, UUserWidget* movieWidget);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetPrepareMovieData(const FSSPrepareMovieStack& dat);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetPanelVisible(const bool IsOn);
    
    UFUNCTION(BlueprintCallable)
    bool PlaySE(const FString& seName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayMovie(const FString& MovieID, bool IsLoop, bool isAutoPlay, float addDelayTime, EPlayMovieDelayTimeType delayType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayBGM(const int32 bgmId);
    
    UFUNCTION(BlueprintCallable)
    void Open();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPanelResume();
    
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
    void OnInputOpenStatus(AELGameCommonPlayerControllerBase* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputOpenSettings(AELGameCommonPlayerControllerBase* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputOpenFriendList(AELGameCommonPlayerControllerBase* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputOpenChat(AELGameCommonPlayerControllerBase* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputOK(AELGameCommonPlayerControllerBase* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputLeft(AELGameCommonPlayerControllerBase* Controller, bool IsRepeat);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputFaceButtonUp(AELGameCommonPlayerControllerBase* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputFaceButtonRight(AELGameCommonPlayerControllerBase* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputFaceButtonLeft(AELGameCommonPlayerControllerBase* Controller);
    
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
    
protected:
    UFUNCTION(BlueprintCallable)
    FSSPrepareMovieStack GetPrepareMovieData();
    
public:
    UFUNCTION(BlueprintCallable)
    AELSSUIManagerOutGame* GetOutGameUIManager();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Event_Setup(UUserWidget* movieWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Event_PanelSetup();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Event_PanelOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Event_PanelClose();
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ActivateOutGameEvent(const EOutGamePanelEventType Type);
    
};

