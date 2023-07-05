#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EPersonalityBitParamType.h"
#include "EPersonalityIntParamType.h"
#include "PersonalityParam.h"
#include "EditWrestlerCareerUtilityFunction.generated.h"

UCLASS(Blueprintable)
class ELITE_GAME_API UEditWrestlerCareerUtilityFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UEditWrestlerCareerUtilityFunction();
    UFUNCTION(BlueprintCallable)
    static void SetIntParam(UPARAM(Ref) FPersonalityParam& Param, const EPersonalityIntParamType Type, const int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetBitParam(UPARAM(Ref) FPersonalityParam& Param, const EPersonalityBitParamType Type, const bool Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetIntParam(const FPersonalityParam& Param, const EPersonalityIntParamType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetBitParams(const FPersonalityParam& Param, TSet<EPersonalityBitParamType> List);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetBitParam(const FPersonalityParam& Param, const EPersonalityBitParamType Type);
    
};

