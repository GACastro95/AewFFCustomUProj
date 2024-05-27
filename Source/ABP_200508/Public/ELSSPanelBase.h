#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SSPanelEventDispatcherDelegate.h"
#include "ELSSPanelBase.generated.h"

class UCanvasPanel;
class UELSSWidgetBase;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSPanelBase : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UELSSWidgetBase*> WidgetInstance;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* CommonLayoutWidget;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSPanelEventDispatcher OnClosePanelEventDispatcher;
    
public:
    UELSSPanelBase();

    UFUNCTION(BlueprintCallable)
    void SetZOrderInPanel(UELSSWidgetBase* widgetBase, int32 ZOrder);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetVisible(bool inIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetupChildren(UCanvasPanel* rootCanvas);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdate(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDestroy();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCreate(int32 ZOrder);
    
    UFUNCTION(BlueprintCallable)
    void OnClosePanelNative();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetVisible();
    
};

