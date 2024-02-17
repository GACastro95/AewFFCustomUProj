#pragma once
#include "CoreMinimal.h"
#include "DebugMenuShortcutKeySettings.h"
#include "EYDebugMenuShortcutType.h"
#include "YDebugMenuRootDefaultParam.h"
#include "YDebugMenuSimpleUIParam.h"
#include "YDebugMenuUIBase.h"
#include "YDebugMenuRootBase.generated.h"

class APlayerController;
class UYDebugMenuManager;
class UYDebugMenuRootBase;
class UYDebugMenuSubMenuBase;

UCLASS(Blueprintable)
class YDEBUG_API UYDebugMenuRootBase : public UYDebugMenuUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, TWeakObjectPtr<UYDebugMenuRootBase>> m_cSubRootMenus;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, TWeakObjectPtr<UYDebugMenuSubMenuBase>> m_cSubMenus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UYDebugMenuManager> m_cRefParentManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UYDebugMenuRootBase> m_cRefParentRoot;
    
public:
    UYDebugMenuRootBase();
    UFUNCTION(BlueprintCallable)
    bool UpdateSimpleMenuUIRecursive(const FYDebugMenuSimpleUIParam& _rstSubRootMenu, const FString& _strRegistKey);
    
    UFUNCTION(BlueprintCallable)
    void SetShortcut(const TArray<FDebugMenuShortcutKeySettings>& _cKey, const FString& _strRegistKey, EYDebugMenuShortcutType _eShortCutType);
    
    UFUNCTION(BlueprintCallable)
    void SetRegistKey(const FString& _strRegistKey);
    
    UFUNCTION(BlueprintCallable)
    void SetParentRootMenu(UYDebugMenuRootBase* _pcDebugMenuRootBase);
    
    UFUNCTION(BlueprintCallable)
    void SetParent(UYDebugMenuManager* _pcDebugMenuManager);
    
    UFUNCTION(BlueprintCallable)
    void SetOpenFlag(bool _bOpen);
    
    UFUNCTION(BlueprintCallable)
    void SetMenuTitle(const FString& _strMenuTitle);
    
    UFUNCTION(BlueprintCallable)
    void SetGamePadFocus(bool _bGamePadFocus);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultParam(const FYDebugMenuRootDefaultParam& _stParam);
    
    UFUNCTION(BlueprintCallable)
    void SetActive(bool _bActive);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveSubRootMenu(const FString& _strRegistKey);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveSubMenu(const FString& _strRegistKey);
    
    UFUNCTION(BlueprintCallable)
    bool IsPressedShortcutKey(EYDebugMenuShortcutType& _reShortCutType, APlayerController* _pcPlayerController);
    
    UFUNCTION(BlueprintCallable)
    bool IsOpened();
    
    UFUNCTION(BlueprintCallable)
    bool IsGamePadFocus();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetRegistKey();
    
    UFUNCTION(BlueprintCallable)
    FString GetMenuTitle();
    
    UFUNCTION(BlueprintCallable)
    bool FindSubRootMenu(UYDebugMenuRootBase*& _pcSubRootMenu, const FString& _strRegistKey);
    
    UFUNCTION(BlueprintCallable)
    bool FindSubMenu(UYDebugMenuSubMenuBase*& _pcSubMenu, const FString& _strRegistKey);
    
    UFUNCTION(BlueprintCallable)
    bool FindSimpleMenuUIRecursive(FYDebugMenuSimpleUIParam& _rstSubRootMenu, const FString& _strRegistKey);
    
    UFUNCTION(BlueprintCallable)
    bool CreateSubRootMenu(UYDebugMenuRootBase*& _pcInst, const FString& _strRegistKey);
    
    UFUNCTION(BlueprintCallable)
    bool CreateSubMenu(UYDebugMenuSubMenuBase*& _pcInst, const FString& _strRegistKey);
    
    UFUNCTION(BlueprintCallable)
    bool AddSubRootMenu(UYDebugMenuRootBase* _pcSubRootMenu, const FString& _strRegistKey);
    
    UFUNCTION(BlueprintCallable)
    bool AddSubMenu(UYDebugMenuSubMenuBase* _pcSubMenu, const FString& _strRegistKey);
    
    UFUNCTION(BlueprintCallable)
    void AddShortcut(const FString& _strRegistKey, const TArray<FDebugMenuShortcutKeySettings>& _cKey, EYDebugMenuShortcutType _eShortCutType);
    
};

