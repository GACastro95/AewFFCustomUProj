#pragma once
#include "CoreMinimal.h"
#include "YDBG_ReferBase.h"
#include "YDebugMenuManager.generated.h"

class APlayerController;
class UWorld;
class UYDebugMenuManager;
class UYDebugMenuRootBase;
class UYDebugMenuSubMenuBase;

UCLASS(Blueprintable)
class YDEBUG_API UYDebugMenuManager : public UYDBG_ReferBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, TWeakObjectPtr<UYDebugMenuRootBase>> m_cRootMenus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* m_pcController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UYDebugMenuRootBase> m_cPadActiveMenu;
    
public:
    UYDebugMenuManager();
    UFUNCTION(BlueprintCallable)
    bool UnregistRoot(const FString& _strRegistKey);
    
    UFUNCTION(BlueprintCallable)
    bool Setup(UWorld* _pcWorld);
    
    UFUNCTION(BlueprintCallable)
    void SetShowMenu(bool _bShow);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerController(APlayerController* _pcPlayerController);
    
    UFUNCTION(BlueprintCallable)
    bool SetEnableInputForImGui(bool _bEnable);
    
    UFUNCTION(BlueprintCallable)
    static bool SetDebugMenuManagerGlobalInstance(UYDebugMenuManager* _pcInst);
    
    UFUNCTION(BlueprintCallable)
    bool ScreenShot(FString& _rstrFilePath, bool bShowGameUI);
    
    UFUNCTION(BlueprintCallable)
    static bool ResetWidget();
    
    UFUNCTION(BlueprintCallable)
    static bool ResetImGuiInputFlags();
    
    UFUNCTION(BlueprintCallable)
    bool RegistRoot(UYDebugMenuRootBase* _pcInst, const FString& _strRegistKey);
    
    UFUNCTION(BlueprintCallable)
    static bool LoadJsonForDebugMenuManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShowMenu() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsShowChildUI();
    
    UFUNCTION(BlueprintCallable)
    static bool IsEnableMainMenuDebugMenu();
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableInputForImGui();
    
    UFUNCTION(BlueprintCallable)
    static bool IsEnableIngameDebugMenu();
    
    UFUNCTION(BlueprintCallable)
    static bool IsEnableDebugMenuSystem();
    
    UFUNCTION(BlueprintCallable)
    static bool IsEnableDebugCamera();
    
    UFUNCTION(BlueprintCallable)
    static bool GetDebugMenuManagerGlobalInstance(UYDebugMenuManager*& _pcInst);
    
    UFUNCTION(BlueprintCallable)
    APlayerController* GetController();
    
    UFUNCTION(BlueprintCallable)
    UYDebugMenuRootBase* FindRoot(const FString& _strRegistKey);
    
    UFUNCTION(BlueprintCallable)
    bool CreateYDebugSubMenu(UYDebugMenuSubMenuBase*& _pcInst, const FString& _strRegistKey, UYDebugMenuRootBase* _pcParent);
    
    UFUNCTION(BlueprintCallable)
    bool CreateYDebugMenuRootBase(UYDebugMenuRootBase*& _pcInst, const FString& _strRegistKey);
    
    UFUNCTION(BlueprintCallable)
    static bool CreateYDebugMenuManager(UYDebugMenuManager*& _pcInst);
    
    UFUNCTION(BlueprintCallable)
    static bool ClearDebugMenuManagerGlobalInstance();
    
};

