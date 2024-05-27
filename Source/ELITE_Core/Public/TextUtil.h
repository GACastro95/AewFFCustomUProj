#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TextUtil.generated.h"

UCLASS(Blueprintable)
class ELITE_CORE_API UTextUtil : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTextUtil();

    UFUNCTION(BlueprintCallable)
    static int32 Len(const FText& Text);
    
    UFUNCTION(BlueprintCallable)
    static int32 Compare(const FText& A, const FText& B, const bool bSensitive);
    
};

