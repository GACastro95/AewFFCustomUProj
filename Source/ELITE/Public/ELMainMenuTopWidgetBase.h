#pragma once
#include "CoreMinimal.h"
#include "ELMainMenuWidgetBase.h"
#include "ELMainMenuTopWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ELITE_API UELMainMenuTopWidgetBase : public UELMainMenuWidgetBase {
    GENERATED_BODY()
public:
    UELMainMenuTopWidgetBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateCheckEOSSSParamEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartWrestlerSelectLevel();
    
    UFUNCTION(BlueprintCallable)
    void OnStartupCheckEOSSSParamEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetSelectCursorPUID(const FString& PUID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetJoinPartyOwnerPUID(const FString& PUID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRestartMainMenuTop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRequestOpenOnlineNews();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRequestInAnimation(bool IsShop);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPrevSubMenu(int32 TransitionType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNextSubMenu(int32 StackNextType, int32 TransitionType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMakeDialogCancelRequestPrivateMatch();
    
    UFUNCTION(BlueprintCallable)
    void OnFinalizeCheckEOSSSParamEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCloseSubMenuDialog(bool IsCancel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeVisibleWrestlerSelectMenu(bool IsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeSubMenu(int32 SubMenuType, int32 TransitionType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeKeyboardFont(bool Valid);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeDefaultSubMenuBlockInput(bool Valid);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsVisibleShopMenuImpl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsJoinOnlinePatyMatchImpl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsJoinOnlineMiniGameImpl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsInOnlineMenuImpl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetNextSubMenuStateImpl(bool Previous);
    
    UFUNCTION(BlueprintCallable)
    uint8 GetMenuEOSSSParamStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetLastSubMenuStateImpl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool GetKeyboardFontImpl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FString GetJoinPartyOwnerPUIDImpl();
    
};

