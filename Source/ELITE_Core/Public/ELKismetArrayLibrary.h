#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ELKismetArrayLibrary.generated.h"

UCLASS(Blueprintable)
class UELKismetArrayLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELKismetArrayLibrary();
private:
    UFUNCTION(BlueprintCallable)
    static void Array_Shuffle(const TArray<int32>& TargetArray, UPARAM(Ref) FRandomStream& RandomStream);
    
};

