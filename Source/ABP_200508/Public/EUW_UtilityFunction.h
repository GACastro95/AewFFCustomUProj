#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EUW_UtilityFunction.generated.h"

class AActor;
class UActorComponent;

UCLASS(Blueprintable)
class ABP_200508_API UEUW_UtilityFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UEUW_UtilityFunction();
private:
    UFUNCTION(BlueprintCallable)
    static void SortMontageKeyArray(UPARAM(Ref) TArray<FString>& OutKeys);
    
    UFUNCTION(BlueprintCallable)
    static void InitializeComponent(AActor* Actor, UActorComponent* Component);
    
};

