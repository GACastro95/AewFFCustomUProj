#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EBasicFlagResult.h"
#include "ELITE_BitUtil.generated.h"

UCLASS(Blueprintable)
class ELITE_CORE_API UELITE_BitUtil : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELITE_BitUtil();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckBit(const int32& Value, uint8 BitIndex);
    
    UFUNCTION(BlueprintCallable)
    static void BitBranch(const int32& Value, uint8 BitIndex, EBasicFlagResult& resultType);
    
};

