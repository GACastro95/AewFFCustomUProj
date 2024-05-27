#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PickableItemID.h"
#include "GrantedItemID_UtilitieFunctions.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UGrantedItemID_UtilitieFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGrantedItemID_UtilitieFunctions();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetUID(const FPickableItemID& Target, int32& Out);
    
};

