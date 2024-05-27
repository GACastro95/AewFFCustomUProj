#pragma once
#include "CoreMinimal.h"
#include "ELDBG_ReferBase.h"
#include "ELDebugMenuNotifyDispatcherDelegate.h"
#include "ELDebugMenuSimpleUIParam.h"
#include "FELDebugMenuDialogButtonType.h"
#include "FELDebugMenuDialogResult.h"
#include "ELDebugMenuUIBase.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UELDebugMenuUIBase : public UELDBG_ReferBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELDebugMenuNotifyDispatcher DebugMenuNotifyDispatcher;
    
    UELDebugMenuUIBase();

    UFUNCTION(BlueprintCallable)
    bool UpdateChildMenuUI(const FELDebugMenuSimpleUIParam& _rstParam, const FString& _strRegistKey);
    
    UFUNCTION(BlueprintCallable)
    FELDebugMenuDialogResult ShowDialog(const FString& _strTitle, const FString& _strMessage, FELDebugMenuDialogButtonType _enButtonType);
    
    UFUNCTION(BlueprintCallable)
    void SetDisabled(bool _bDisabled);
    
    UFUNCTION(BlueprintCallable)
    bool ResetUIValue(const FString& _strRegistKey);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveUI(const FString& _strRegistKey);
    
    UFUNCTION(BlueprintCallable)
    void OnUIUpdated();
    
    UFUNCTION(BlueprintCallable)
    bool IsDisabled();
    
    UFUNCTION(BlueprintCallable)
    bool FindChildMenuUI(FELDebugMenuSimpleUIParam& _rstParam, const FString& _strRegistKey);
    
    UFUNCTION(BlueprintCallable)
    void DrawSimpleUI();
    
    UFUNCTION(BlueprintCallable)
    bool AddUI(const FELDebugMenuSimpleUIParam& _stParam, const FString& _strRegistKey);
    
};

