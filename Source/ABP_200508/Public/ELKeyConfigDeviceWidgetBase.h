#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EKeyConfigDeviceType.h"
#include "KeyConfigDeviceWidgetInterface.h"
#include "ELKeyConfigDeviceWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELKeyConfigDeviceWidgetBase : public UUserWidget, public IKeyConfigDeviceWidgetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKeyConfigDeviceType m_DeviceType;
    
public:
    UELKeyConfigDeviceWidgetBase();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKeyConfigDeviceType GetDeviceType() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

