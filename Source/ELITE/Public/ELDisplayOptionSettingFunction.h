#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ELDisplayOptionSettingFunction.generated.h"

class UObject;

UCLASS(Blueprintable)
class ELITE_API UELDisplayOptionSettingFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELDisplayOptionSettingFunction();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void InitializeDisplayOptionSetting(UObject* _pWorldContextObject);
    
};

