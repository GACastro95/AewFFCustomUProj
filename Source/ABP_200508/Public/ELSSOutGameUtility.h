#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EMainMenuSubWidgetType.h"
#include "EMainMenuTopSelectWidgetType.h"
#include "ESSWrestlerType.h"
#include "EWrestlerPresetButtonType.h"
#include "ELSSOutGameUtility.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UELSSOutGameUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELSSOutGameUtility();
    UFUNCTION(BlueprintCallable)
    static EWrestlerPresetButtonType GetWrestlerPresetButtonType(const int32 btmId);
    
    UFUNCTION(BlueprintCallable)
    static ESSWrestlerType GetSSWrestlerType(const int32 typeId);
    
    UFUNCTION(BlueprintCallable)
    static EMainMenuTopSelectWidgetType GetSSMainMenuTopSelectWidgetType(const int32 typeId);
    
    UFUNCTION(BlueprintCallable)
    static EMainMenuSubWidgetType GetMainMenuSelectTabType(const int32 menuId);
    
};

