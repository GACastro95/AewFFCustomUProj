#pragma once
#include "CoreMinimal.h"
#include "ELMenuWidgetBase.h"
#include "OnlineStoreUIParam.h"
#include "ELTipsLoadingTitleDLCWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ELITE_API UELTipsLoadingTitleDLCWidgetBase : public UELMenuWidgetBase {
    GENERATED_BODY()
public:
    UELTipsLoadingTitleDLCWidgetBase();

    UFUNCTION(BlueprintCallable)
    void SetCheckMode(bool IsValid);
    
    UFUNCTION(BlueprintCallable)
    void OpenOnlineShop(int32 LocalControllerId, const FOnlineStoreUIParam& Param);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMoveNextLevelCancelMove();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMoveNextLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMoveCursorIndex(int32 _addIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputtingShowOnlineShop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputReleaseShowOnlineShop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnForceEndScreen();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCloseWebUrl(const FString& dummy);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCloseOnlineShop(bool bSuccessed);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCloseedOnlineShop(bool bSuccess);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShowOnlineShop() const;
    
};

