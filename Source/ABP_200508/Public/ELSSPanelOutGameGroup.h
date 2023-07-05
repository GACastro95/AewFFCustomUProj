#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EOutGamePanelEventType.h"
#include "ELSSPanelOutGameGroup.generated.h"

class AELSSUIManagerBase;
class UELSSPanelOutGameBase;
class UUserWidget;

UCLASS(Blueprintable)
class ABP_200508_API UELSSPanelOutGameGroup : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UELSSPanelOutGameBase*> grpOutGamePaneList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELSSPanelOutGameBase* grpActivePanelNow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELSSPanelOutGameBase* grpActivePanelPrev;
    
public:
    UELSSPanelOutGameGroup();
    UFUNCTION(BlueprintCallable)
    void SetVisibleGroupAll(const bool IsOn);
    
    UFUNCTION(BlueprintCallable)
    void SetupPanelGroup(const TArray<UELSSPanelOutGameBase*>& panels, AELSSUIManagerBase* uiManager, UUserWidget* commonWidget, UUserWidget* movieWidget);
    
    UFUNCTION(BlueprintCallable)
    bool SelectActivePanelToListId(const int32 TargetID, bool isSwapWait);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSwapPanelEvent(const EOutGamePanelEventType EventType, UELSSPanelOutGameBase* callPanel);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsSwapPanel();
    
    UFUNCTION(BlueprintCallable)
    bool IsParentPanekInputEnable();
    
    UFUNCTION(BlueprintCallable)
    UELSSPanelOutGameBase* GetActivePanel();
    
    UFUNCTION(BlueprintCallable)
    void EndPanelGroup();
    
};

