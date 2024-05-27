#pragma once
#include "CoreMinimal.h"
#include "ELOperationalWidgetBase.h"
#include "MenuWidgetOnCanceledDelegate.h"
#include "MenuWidgetOnFinishedWithResultDelegate.h"
#include "MenuWidgetOnFinishedWithResult_IntegerDelegate.h"
#include "MenuWidgetOnInAnimFinishedDelegate.h"
#include "MenuWidgetOnOutAnimFinishedDelegate.h"
#include "ELMenuWidgetBase.generated.h"

class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELMenuWidgetBase : public UELOperationalWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMenuWidgetOnInAnimFinished OnInAnimFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMenuWidgetOnOutAnimFinished OnOutAnimFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMenuWidgetOnFinishedWithResult OnFinishedMenu;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMenuWidgetOnFinishedWithResult_Integer OnFinishedMenuWithResult_Integer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMenuWidgetOnCanceled OnCanceledMenu;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* MenuTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TabIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreTabIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> TabCursorIndexArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreTabIndex2P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> TabCursorIndexArray2P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastTabIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDecisionKeyboard;
    
public:
    UELMenuWidgetBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateFromStackPrevious();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetMenuTop(UUserWidget* MenuTopWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetDecisionKeyboard(bool bFlag);
    
    UFUNCTION(BlueprintCallable)
    void ResetTabCursor();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenMenu();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSkipMoveTab(int32 NewTabIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMoveTab(bool IsLeft);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMoveRStickLR(bool IsLeft);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDecisionNG();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDecision();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCancel();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsPreparedMenu();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDecisionKeyboard() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CloseMenu();
    
protected:
    UFUNCTION(BlueprintCallable)
    void BroadcastOutAnimFinished();
    
    UFUNCTION(BlueprintCallable)
    void BroadcastInAnimFinished();
    
    UFUNCTION(BlueprintCallable)
    void BroadcastFinishedMenuWithResult_Integer(int32 _WidgetOperationResult);
    
    UFUNCTION(BlueprintCallable)
    void BroadcastFinishedMenu();
    
    UFUNCTION(BlueprintCallable)
    void BroadcastCanceledMenu();
    
};

