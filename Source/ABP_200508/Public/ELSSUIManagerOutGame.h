#pragma once
#include "CoreMinimal.h"
#include "ELSSUIManagerBase.h"
#include "yEnMenuWidgetType.h"
#include "ELSSUIManagerOutGame.generated.h"

class UELOperationalWidgetBase;
class UELSSPanelBase;
class USSMenuWrestlerSelectData;

UCLASS(Blueprintable)
class ABP_200508_API AELSSUIManagerOutGame : public AELSSUIManagerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELSSPanelBase* mainPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSMenuWrestlerSelectData* selectWrestlerData;
    
public:
    AELSSUIManagerOutGame(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool SetupOutGameUI(UELOperationalWidgetBase* mainWidget, const yEnMenuWidgetType addType, bool isCurrentUI);
    
    UFUNCTION(BlueprintCallable)
    bool SetOutGameWidgetManager(const yEnMenuWidgetType addType);
    
    UFUNCTION(BlueprintCallable)
    void RemoveWidgetManagerWidget(const yEnMenuWidgetType addType);
    
    UFUNCTION(BlueprintCallable)
    bool PlaySoundToSE(const FString& seName);
    
};

