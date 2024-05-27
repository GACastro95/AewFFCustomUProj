#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NameUtil.generated.h"

UCLASS(Blueprintable)
class ELITE_CORE_API UNameUtil : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNameUtil();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNone(const FName& Name);
    
};

