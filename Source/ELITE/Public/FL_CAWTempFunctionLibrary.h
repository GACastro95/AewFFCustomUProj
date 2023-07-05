#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CAWTempParam.h"
#include "FL_CAWTempFunctionLibrary.generated.h"

class UMyWrestlerDataObject;

UCLASS(Blueprintable)
class ELITE_API UFL_CAWTempFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFL_CAWTempFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void ConvertToWrestlerDataObject(const FCAWTempParam& _InTempParam, bool _UpdateProfile, int32 _PresetIndex, UMyWrestlerDataObject* _OutWrestlerDataObject);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertToTempData(const UMyWrestlerDataObject* _InWrestlerDataObject, int32 _PresetIndex, FCAWTempParam& _OutTempParam);
    
};

