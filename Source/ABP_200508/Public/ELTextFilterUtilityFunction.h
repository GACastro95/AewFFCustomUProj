#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "OnSanitizeTextArrayDelegate.h"
#include "OnSanitizeTextDelegate.h"
#include "ELTextFilterUtilityFunction.generated.h"

class UObject;

UCLASS(Blueprintable)
class UELTextFilterUtilityFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELTextFilterUtilityFunction();
    UFUNCTION(BlueprintCallable)
    static bool TextFilterSteam(int32 _FilterCategory, const FString& _SrcText, FString& _DstText, const FString& ExternalAccountId);
    
    UFUNCTION(BlueprintCallable)
    static bool TextFilterArray(const TArray<FString>& SrcText, const FOnSanitizeTextArray& OnSanitizeTextComplete, UObject* UserData, const FString& ExternalAccountId);
    
    UFUNCTION(BlueprintCallable)
    static bool TextFilter(const FString& SrcText, const FOnSanitizeText& OnSanitizeTextComplete, UObject* UserData, const FString& ExternalAccountId);
    
};

