#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EKeyMappingType.h"
#include "KeyMapSettingData.h"
#include "ELKeyConfigUtilityFunction.generated.h"

class UObject;

UCLASS(Blueprintable)
class ABP_200508_API UELKeyConfigUtilityFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELKeyConfigUtilityFunction();
    UFUNCTION(BlueprintCallable)
    static void SwapKeyMapSettingData(UPARAM(Ref) FKeyMapSettingData& _dataA, UPARAM(Ref) FKeyMapSettingData& _dataB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidKeyMapData(UPARAM(Ref) FKeyMapSettingData& targetData);
    
    UFUNCTION(BlueprintCallable)
    static void GetDefaultSSModeKeyMapSettingData(bool _isGamepad, TArray<FKeyMapSettingData>& _outResult);
    
    UFUNCTION(BlueprintCallable)
    static void GetDefaultKeyMapSettingData(bool _isGamepad, TArray<FKeyMapSettingData>& _outResult);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void ConvertKeyConfigToButtonIconTag(UObject* _pWorldContextObject, const FText& _TargetText, int32 _localPlayerNo, bool _isGamepad, EKeyMappingType& _resultMappingType, int32& _arrowButtonType);
    
};

