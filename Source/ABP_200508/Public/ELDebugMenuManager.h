#pragma once
#include "CoreMinimal.h"
#include "ELDBG_ReferBase.h"
#include "ELDebugMenuManager.generated.h"

class APlayerController;
class UELDebugMenuManager;
class UELDebugMenuRootBase;
class UELDebugMenuSubMenuBase;
class UObject;
class UWorld;

UCLASS(Blueprintable)
class ABP_200508_API UELDebugMenuManager : public UELDBG_ReferBase {
    GENERATED_BODY()
public:
    UELDebugMenuManager();
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
    static bool SetELDebugMenuManagerGlobalInstance(UELDebugMenuManager* _pcInst);
    
    UFUNCTION(BlueprintCallable)
    bool ScreenShot(FString& _rstrFilePath, bool bShowGameUI);
    
    UFUNCTION(BlueprintCallable)
    bool RegistRoot(UELDebugMenuRootBase* _pcInst, const FString& _strRegistKey);
    
    UFUNCTION(BlueprintCallable)
    static bool LoadJsonForELDebugMenuManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShowMenu() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsShowChildUI();
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableInputForImGui();
    
    UFUNCTION(BlueprintCallable)
    static bool IsEnableIngameELDebugMenu();
    
    UFUNCTION(BlueprintCallable)
    static bool IsEnableELDebugMenuSystem();
    
    UFUNCTION(BlueprintCallable)
    static bool IsEnableELDebugCamera();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    UWorld* GetWorldForBP(const UObject* WorldContextObject) const;
    
    UFUNCTION(BlueprintCallable)
    static bool GetELDebugMenuManagerGlobalInstance(UELDebugMenuManager*& _pcInst);
    
    UFUNCTION(BlueprintCallable)
    APlayerController* GetController();
    
    UFUNCTION(BlueprintCallable)
    UELDebugMenuRootBase* FindRoot(const FString& _strRegistKey);
    
    UFUNCTION(BlueprintCallable)
    static bool ELResetWidget();
    
    UFUNCTION(BlueprintCallable)
    static bool ELResetImGuiInputFlags();
    
    UFUNCTION(BlueprintCallable)
    bool CreateELDebugSubMenu(UELDebugMenuSubMenuBase*& _pcInst, const FString& _strRegistKey, UELDebugMenuRootBase* _pcParent);
    
    UFUNCTION(BlueprintCallable)
    bool CreateELDebugMenuRootBase(UELDebugMenuRootBase*& _pcInst, const FString& _strRegistKey);
    
    UFUNCTION(BlueprintCallable)
    static bool CreateELDebugMenuManager(UELDebugMenuManager*& _pcInst);
    
    UFUNCTION(BlueprintCallable)
    static bool ClearELDebugMenuManagerGlobalInstance();
    
};

