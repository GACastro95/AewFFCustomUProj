#pragma once
#include "CoreMinimal.h"
#include "DebugMenuNotifyDispatcherDelegate.h"
#include "FYDebugMenuDialogButtonType.h"
#include "FYDebugMenuDialogResult.h"
#include "YDBG_ReferBase.h"
#include "YDebugMenuSimpleUIParam.h"
#include "YDebugMenuUIBase.generated.h"

UCLASS(Blueprintable)
class YDEBUG_API UYDebugMenuUIBase : public UYDBG_ReferBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebugMenuNotifyDispatcher DebugMenuNotifyDispatcher;
    
    UYDebugMenuUIBase();

    UFUNCTION(BlueprintCallable)
    bool UpdateChildMenuUI(const FYDebugMenuSimpleUIParam& _stDebugMenuSimpleUIParam, const FString& _strRegistKey);
    
    UFUNCTION(BlueprintCallable)
    FYDebugMenuDialogResult ShowDialog(const FString& _strTitle, const FString& _strMessage, FYDebugMenuDialogButtonType _enButtonType);
    
    UFUNCTION(BlueprintCallable)
    void SetDisabled(bool _bDisabled);
    
    UFUNCTION(BlueprintCallable)
    bool ResetUIValue(const FString& _strRegistKey);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveUI(const FString& _strRegistKey);
    
    UFUNCTION(BlueprintCallable)
    bool IsDisabled();
    
    UFUNCTION(BlueprintCallable)
    bool FindChildMenuUI(FYDebugMenuSimpleUIParam& _stDebugMenuSimpleUIParam, const FString& _strRegistKey);
    
    UFUNCTION(BlueprintCallable)
    void DrawSimpleUI();
    
    UFUNCTION(BlueprintCallable)
    bool AddUI(const FYDebugMenuSimpleUIParam& _stParam, const FString& _strRegistKey);
    
};

