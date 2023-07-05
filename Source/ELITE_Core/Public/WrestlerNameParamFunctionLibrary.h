#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "WrestlerNameString.h"
#include "WrestlerNameText.h"
#include "WrestlerNameParamFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class ELITE_CORE_API UWrestlerNameParamFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UWrestlerNameParamFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ToWrestlerNameText(const FWrestlerNameString& Target, FWrestlerNameText& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ToWrestlerNameString_EditorOnly(const FWrestlerNameText& Target, FWrestlerNameString& Out);
    
    UFUNCTION(BlueprintCallable)
    static void SetWrestlerUpperName(UPARAM(Ref) FWrestlerNameString& Target, const FString& UpperNameString);
    
    UFUNCTION(BlueprintCallable)
    static void SetWrestlerLowerName(UPARAM(Ref) FWrestlerNameString& Target, const FString& LowerNameString);
    
    UFUNCTION(BlueprintCallable)
    static void SetSnsAccount(UPARAM(Ref) FWrestlerNameString& Target, const FString& InAccountString);
    
    UFUNCTION(BlueprintCallable)
    static void SetShortName(UPARAM(Ref) FWrestlerNameString& Target, const FString& InShortNameString);
    
    UFUNCTION(BlueprintCallable)
    static void SetNickName(UPARAM(Ref) FWrestlerNameString& Target, const FString& InNickNameString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetWrestlerSpokenNameText(const FWrestlerNameText Param, FText& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetWrestlerSnsText(const FWrestlerNameText Param, FText& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetWrestlerSnsAsText(const FWrestlerNameString Param, FText& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetWrestlerShortNameText(const FWrestlerNameText Param, const bool bUpper, FText& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetWrestlerShortNameAsText(const FWrestlerNameString Param, const bool bUpper, FText& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetWrestlerNickNameText(const FWrestlerNameText Param, const bool bUpper, FText& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetWrestlerNickNameAsText(const FWrestlerNameString Param, const bool bUpper, FText& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetWrestlerNameText(const FWrestlerNameText Param, const bool bUpper, FText& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetWrestlerNameAsText(const FWrestlerNameString Param, const bool bUpper, FText& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMultiLineWrestlerNameText(const FWrestlerNameText Param, const bool bUpper, FText& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMultiLineWrestlerNameAsText(const FWrestlerNameString Param, const bool bUpper, FText& Out);
    
};

