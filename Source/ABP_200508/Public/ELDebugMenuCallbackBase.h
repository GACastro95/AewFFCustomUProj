#pragma once
#include "CoreMinimal.h"
#include "ELDBG_ReferBase.h"
#include "ELDebugMenuSimpleUIParamBase.h"
#include "ELDebugMenuCallbackBase.generated.h"

class UELDebugMenuCallbackBase;
class UELDebugMenuManager;
class UELDebugMenuRootBase;
class UGameInstance;
class UWorld;

UCLASS(Blueprintable)
class ABP_200508_API UELDebugMenuCallbackBase : public UELDBG_ReferBase {
    GENERATED_BODY()
public:
    UELDebugMenuCallbackBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDispDebug(bool IsDisp);
    
    UFUNCTION(BlueprintCallable)
    void RequestExit();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseCallbackInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUIValueChanged(const FELDebugMenuSimpleUIParamBase& UIParam, const FString& RegistKey);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetupUI(const FELDebugMenuSimpleUIParamBase& UIParam, const FString& RegistKey);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResetUI(const FELDebugMenuSimpleUIParamBase& UIParam, const FString& RegistKey);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClickUI(const FELDebugMenuSimpleUIParamBase& UIParam, const FString& RegistKey);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Initialize(UGameInstance* GameInstance, UELDebugMenuRootBase* IngameDebugMenu, UELDebugMenuManager* DebugMenuManager);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWorld* GetWorldForBP() const;
    
    UFUNCTION(BlueprintCallable)
    static bool CreateELDebugMenuCallbackInstance(UELDebugMenuCallbackBase*& Instance, const FString& BPPath);
    
protected:
    UFUNCTION(BlueprintCallable)
    void BindUIValueChanged();
    
    UFUNCTION(BlueprintCallable)
    void BindSetupUI();
    
    UFUNCTION(BlueprintCallable)
    void BindResetUI();
    
    UFUNCTION(BlueprintCallable)
    void BindClickUI();
    
};

