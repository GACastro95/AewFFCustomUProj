#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ELCustomSearchObjBase.generated.h"

UCLASS(Blueprintable)
class ELITE_API UELCustomSearchObjBase : public UObject {
    GENERATED_BODY()
public:
    UELCustomSearchObjBase();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeSearchMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeItemMenu();
    
};

