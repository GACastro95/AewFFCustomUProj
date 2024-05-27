#pragma once
#include "CoreMinimal.h"
#include "YDebugMenuSimpleUIParam.h"
#include "YDebugMenuSubMenuDefaultParam.h"
#include "YDebugMenuUIBase.h"
#include "YDebugMenuSubMenuBase.generated.h"

class UYDebugMenuRootBase;
class UYDebugMenuSubMenuBase;

UCLASS(Blueprintable)
class YDEBUG_API UYDebugMenuSubMenuBase : public UYDebugMenuUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, TWeakObjectPtr<UYDebugMenuSubMenuBase>> m_cSubMenus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UYDebugMenuRootBase> m_cRefParentRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UYDebugMenuSubMenuBase> m_cRefParentSubMenu;
    
public:
    UYDebugMenuSubMenuBase();

    UFUNCTION(BlueprintCallable)
    bool UpdateSimpleMenuUIRecursive(const FYDebugMenuSimpleUIParam& _rstSubRootMenu, const FString& _strRegistKey);
    
    UFUNCTION(BlueprintCallable)
    void SetRegistKey(const FString& _strRegistKey);
    
    UFUNCTION(BlueprintCallable)
    void SetParentSubMenu(UYDebugMenuSubMenuBase* _pcDebugMenuSubMenuBase);
    
    UFUNCTION(BlueprintCallable)
    void SetParentRoot(UYDebugMenuRootBase* _pcDebugMenuRootBase);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultParam(const FYDebugMenuSubMenuDefaultParam& _stParam);
    
    UFUNCTION(BlueprintCallable)
    void SetActive(bool _bActive);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveSubMenu(const FString& _strRegistKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetRegistKey();
    
    UFUNCTION(BlueprintCallable)
    bool FindSubMenu(UYDebugMenuSubMenuBase*& _pcSubMenu, const FString& _strRegistKey);
    
    UFUNCTION(BlueprintCallable)
    bool FindSimpleMenuUIRecursive(FYDebugMenuSimpleUIParam& _rstSubRootMenu, const FString& _strRegistKey);
    
    UFUNCTION(BlueprintCallable)
    bool CreateSubMenu(UYDebugMenuSubMenuBase*& _pcInst, const FString& _strRegistKey);
    
    UFUNCTION(BlueprintCallable)
    bool AddSubMenu(UYDebugMenuSubMenuBase* _pcSubMenu, const FString& _strRegistKey);
    
};

