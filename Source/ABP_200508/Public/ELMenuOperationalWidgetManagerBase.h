#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ChangeMenuInputDeviceDelegate.h"
#include "ChangedWidgetDelegate.h"
#include "ChangedWidgetTypeDelegate.h"
#include "ResetWidgetAllDelegate.h"
#include "yEnMenuWidgetType.h"
#include "ELMenuOperationalWidgetManagerBase.generated.h"

class UELOperationalWidgetBase;

UCLASS(Blueprintable)
class ABP_200508_API AELMenuOperationalWidgetManagerBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnableInput1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsChangeBrother;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsUpdateKeyConfig;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UELOperationalWidgetBase*> MenuWidgetArray;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangeMenuInputDevice ChangeInputDeviceDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangedWidget OnChangeWidget;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangedWidgetType OnChangedWidgetType;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResetWidgetAll OnResetWidgetAll;
    
public:
    AELMenuOperationalWidgetManagerBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetManagedMenuWidget(UELOperationalWidgetBase* MenuWidget, yEnMenuWidgetType Type);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentWidget(yEnMenuWidgetType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UELOperationalWidgetBase* GetWidget(yEnMenuWidgetType eMenuWidgetType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UELOperationalWidgetBase*> GetMenuWidgetArray() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    yEnMenuWidgetType GetManagedMenuWidgetType(UELOperationalWidgetBase* MenuWidget) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    yEnMenuWidgetType GetCurrentWidgetType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UELOperationalWidgetBase* GetCurrentWidget() const;
    
    UFUNCTION(BlueprintCallable)
    void CloseAllWidgets();
    
};

