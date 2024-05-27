#pragma once
#include "CoreMinimal.h"
#include "ELDebugMenuSimpleUIParam.h"
#include "ELDebugMenuSubMenuDefaultParam.h"
#include "ELDebugMenuUIBase.h"
#include "ELDebugMenuSubMenuBase.generated.h"

class UELDebugMenuRootBase;
class UELDebugMenuSubMenuBase;

UCLASS(Blueprintable)
class ABP_200508_API UELDebugMenuSubMenuBase : public UELDebugMenuUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, TWeakObjectPtr<UELDebugMenuSubMenuBase>> m_cSubMenus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UELDebugMenuRootBase> m_cRefParentRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UELDebugMenuSubMenuBase> m_cRefParentSubMenu;
    
public:
    UELDebugMenuSubMenuBase();

    UFUNCTION(BlueprintCallable)
    bool UpdateSimpleMenuUIRecursive(const FELDebugMenuSimpleUIParam& _rstSubRootMenu, const FString& _strRegistKey);
    
    UFUNCTION(BlueprintCallable)
    void SetRegistKey(const FString& _strRegistKey);
    
    UFUNCTION(BlueprintCallable)
    void SetParentSubMenu(UELDebugMenuSubMenuBase* _pcDebugMenuSubMenuBase);
    
    UFUNCTION(BlueprintCallable)
    void SetParentRoot(UELDebugMenuRootBase* _pcDebugMenuRootBase);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultParam(const FELDebugMenuSubMenuDefaultParam& _stParam);
    
    UFUNCTION(BlueprintCallable)
    void SetActive(bool _bActive);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveSubMenu(const FString& _strRegistKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetRegistKey();
    
    UFUNCTION(BlueprintCallable)
    bool FindSubMenu(UELDebugMenuSubMenuBase*& _pcSubMenu, const FString& _strRegistKey);
    
    UFUNCTION(BlueprintCallable)
    bool FindSimpleMenuUIRecursive(FELDebugMenuSimpleUIParam& _rstSubRootMenu, const FString& _strRegistKey);
    
    UFUNCTION(BlueprintCallable)
    bool CreateSubMenu(UELDebugMenuSubMenuBase*& _pcInst, const FString& _strRegistKey_pcParent);
    
    UFUNCTION(BlueprintCallable)
    bool AddSubMenu(UELDebugMenuSubMenuBase* _pcSubMenu, const FString& _strRegistKey);
    
};

