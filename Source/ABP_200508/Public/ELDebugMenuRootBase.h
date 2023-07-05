#pragma once
#include "CoreMinimal.h"
#include "EELDebugMenuShortcutType.h"
#include "ELDebugMenuRootDefaultParam.h"
#include "ELDebugMenuShortcutKeySettings.h"
#include "ELDebugMenuSimpleUIParam.h"
#include "ELDebugMenuUIBase.h"
#include "ELDebugMenuRootBase.generated.h"

class APlayerController;
class UELDebugMenuManager;
class UELDebugMenuRootBase;
class UELDebugMenuSubMenuBase;

UCLASS(Blueprintable)
class ABP_200508_API UELDebugMenuRootBase : public UELDebugMenuUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, TWeakObjectPtr<UELDebugMenuRootBase>> m_cSubRootMenus;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, TWeakObjectPtr<UELDebugMenuSubMenuBase>> m_cSubMenus;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UELDebugMenuManager> m_cRefParentManager;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UELDebugMenuRootBase> m_cRefParentRoot;
    
public:
    UELDebugMenuRootBase();
    UFUNCTION(BlueprintCallable)
    bool UpdateSimpleMenuUIRecursive(const FELDebugMenuSimpleUIParam& _rstParam, const FString& _strRegistKey);
    
    UFUNCTION(BlueprintCallable)
    void SetShortcut(const TArray<FELDebugMenuShortcutKeySettings>& _cKeys, const FString& _strRegistKey, EELDebugMenuShortcutType _eShortCutType);
    
    UFUNCTION(BlueprintCallable)
    void SetRegistKey(const FString& _strRegistKey);
    
    UFUNCTION(BlueprintCallable)
    void SetParentRootMenu(UELDebugMenuRootBase* _pcDebugMenuRootBase);
    
    UFUNCTION(BlueprintCallable)
    void SetParent(UELDebugMenuManager* _pcDebugMenuManager);
    
    UFUNCTION(BlueprintCallable)
    void SetOpenFlag(bool _bOpen);
    
    UFUNCTION(BlueprintCallable)
    void SetMenuTitle(const FString& _strMenuTitle);
    
    UFUNCTION(BlueprintCallable)
    void SetGamePadFocus(bool _bGamePadFocus);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultParam(const FELDebugMenuRootDefaultParam& _stParam);
    
    UFUNCTION(BlueprintCallable)
    void SetActive(bool _bActive);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveSubRootMenu(const FString& _strRegistKey);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveSubMenu(const FString& _strRegistKey);
    
    UFUNCTION(BlueprintCallable)
    bool IsPressedShortcutKey(EELDebugMenuShortcutType& _reShortCutType, APlayerController* _pcPlayerController);
    
    UFUNCTION(BlueprintCallable)
    bool IsOpened();
    
    UFUNCTION(BlueprintCallable)
    bool IsGamePadFocus();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable)
    bool InitDebugMenuRootBase();
    
    UFUNCTION(BlueprintCallable)
    FString GetRegistKey();
    
    UFUNCTION(BlueprintCallable)
    FString GetMenuTitle();
    
    UFUNCTION(BlueprintCallable)
    bool FindSubRootMenu(UELDebugMenuRootBase*& _pcSubRootMenu, const FString& _strRegistKey);
    
    UFUNCTION(BlueprintCallable)
    bool FindSubMenu(UELDebugMenuSubMenuBase*& _pcSubMenu, const FString& _strRegistKey);
    
    UFUNCTION(BlueprintCallable)
    bool FindSimpleMenuUIRecursive(FELDebugMenuSimpleUIParam& _rststParam, const FString& _strRegistKey);
    
    UFUNCTION(BlueprintCallable)
    bool CreateSubRootMenu(UELDebugMenuRootBase*& _pcInst, const FString& _strRegistKey);
    
    UFUNCTION(BlueprintCallable)
    bool CreateSubMenu(UELDebugMenuSubMenuBase*& _pcInst, const FString& _strRegistKey);
    
private:
    UFUNCTION(BlueprintCallable)
    void BindDrawCore();
    
    UFUNCTION(BlueprintCallable)
    void BindChangedOpenFlag();
    
    UFUNCTION(BlueprintCallable)
    void BindActionCore();
    
public:
    UFUNCTION(BlueprintCallable)
    bool AddSubRootMenu(UELDebugMenuRootBase* _pcSubRootMenu, const FString& _strRegistKey);
    
    UFUNCTION(BlueprintCallable)
    bool AddSubMenu(UELDebugMenuSubMenuBase* _pcSubMenu, const FString& _strRegistKey);
    
    UFUNCTION(BlueprintCallable)
    void AddShortcut(const FString& _strRegistKey, const TArray<FELDebugMenuShortcutKeySettings>& _cKeys, EELDebugMenuShortcutType _eShortCutType);
    
};

