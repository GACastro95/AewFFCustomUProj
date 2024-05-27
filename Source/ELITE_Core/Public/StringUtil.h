#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "StringUtil.generated.h"

UCLASS(Blueprintable)
class ELITE_CORE_API UStringUtil : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UStringUtil();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ToASCIIOnly(const FString& Str, bool& isChanged);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 Strcmp(const FString& LStr, const FString& RStr, bool IsCaseSensitive);
    
    UFUNCTION(BlueprintCallable)
    static void SplitByCamel(const FString& InStr, TArray<FString>& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ExcludeAsiaString(const FString& Str, bool& isChanged);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ConvHiraganaToKatakana(const FString& From);
    
    UFUNCTION(BlueprintCallable)
    static int32 Compare(const FString& A, const FString& B, const bool bSensitive);
    
};

