#pragma once
#include "CoreMinimal.h"
#include "EKeyMappingType.h"
#include "ELSSWidgetBase.h"
#include "ESSInteractOperate.h"
#include "ESSPickupType.h"
#include "ELSSWidgetHUD_ItemInteract.generated.h"

class UELSSWidgetHUD_ItemInteractParts;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSWidgetHUD_ItemInteract : public UELSSWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELSSWidgetHUD_ItemInteractParts* PickupParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELSSWidgetHUD_ItemInteractParts* InventoryParts;
    
public:
    UELSSWidgetHUD_ItemInteract();

    UFUNCTION(BlueprintCallable)
    void SetKeyConfig(EKeyMappingType InKeyMapType);
    
    UFUNCTION(BlueprintCallable)
    void SetInventoryItem(ESSInteractOperate InInteractOperate, ESSPickupType InPickuptype, int32 InItemId, int32 InItemDurability);
    
    UFUNCTION(BlueprintCallable)
    void SetInteractItem(ESSInteractOperate InInteractOperate, ESSPickupType InPickuptype, int32 InItemId, int32 InItemDurability);
    
    UFUNCTION(BlueprintCallable)
    void ApplyWatchGameMode();
    
};

