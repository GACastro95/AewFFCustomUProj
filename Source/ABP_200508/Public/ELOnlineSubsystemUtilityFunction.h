#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ELOnlineSubsystemUtilityFunction.generated.h"

class UObject;

UCLASS(Blueprintable)
class ABP_200508_API UELOnlineSubsystemUtilityFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELOnlineSubsystemUtilityFunction();

    UFUNCTION(BlueprintCallable)
    static bool ShowStoreUI(int32 LocalControllerId, bool bAddToCart, const FString& Category, const FString& ProductID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ShowProfileUI(const UObject* WorldContextObject, int32 LocalControllerId, const FString& TargetUserId);
    
    UFUNCTION(BlueprintCallable)
    static void SetUsingMultiplayerFeatures(int32 LocalControllerId, bool bUsingMP);
    
};

