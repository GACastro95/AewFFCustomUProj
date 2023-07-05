#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EBodyWeightToWightClass.h"
#include "FL_PersonPramUtility.generated.h"

UCLASS(Blueprintable)
class ELITE_GAME_API UFL_PersonPramUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFL_PersonPramUtility();
    UFUNCTION(BlueprintCallable)
    static FText GetDisplayText(const EBodyWeightToWightClass BodyWeightRank);
    
    UFUNCTION(BlueprintCallable)
    static EBodyWeightToWightClass GetBodyWeightToWeightClass(const int32 BodyWeight);
    
    UFUNCTION(BlueprintCallable)
    static FText GetBodyWeightText(const int32 Pounds, const bool bToKg, int32 Step);
    
    UFUNCTION(BlueprintCallable)
    static FText GetBodyHeightText(const float Inch, const bool bToM);
    
    UFUNCTION(BlueprintCallable)
    static void GetBirthMonthTextList(TArray<FText>& Out);
    
    UFUNCTION(BlueprintCallable)
    static FText GenerateBirthDayText(int32 Month, int32 Day);
    
};

