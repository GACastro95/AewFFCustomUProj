#pragma once
#include "CoreMinimal.h"
#include "EKeyMappingType.h"
#include "ELSSWidgetBase.h"
#include "ESSOperationGuideExecute.h"
#include "ELSSWidgetHUD_OperationGuide.generated.h"

class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSWidgetHUD_OperationGuide : public UELSSWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UWidget*> FontArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UWidget*> ButtonArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSOperationGuideExecute NowOperationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsGuradState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInteractMode;
    
public:
    UELSSWidgetHUD_OperationGuide();
    UFUNCTION(BlueprintCallable)
    void UpdateOperationGuide();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupFontAndButton();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetOperationGuideType(ESSOperationGuideExecute InType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetKeyConfig(EKeyMappingType InKeyMapType, const FName InMapName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetInteractMode(bool InInteractMode);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetGuideFontAndButtonVisible(int32 InVisibleIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGuideFont(ESSOperationGuideExecute InType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGuardState(bool InIsGuard);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Init();
    
};

