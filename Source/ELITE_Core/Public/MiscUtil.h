#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EGender.h"
#include "EGenderConditions.h"
#include "MiscUtil.generated.h"

UCLASS(Blueprintable)
class ELITE_CORE_API UMiscUtil : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMiscUtil();
    UFUNCTION(BlueprintCallable)
    static void ToMeterText(FText& Out, const float InInch, const int32 FractionalDigits);
    
    UFUNCTION(BlueprintCallable)
    static void ToKilogramText(FText& Out, const int32 Pounds, const int32 FractionalDigits, int32 Step);
    
    UFUNCTION(BlueprintCallable)
    static void ToInchText(FText& Out, const int32 InInch, const bool bToFoot);
    
    UFUNCTION(BlueprintCallable)
    static void ToInch(int32& Inch, const int32 InCM);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ToCentimeterF(float& Cm, const int32 InInch);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ToCentimeter(int32& Cm, const int32 InInch);
    
    UFUNCTION(BlueprintCallable)
    static void InchToFeet(int32& Feet, int32& Inch, const int32 InInch);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EvaluateGenderConditions(const EGenderConditions& Conditions, const EGender Gender);
    
};

