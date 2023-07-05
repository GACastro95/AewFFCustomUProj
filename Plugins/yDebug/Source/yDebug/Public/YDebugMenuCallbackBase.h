#pragma once
#include "CoreMinimal.h"
#include "YDBG_ReferBase.h"
#include "YDebugMenuCallbackDispatcherDelegate.h"
#include "YDebugMenuSimpleUIParamBase.h"
#include "YDebugMenuCallbackBase.generated.h"

class UWorld;
class UYDebugMenuCallbackBase;

UCLASS(Blueprintable)
class YDEBUG_API UYDebugMenuCallbackBase : public UYDBG_ReferBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYDebugMenuCallbackDispatcher OnSetupUIDispatcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYDebugMenuCallbackDispatcher OnResetUIDispatcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYDebugMenuCallbackDispatcher OnClickUIDispatcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYDebugMenuCallbackDispatcher OnUIValueChangedDispatcher;
    
    UYDebugMenuCallbackBase();
    UFUNCTION(BlueprintCallable)
    void OnUIValueChanged_Direct(const FYDebugMenuSimpleUIParamBase& UIParam, const FString& RegistKey);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUIValueChanged(const FYDebugMenuSimpleUIParamBase& UIParam, const FString& RegistKey);
    
    UFUNCTION(BlueprintCallable)
    void OnSetupUI_Direct(const FYDebugMenuSimpleUIParamBase& UIParam, const FString& RegistKey);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetupUI(const FYDebugMenuSimpleUIParamBase& UIParam, const FString& RegistKey);
    
    UFUNCTION(BlueprintCallable)
    void OnResetUI_Direct(const FYDebugMenuSimpleUIParamBase& UIParam, const FString& RegistKey);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResetUI(const FYDebugMenuSimpleUIParamBase& UIParam, const FString& RegistKey);
    
    UFUNCTION(BlueprintCallable)
    void OnClickUI_Direct(const FYDebugMenuSimpleUIParamBase& UIParam, const FString& RegistKey);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClickUI(const FYDebugMenuSimpleUIParamBase& UIParam, const FString& RegistKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWorld* GetWorldForBP() const;
    
    UFUNCTION(BlueprintCallable)
    FYDebugMenuSimpleUIParamBase GetUIParam();
    
    UFUNCTION(BlueprintCallable)
    FString GeRegistKey();
    
    UFUNCTION(BlueprintCallable)
    static bool CreateDebugMenuCallbackInstance(UYDebugMenuCallbackBase*& Instance, const FString& BPPath);
    
};

